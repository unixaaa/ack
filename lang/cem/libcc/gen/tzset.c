#ifdef BSD4_2
#include <sys/time.h>
#else
#ifndef USG
#include <sys/types.h>
#include <sys/timeb.h>
#endif
#endif

#ifdef USG
long	timezone = -1 * 60;
int	daylight = 1;
char	*tzname[] = {"MET", "MDT",};
#endif

long __timezone = -1 * 60;
int __daylight = 1;
char *__tzname[] = {"MET", "MDT", };

tzset()
{
#ifdef BSD4_2
	struct timeval tval;
	struct timezone tzon;

	gettimeofday(&tval, &tzon);
	__timezone = tzon.tz_minuteswest * 60L;
	__daylight = tzon.tz_dsttime;
#else
#ifndef USG
	struct timeb time;

	ftime(&time);
	__timezone = time.timezone*60L;
	__daylight = time.dstflag;
#endif
#endif

	{
	extern char *getenv();
	register char *p = getenv("TZ");

	if (p && *p) {
		register int n = 0;
		int sign = 1;

		strncpy(__tzname[0], p, 3);
		p += 3;
		if (*(p += 3) == '-') {
			sign = -1;
			p++;
		}

		while(*p >= '0' && *p <= '9')
			n = 10 * n + (*p++ - '0');
		n *= sign;
		__timezone = ((long)(n * 60)) * 60;
		__daylight = (*p != '\0');
		strncpy(__tzname[1], p, 3);
	}
	}
#ifdef USG
	timezone = __timezone;
	daylight = __daylight;
	tzname[0] = __tzname[0];
	tzname[1] = __tzname[1];
#endif
}
