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

a db 'A'
b db 'B'
c db 'C'
d db 'D'
e db 'E'
f db 'F'
g db 'G'
h db 'H'
i db 'I'
j db 'J'
k db 'K'
l db 'L'
m db 'M'
n db 'N'
o db 'O'
p db 'P'
q db 'Q'
r db 'R'
s db 'S'
t db 'T'
u db 'U'
v db 'V'
w db 'W'
x db 'X'
y db 'Y'
z db 'Z'

no db ' '

brasil db 'B R A S I L'
ecuador db 'E C U A D O R'
rusia db 'R U S I A'
dinamarca db 'D I N A M A R C A'
austria db 'A U S T R I A'
tulcan db 'T U L C A N'
manta db 'M A N T A'
cuenca db 'C U E N C A'
chillanes db 'C H I L L A N E S'
taiwan db 'T A I W A N'
senegal db 'S E N E G A L'
camboya db 'C A M B O Y A'


m1_tm1_p1 PROC
    letraColor i n4 n2 w1
    letraColor no n4 n3 w1
    letraColor t n5 n4 w1
    letraColor no n5 n5 w1
    letraColor a n6 n6 w1
    letraColor no n6 n7 w1
    letraColor l n7 n8 w1
    letraColor no n7 n9 w1
    letraColor i n8 n10 w1
    letraColor no n8 n11 w1
    letraColor a n9 n12 w1
    letraColor no n9 n13 w1
    ret
m1_tm1_p1 ENDP

m1_tm1_p2 PROC
    letraColor brasil n1 n4 w11
    ret
m1_tm1_p2 ENDP

m1_tm1_p3 PROC
    letraColor a n0 n24 w1
    letraColor r n1 n24 w1
    letraColor g n2 n24 w1
    letraColor e n3 n24 w1
    letraColor n n4 n24 w1
    letraColor t n5 n24 w1
    letraColor i n6 n24 w1
    letraColor n n7 n24 w1
    letraColor a n8 n24 w1
    ret
m1_tm1_p3 ENDP

m1_tm1_p4 PROC
    letraColor ecuador n12 n4 w13
    ret
m1_tm1_p4 ENDP

m1_tm1_p5 PROC
    letraColor rusia n4 n12 w9
    ret
m1_tm1_p5 ENDP

m2_tm1_p1 PROC
    letraColor p n0 n0 w1
    letraColor a n1 n0 w1
    letraColor n n2 n0 w1
    letraColor a n3 n0 w1
    letraColor m n4 n0 w1
    letraColor a n5 n0 w1
    ret
m2_tm1_p1 ENDP

m2_tm1_p2 PROC
    letraColor m n1 n20 w1
    letraColor e n2 n20 w1
    letraColor x n3 n20 w1
    letraColor i n4 n20 w1
    letraColor c n5 n20 w1
    letraColor o n6 n20 w1
    ret
m2_tm1_p2 ENDP

m2_tm1_p3 PROC
    letraColor dinamarca n12 n4 w17
    ret
m2_tm1_p3 ENDP

m2_tm1_p4 PROC
    letraColor austria n0 n4 w12
    ret
m2_tm1_p4 ENDP

m2_tm1_p5 PROC
    letraColor s n12 n0 w1
    letraColor no n12 n1 w1
    letraColor u n11 n2 w1
    letraColor no n11 n3 w1
    letraColor i n10 n4 w1
    letraColor no n10 n5 w1
    letraColor z n9 n6 w1 
    letraColor no n9 n7 w1 
    letraColor a n8 n8 w1
    letraColor no n8 n9 w1 
    ret
m2_tm1_p5 ENDP

m1_tm2_p1 PROC
    letraColor a n0 n24 w1
    letraColor m n1 n24 w1
    letraColor b n2 n24 w1
    letraColor a n3 n24 w1
    letraColor t n4 n24 w1
    letraColor o n5 n24 w1
    ret
m1_tm2_p1 ENDP

m1_tm2_p2 PROC
    letraColor tulcan n9 n8 w11  
    ret
m1_tm2_p2 ENDP

m1_tm2_p3 PROC
    letraColor g n0 n0 w1
    letraColor no n0 n1 w1
    letraColor u n1 n2 w1
    letraColor no n1 n3 w1
    letraColor a n2 n4 w1
    letraColor no n2 n5 w1
    letraColor y n3 n6 w1
    letraColor no n3 n7 w1
    letraColor a n4 n8 w1
    letraColor no n4 n9 w1
    letraColor q n5 n10 w1
    letraColor no n5 n11 w1
    letraColor u n6 n12 w1
    letraColor no n6 n13 w1
    letraColor i n7 n14 w1
    letraColor no n7 n15 w1
    letraColor l n8 n16 w1
    letraColor no n8 n17 w1
    ret
m1_tm2_p3 ENDP

m1_tm2_p4 PROC
    letraColor q n2 n0 w1
    letraColor u n3 n0 w1
    letraColor e n4 n0 w1
    letraColor v n5 n0 w1
    letraColor e n6 n0 w1
    letraColor d n7 n0 w1
    letraColor o n8 n0 w1
    ret
m1_tm2_p4 ENDP

m1_tm2_p5 PROC
    letraColor manta n2 n8 w8
    ret
m1_tm2_p5 ENDP

m2_tm2_p1 PROC
    letraColor cuenca n2 n6 w11
    ret
m2_tm2_p1 ENDP

m2_tm2_p2 PROC
    letraColor i n4 n18 w1
    letraColor b n5 n18 w1
    letraColor a n6 n18 w1
    letraColor r n7 n18 w1
    letraColor r n8 n18 w1
    letraColor a n9 n18 w1
    ret
m2_tm2_p2 ENDP

m2_tm2_p3 PROC
    letraColor chillanes n10 n4 w17
    ret
m2_tm2_p3 ENDP

m2_tm2_p4 PROC
    letraColor c n1 n2 w1
    letraColor no n1 n3 w1
    letraColor h n2 n4 w1
    letraColor no n2 n5 w1
    letraColor u n3 n6 w1
    letraColor no n3 n7 w1
    letraColor n n4 n8 w1
    letraColor no n4 n9 w1
    letraColor c n5 n10 w1
    letraColor no n5 n11 w1
    letraColor h n6 n12 w1
    letraColor no n6 n13 w1
    letraColor i n7 n14 w1
    ret
m2_tm2_p4 ENDP

m2_tm2_p5 PROC
    letraColor q n7 n2 w1
    letraColor u n8 n2 w1
    letraColor i n9 n2 w1
    letraColor t n10 n2 w1
    letraColor o n11 n2 w1
    ret
m2_tm2_p5 ENDP

m1_tm3_p1 PROC
    letraColor c n0 n0 w1
    letraColor h n1 n0 w1
    letraColor i n2 n0 w1
    letraColor p n3 n0 w1
    letraColor r n4 n0 w1
    letraColor e n5 n0 w1
    ret
m1_tm3_p1 ENDP

m1_tm3_p2 PROC
    letraColor taiwan n12 n6 w11
    ret
m1_tm3_p2 ENDP

m1_tm3_p3 PROC
    letraColor i n1 n2 w1
    letraColor no n1 n3 w1
    letraColor n n2 n4 w1
    letraColor no n2 n5 w1
    letraColor d n3 n6 w1
    letraColor no n3 n7 w1
    letraColor o n4 n8 w1
    letraColor no n4 n9 w1
    letraColor n n5 n10 w1
    letraColor no n5 n11 w1
    letraColor e n6 n12 w1
    letraColor no n6 n13 w1
    letraColor s n7 n14 w1
    letraColor no n7 n15 w1
    letraColor i n8 n16 w1
    letraColor no n8 n17 w1
    letraColor a n9 n18 w1
    letraColor no n9 n19 w1
    ret
m1_tm3_p3 ENDP

m1_tm3_p4 PROC
    letraColor senegal n0 n8 w13
    ret
m1_tm3_p4 ENDP

m1_tm3_p5 PROC
    letraColor b n4 n24 w1
    letraColor u n5 n24 w1
    letraColor t n6 n24 w1
    letraColor a n7 n24 w1
    letraColor n n8 n24 w1
    ret
m1_tm3_p5 ENDP

m2_tm3_p1 PROC
    letraColor z n2 n0 w1
    letraColor a n3 n0 w1
    letraColor m n4 n0 w1
    letraColor b n5 n0 w1
    letraColor i n6 n0 w1
    letraColor a n7 n0 w1
    ret
m2_tm3_p1 ENDP

m2_tm3_p2 PROC
    letraColor e n1 n16 w1
    letraColor g n2 n16 w1
    letraColor i n3 n16 w1
    letraColor p n4 n16 w1
    letraColor t n5 n16 w1
    letraColor o n6 n16 w1
    ret
m2_tm3_p2 ENDP

m2_tm3_p3 PROC
    letraColor m n1 n4 w1
    letraColor no n1 n5 w1
    letraColor a n2 n6 w1
    letraColor no n2 n7 w1
    letraColor r n3 n8 w1
    letraColor no n3 n9 w1
    letraColor r n4 n10 w1
    letraColor no n4 n11 w1
    letraColor u n5 n12 w1
    letraColor no n5 n13 w1
    letraColor e n6 n14 w1
    letraColor no n6 n15 w1
    letraColor c n7 n16 w1
    letraColor no n7 n17 w1
    letraColor o n8 n18 w1
    letraColor no n8 n19 w1
    letraColor s n9 n20 w1
    letraColor no n9 n21 w1 
    ret
m2_tm3_p3 ENDP

m2_tm3_p4 PROC
    letraColor camboya n11 n0 w13
    ret
m2_tm3_p4 ENDP

m2_tm3_p5 PROC
    letraColor c n4 n2 w1
    letraColor no n4 n3 w1
    letraColor h n5 n4 w1
    letraColor no n5 n5 w1
    letraColor i n6 n6 w1
    letraColor no n6 n7 w1
    letraColor n n7 n8 w1
    letraColor no n7 n9 w1
    letraColor a n8 n10 w1
    letraColor no n8 n11 w1
    ret
m2_tm3_p5 ENDP