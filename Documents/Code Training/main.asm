;<Program title>

jmp start

;data

;code
start: nop
	mvi a, 23h
	mvi b, 46h
    stc
    adc b ;6A
    ;aci 46h
    
    mvi a, 37h
    mvi b, 3fh
    stc
    sbb c
    
    ;sbi
    mvi a, 37h
    stc
    sbi 25h

hlt