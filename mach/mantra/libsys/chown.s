.define _chown
.extern _chown
.sect .text
.sect .rom
.sect .data
.sect .bss
.sect .text
_chown:		move.l #0x10,d0
		move.l 4(sp),a0
		move.l 8(sp),d1
		move.l 12(sp),a1
		jmp callc
