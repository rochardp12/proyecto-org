;Macro para imprimir letra o mensaje en color
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

;------------------------------------------------------------------------------------------

;Todas las macros siguientes son para resaltar en color las palabras correctas en la pantalla
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


m3_ambato macro
    letraColor a n0 n24 w1
    letraColor m n1 n24 w1
    letraColor b n2 n24 w1
    letraColor a n3 n24 w1
    letraColor t n4 n24 w1
    letraColor o n5 n24 w1
    endm

m3_tulcan macro
    letraColor m3_p2 n9 n8 w11
    endm

m3_guayaquil macro
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
    endm

m3_quevedo macro
    letraColor q n2 n0 w1
    letraColor u n3 n0 w1
    letraColor e n4 n0 w1
    letraColor v n5 n0 w1
    letraColor e n6 n0 w1
    letraColor d n7 n0 w1
    letraColor o n8 n0 w1
    endm

m3_manta macro
    letraColor m3_p5 n2 n8 w9
    endm


m4_cuenca macro
    letraColor m4_p1 n2 n6 w11
    endm

m4_ibarra macro
    letraColor i n4 n18 w1
    letraColor b n5 n18 w1
    letraColor a n6 n18 w1
    letraColor r n7 n18 w1
    letraColor r n8 n18 w1
    letraColor a n9 n18 w1
    endm

m4_chillanes macro
    letraColor m4_p3 n10 n4 w17
    endm

m4_chunchi macro
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
    endm

m4_quito macro
    letraColor q n7 n2 w1
    letraColor u n8 n2 w1
    letraColor i n9 n2 w1
    letraColor t n10 n2 w1
    letraColor o n11 n2 w1
    endm


m5_chipre macro
    letraColor c n0 n0 w1
    letraColor h n1 n0 w1
    letraColor i n2 n0 w1
    letraColor p n3 n0 w1
    letraColor r n4 n0 w1
    letraColor e n5 n0 w1
    endm

m5_taiwan macro
    letraColor m5_p2 n12 n6 w11
    endm

m5_indonesia macro
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
    endm   

m5_senegal macro
    letraColor m5_p4 n0 n8 w13
    endm

m5_butan macro
    letraColor b n4 n24 w1
    letraColor u n5 n24 w1
    letraColor t n6 n24 w1
    letraColor a n7 n24 w1
    letraColor n n8 n24 w1
    endm

m6_zambia macro
    letraColor z n2 n0 w1
    letraColor a n3 n0 w1
    letraColor m n4 n0 w1
    letraColor b n5 n0 w1
    letraColor i n6 n0 w1
    letraColor a n7 n0 w1
    endm

m6_egipto macro
    letraColor e n1 n16 w1
    letraColor g n2 n16 w1
    letraColor i n3 n16 w1
    letraColor p n4 n16 w1
    letraColor t n5 n16 w1
    letraColor o n6 n16 w1
    endm

m6_marruecos macro
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
    endm

m6_camboya macro
    letraColor m6_p5 n11 n0 w13
    endm

m6_china macro
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
w47 dw 47

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

no db ' '
m1_p2 db 'B R A S I L'
m1_p3 db 'A R G E N T I N A'
m1_p4 db 'E C U A D O R'
m2_p1 db 'P A N A M A'
m2_p2 db 'M E X I C O'
m2_p3 db 'D I N A M A R C A'
m2_p4 db 'A U S T R I A'
m3_p2 db 'T U L C A N'
m3_p5 db 'M A N T A'
m4_p1 db 'C U E N C A'
m4_p3 db 'C H I L L A N E S'
m5_p2 db 'T A I W A N'
m5_p4 db 'S E N E G A L'
m6_p5 db 'C A M B O Y A'
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
