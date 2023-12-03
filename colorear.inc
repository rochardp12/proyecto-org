letraColor macro letra fil col cant   
    mov     bh, 0    
    lea     bp, letra  
    mov     bl, 0F3h 
    mov     cx, cant   
    mov     dl, col   
    mov     dh, fil
    mov     ah, 13h  
    mov     al, 1 
    int     10h     
    endm 


tp1_p6letrasH macro 6leH
    letraColor 6leH n1 n4 w11 
    endm

tp1_p9letras macro 9le
    letraColor 9le n4 n4 w17
    endm

tp1_p7letras macro 7le
    letraColor 7le n12 n4 w13 
    endm

tp1_p6letrasD macro l1 l2 l3 l4 l5 l6
    letraColor l1 n4 n2 w1
    letraColor l2 n5 n4 w1
    letraColor l3 n6 n6 w1
    letraColor l4 n7 n8 w1
    letraColor l5 n8 n10 w1
    letraColor l6 n9 n12 w1
    endm

tp1_p5letras macro d1 d2 d3 d4 d5
    letraColor d1 n1 n24 w1
    letraColor d2 n2 n24 w1
    letraColor d3 n3 n24 w1
    letraColor d4 n4 n24 w1
    letraColor d5 n5 n24 w1
    endm


tp2_p5letras macro m1 m2 m3 m4 m5
    letraColor m1 n0 n0 w1
    letraColor m2 n1 n0 w1
    letraColor m3 n2 n0 w1
    letraColor m4 n3 n0 w1
    letraColor m5 n4 n0 w1
    endm

tp2_p6letrasH1 macro 6leH1
    letraColor 6leH1 n5 n12 w11
    endm

tp2_p6letrasH2 macro 6leH2
    letraColor 6leH2 n10 n10 w11
    endm

tp2_p9letras macro 9le2
    letraColor 9le2 n12 n4 w17
    endm

tp2_p7letras macro 7le2
    letraColor 7le2 n0 n4 w13
    endm


org 100h

.data

w1 dw 1
w11 dw 11
w13 dw 13
w9 dw 9
w17 dw 17
w12 dw 12
w8 dw 8

n0 db 0
n1 db 1
n2 db 2
n3 db 3
n4 db 4
n5 db 5
n6 db 6
n7 db 7
n8 db 8
n9 db 9
n10 db 10
n11 db 11
n12 db 12
n13 db 13
n14 db 14
n15 db 15
n16 db 16
n17 db 17
n18 db 18
n19 db 19
n20 db 20
n21 db 21
n22 db 22
n23 db 23
n24 db 24
n25 db 25

