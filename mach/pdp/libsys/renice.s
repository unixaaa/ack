#include "sys.h"
.define	_renice
.extern	_errno

_renice:
	mov	2(sp),0f+2
	mov	4(sp),0f+4
	sys	local; .data2 0f
	bcc	1f
	mov	r0,_errno
	mov	$-1,r0
	rts	pc
1:
	clr	r0
	rts	pc
.sect .data
0:
	sys	renice
	.data2	0, 0
