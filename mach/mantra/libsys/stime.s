.define _stime
.extern _stime
.sect .text
.sect .rom
.sect .data
.sect .bss
.sect .text
_stime:		move.l #0x19,d0
		move.l 4(sp),a0
		move.l (a0),a0
		trap #0
		bcs 1f
		rts
1:
		jmp cerror
