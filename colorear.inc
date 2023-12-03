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


m1_brasil macro
    letraColor m1_p2 n1 n4 w11 
    endm

m1_argentina macro 
    letraColor m1_p3 n4 n4 w17
    endm

m1_ecuador macro
    letraColor m1_p4 n12 n4 w13 
    endm

m1_italia macro
    letraColor i n4 n2 w1
    letraColor t n5 n4 w1
    letraColor a n6 n6 w1
    letraColor l n7 n8 w1
    letraColor i n8 n10 w1
    letraColor a n9 n12 w1
    endm

m1_rusia macro 
    letraColor r n1 n24 w1
    letraColor u n2 n24 w1
    letraColor s n3 n24 w1
    letraColor i n4 n24 w1
    letraColor a n5 n24 w1
    endm


m2_suiza macro
    letraColor s n0 n0 w1
    letraColor u n1 n0 w1
    letraColor i n2 n0 w1
    letraColor z n3 n0 w1
    letraColor a n4 n0 w1
    endm

m2_panama macro
    letraColor m2_p1 n5 n12 w11
    endm

m2_mexico macro
    letraColor m2_p2 n10 n10 w11
    endm

m2_dinamarca macro
    letraColor m2_p3 n12 n4 w17
    endm

m2_austria macro
    letraColor m2_p4 n0 n4 w13
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

m1_p2 db 'B R A S I L'
m1_p3 db 'A R G E N T I N A'
m1_p4 db 'E C U A D O R'
m2_p1 db 'P A N A M A'
m2_p2 db 'M E X I C O'
m2_p3 db 'D I N A M A R C A'
m2_p4 db 'A U S T R I A'
i db 'I'
t db 'T'
a db 'A'
l db 'L'
r db 'R'
u db 'U'
s db 'S'
z db 'Z'