#include "sys.h"
.define	_lock
.extern	_errno

_lock:
	mov	2(sp),0f+2
	sys	indir; .data2 0f
	bcc	1f
	mov	r0,_errno
	mov	$-1,r0
1:
	rts	pc
.sect .data
0:
	sys	lock
	.data2	0
