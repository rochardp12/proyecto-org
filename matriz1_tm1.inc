
letraColor macro letra fil col    
    mov     bh, 0    
    lea     bp, letra  
    mov     bl, 0F3h 
    mov     cx, 1   
    mov     dl, col   
    mov     dh, fil
    mov     ah, 13h  
    mov     al, 1 
    int     10h     
    endm   


org 100h
.data
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
n24 db 24
n25 db 25

no db ' '
b db 'B'
r db 'R'
a db 'A'
s db 'S'
i db 'I'
l db 'L'
t db 'T'
g db 'G'
e db 'E'
n db 'N'
c db 'C'
u db 'U'
d db 'D'
o db 'O'

l01_tm1_m1 db 'Q F W J L K O B Z V U E A$'
l02_tm1_m1 db 'S D B R A S I L D G C V R$'
l03_tm1_m1 db 'C X W J L K O Q S K J T G$'
l04_tm1_m1 db 'V F Y K F S W X B Z H L E$'
l05_tm1_m1 db 'B I H N J Q R U S I A E N$'
l06_tm1_m1 db 'M Y T W L O P B S V H Z T$'
l07_tm1_m1 db 'N U G A Z Y O H D H J X I$'
l08_tm1_m1 db 'Q I H H L L Q W B L A G N$'
l09_tm1_m1 db 'W P K R A I H N Z Q Q L A$'
l10_tm1_m1 db 'S F Y B F K A S W P F R H$'
l11_tm1_m1 db 'L H R C J M L G P T L Y J$'
l12_tm1_m1 db 'I J W J V N S L O Y P I L$'
l13_tm1_m1 db 'Z F E C U A D O R K U Q A$'

linea1 DB 0AH,0DH,"$"


imprimirL1 PROC
    mov ah,09h
    lea dx,linea1
    int 21h
    ret
imprimirL1 ENDP


imprimirM1 PROC
    mov ah,09h   
    lea dx,l01_tm1_m1
    int 21h     
    call imprimirL1
    mov ah,09h   
    lea dx,l02_tm1_m1
    int 21h
    call imprimirL1
    mov ah,09h   
    lea dx,l03_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l04_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l05_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l06_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l07_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l08_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l09_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l10_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l11_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l12_tm1_m1
    int 21h  
    call imprimirL1
    mov ah,09h   
    lea dx,l13_tm1_m1
    int 21h  
    call imprimirL1
    ret
imprimirM1 ENDP

m1_tm1_p1 PROC
    letraColor i n4 n2
    letraColor no n4 n3
    letraColor t n5 n4
    letraColor no n5 n5
    letraColor a n6 n6
    letraColor no n6 n7
    letraColor l n7 n8
    letraColor no n7 n9
    letraColor i n8 n10
    letraColor no n8 n11
    letraColor a n9 n12
    letraColor no n9 n13
    ret
m1_tm1_p1 ENDP

m1_tm1_p2 PROC
    letraColor b n1 n4
    letraColor no n1 n5
    letraColor r n1 n6
    letraColor no n1 n7
    letraColor a n1 n8
    letraColor no n1 n9
    letraColor s n1 n10
    letraColor no n1 n11
    letraColor i n1 n12
    letraColor no n1 n13
    letraColor l n1 n14
    ret
m1_tm1_p2 ENDP

m1_tm1_p3 PROC
    letraColor a n0 n24
    letraColor r n1 n24
    letraColor g n2 n24
    letraColor e n3 n24
    letraColor n n4 n24
    letraColor t n5 n24
    letraColor i n6 n24
    letraColor n n7 n24
    letraColor a n8 n24
    ret
m1_tm1_p3 ENDP

m1_tm1_p4 PROC
    letraColor e n12 n4
    letraColor no n12 n5
    letraColor c n12 n6
    letraColor no n12 n7
    letraColor u n12 n8
    letraColor no n12 n9
    letraColor a n12 n10
    letraColor no n12 n11
    letraColor d n12 n12
    letraColor no n12 n13
    letraColor o n12 n14
    letraColor no n12 n15
    letraColor r n12 n16
    ret
m1_tm1_p4 ENDP

m1_tm1_p5 PROC
    letraColor r n4 n12
    letraColor no n4 n13
    letraColor u n4 n14
    letraColor no n4 n15
    letraColor s n4 n16
    letraColor no n4 n17
    letraColor i n4 n18
    letraColor no n4 n19
    letraColor a n4 n20
    ret
m1_tm1_p5 ENDP
