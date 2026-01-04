	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 26, 0	sdk_version 26, 2
	.globl	_insertionSort                  ; -- Begin function insertionSort
	.p2align	2
_insertionSort:                         ; @insertionSort
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	x0, [sp, #24]
	str	w1, [sp, #20]
	mov	w8, #1                          ; =0x1
	str	w8, [sp, #12]
	b	LBB0_1
LBB0_1:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB0_3 Depth 2
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #20]
	subs	w8, w8, w9
	b.ge	LBB0_10
	b	LBB0_2
LBB0_2:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #12]
	subs	w8, w8, #1
	str	w8, [sp, #8]
	b	LBB0_3
LBB0_3:                                 ;   Parent Loop BB0_1 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp, #8]
	tbnz	w8, #31, LBB0_8
	b	LBB0_4
LBB0_4:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #12]
	ldr	s0, [x8, x9, lsl #2]
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #8]
	ldr	s1, [x8, x9, lsl #2]
	fcmp	s0, s1
	b.pl	LBB0_6
	b	LBB0_5
LBB0_5:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #12]
	ldr	s0, [x8, x9, lsl #2]
	str	s0, [sp, #16]
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #8]
	ldr	s0, [x8, x9, lsl #2]
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #12]
	str	s0, [x8, x9, lsl #2]
	ldr	s0, [sp, #16]
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #8]
	str	s0, [x8, x9, lsl #2]
	b	LBB0_6
LBB0_6:                                 ;   in Loop: Header=BB0_3 Depth=2
	b	LBB0_7
LBB0_7:                                 ;   in Loop: Header=BB0_3 Depth=2
	ldr	w8, [sp, #8]
	subs	w8, w8, #1
	str	w8, [sp, #8]
	b	LBB0_3
LBB0_8:                                 ;   in Loop: Header=BB0_1 Depth=1
	b	LBB0_9
LBB0_9:                                 ;   in Loop: Header=BB0_1 Depth=1
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #12]
	b	LBB0_1
LBB0_10:
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_selectionSort                  ; -- Begin function selectionSort
	.p2align	2
_selectionSort:                         ; @selectionSort
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32
	.cfi_def_cfa_offset 32
	str	x0, [sp, #24]
	str	w1, [sp, #20]
	str	wzr, [sp, #12]
	b	LBB1_1
LBB1_1:                                 ; =>This Loop Header: Depth=1
                                        ;     Child Loop BB1_3 Depth 2
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #20]
	subs	w8, w8, w9
	b.ge	LBB1_10
	b	LBB1_2
LBB1_2:                                 ;   in Loop: Header=BB1_1 Depth=1
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #8]
	b	LBB1_3
LBB1_3:                                 ;   Parent Loop BB1_1 Depth=1
                                        ; =>  This Inner Loop Header: Depth=2
	ldr	w8, [sp, #8]
	ldr	w9, [sp, #20]
	subs	w8, w8, w9
	b.ge	LBB1_8
	b	LBB1_4
LBB1_4:                                 ;   in Loop: Header=BB1_3 Depth=2
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #12]
	ldr	s0, [x8, x9, lsl #2]
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #8]
	ldr	s1, [x8, x9, lsl #2]
	fcmp	s0, s1
	b.le	LBB1_6
	b	LBB1_5
LBB1_5:                                 ;   in Loop: Header=BB1_3 Depth=2
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #12]
	ldr	s0, [x8, x9, lsl #2]
	str	s0, [sp, #16]
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #8]
	ldr	s0, [x8, x9, lsl #2]
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #12]
	str	s0, [x8, x9, lsl #2]
	ldr	s0, [sp, #16]
	ldr	x8, [sp, #24]
	ldrsw	x9, [sp, #8]
	str	s0, [x8, x9, lsl #2]
	b	LBB1_6
LBB1_6:                                 ;   in Loop: Header=BB1_3 Depth=2
	b	LBB1_7
LBB1_7:                                 ;   in Loop: Header=BB1_3 Depth=2
	ldr	w8, [sp, #8]
	add	w8, w8, #1
	str	w8, [sp, #8]
	b	LBB1_3
LBB1_8:                                 ;   in Loop: Header=BB1_1 Depth=1
	b	LBB1_9
LBB1_9:                                 ;   in Loop: Header=BB1_1 Depth=1
	ldr	w8, [sp, #12]
	add	w8, w8, #1
	str	w8, [sp, #12]
	b	LBB1_1
LBB1_10:
	add	sp, sp, #32
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
