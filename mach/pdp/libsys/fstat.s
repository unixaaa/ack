#include "sys.h"
.define	_fstat
.extern	_errno

_fstat:
	mov	2(sp),r0
	mov	4(sp),0f+2
	sys	indir; .data2 0f
	bcc	1f
	mov	r0,_errno
	mov	$-1,r0
	rts	pc
1:
	clr	r0
	rts	pc
.sect .data
0:
	sys	fstat
	.data2	0
