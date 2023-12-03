
letraColor1 macro letra fil col    
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
n0_m1 db 0
n1_m1 db 1
n2_m1 db 2
n3_m1 db 3
n4_m1 db 4
n5_m1 db 5
n6_m1 db 6
n7_m1 db 7
n8_m1 db 8
n9_m1 db 9
n10_m1 db 10
n11_m1 db 11
n12_m1 db 12
n13_m1 db 13
n14_m1 db 14
n15_m1 db 15
n16_m1 db 16
n17_m1 db 17
n18_m1 db 18
n19_m1 db 19
n20_m1 db 20
n21_m1 db 21
n24_m1 db 24
n25_m1 db 25

no_m1 db ' '
l1_m1 db 'B'
l2_m1 db 'R'
l3_m1 db 'A'
l4_m1 db 'S'
l5_m1 db 'I'
l6_m1 db 'L'
l7_m1 db 'T'
l8_m1 db 'G'
l9_m1 db 'E'
l10_m1 db 'N'
l11_m1 db 'C'
l12_m1 db 'U'
l13_m1 db 'D'
l14_m1 db 'O'

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
    letraColor1 l5_m1 n4_m1 n2_m1
    letraColor1 no_m1 n4_m1 n3_m1
    letraColor1 l7_m1 n5_m1 n4_m1
    letraColor1 no_m1 n5_m1 n5_m1
    letraColor1 l3_m1 n6_m1 n6_m1
    letraColor1 no_m1 n6_m1 n7_m1
    letraColor1 l6_m1 n7_m1 n8_m1
    letraColor1 no_m1 n7_m1 n9_m1
    letraColor1 l5_m1 n8_m1 n10_m1
    letraColor1 no_m1 n8_m1 n11_m1
    letraColor1 l3_m1 n9_m1 n12_m1
    letraColor1 no_m1 n9_m1 n13_m1
    ret
m1_tm1_p1 ENDP

m1_tm1_p2 PROC
    letraColor1 l1_m1 n1_m1 n4_m1
    letraColor1 no_m1 n1_m1 n5_m1
    letraColor1 l2_m1 n1_m1 n6_m1
    letraColor1 no_m1 n1_m1 n7_m1
    letraColor1 l3_m1 n1_m1 n8_m1
    letraColor1 no_m1 n1_m1 n9_m1
    letraColor1 l4_m1 n1_m1 n10_m1
    letraColor1 no_m1 n1_m1 n11_m1
    letraColor1 l5_m1 n1_m1 n12_m1
    letraColor1 no_m1 n1_m1 n13_m1
    letraColor1 l6_m1 n1_m1 n14_m1
    ret
m1_tm1_p2 ENDP

m1_tm1_p3 PROC
    letraColor1 l3_m1 n0_m1 n24_m1
    letraColor1 l2_m1 n1_m1 n24_m1
    letraColor1 l8_m1 n2_m1 n24_m1
    letraColor1 l9_m1 n3_m1 n24_m1
    letraColor1 l10_m1 n4_m1 n24_m1
    letraColor1 l7_m1 n5_m1 n24_m1
    letraColor1 l5_m1 n6_m1 n24_m1
    letraColor1 l10_m1 n7_m1 n24_m1
    letraColor1 l3_m1 n8_m1 n24_m1
    ret
m1_tm1_p3 ENDP

m1_tm1_p4 PROC
    letraColor1 l9_m1 n12_m1 n4_m1
    letraColor1 no_m1 n12_m1 n5_m1
    letraColor1 l11_m1 n12_m1 n6_m1
    letraColor1 no_m1 n12_m1 n7_m1
    letraColor1 l12_m1 n12_m1 n8_m1
    letraColor1 no_m1 n12_m1 n9_m1
    letraColor1 l3_m1 n12_m1 n10_m1
    letraColor1 no_m1 n12_m1 n11_m1
    letraColor1 l13_m1 n12_m1 n12_m1
    letraColor1 no_m1 n12_m1 n13_m1
    letraColor1 l14_m1 n12_m1 n14_m1
    letraColor1 no_m1 n12_m1 n15_m1
    letraColor1 l2_m1 n12_m1 n16_m1
    ret
m1_tm1_p4 ENDP

m1_tm1_p5 PROC
    letraColor1 l2_m1 n4_m1 n12_m1
    letraColor1 no_m1 n4_m1 n13_m1
    letraColor1 l12_m1 n4_m1 n14_m1
    letraColor1 no_m1 n4_m1 n15_m1
    letraColor1 l4_m1 n4_m1 n16_m1
    letraColor1 no_m1 n4_m1 n17_m1
    letraColor1 l5_m1 n4_m1 n18_m1
    letraColor1 no_m1 n4_m1 n19_m1
    letraColor1 l3_m1 n4_m1 n20_m1
    ret
m1_tm1_p5 ENDP
