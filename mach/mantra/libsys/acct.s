.define _acct
.extern _acct
.sect .text
.sect .rom
.sect .data
.sect .bss
.sect .text
_acct:		move.l #0x33,d0
		move.l 4(sp),a0
		jmp callc
