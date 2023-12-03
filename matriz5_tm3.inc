letraColor5 macro letra fil col    
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
n0_m5 db 0
n1_m5 db 1
n2_m5 db 2
n3_m5 db 3
n4_m5 db 4
n5_m5 db 5
n6_m5 db 6
n7_m5 db 7
n8_m5 db 8
n9_m5 db 9
n10_m5 db 10
n11_m5 db 11
n12_m5 db 12
n13_m5 db 13
n14_m5 db 14
n15_m5 db 15
n16_m5 db 16
n17_m5 db 17
n18_m5 db 18
n19_m5 db 19
n20_m5 db 20
n24_m5 db 24


no_m5 db ' '
l1_m5 db 'C'
l2_m5 db 'H'
l3_m5 db 'I'
l4_m5 db 'P'
l5_m5 db 'R'
l6_m5 db 'E'
l7_m5 db 'S'
l8_m5 db 'N'
l9_m5 db 'G'
l10_m5 db 'A'
l11_m5 db 'L'
l12_m5 db 'T'
l13_m5 db 'W'
l14_m5 db 'D'
l15_m5 db 'O'
l16_m5 db 'B'
l17_m5 db 'U'

l01_tm3_m1 db 'C F W J S E N E G A L E S$'
l02_tm3_m1 db 'H I S R Q A L Q D G C V D$'
l03_tm3_m1 db 'I X N J L K O Q S K J T F$'
l04_tm3_m1 db 'P F Y D F S W X B Z H L G$'
l05_tm3_m1 db 'R Q H N O Q Q D W I A E B$'
l06_tm3_m1 db 'E Y F W L N P B S V H Z U$'
l07_tm3_m1 db 'N U G A Z Y E H D H J X T$'
l08_tm3_m1 db 'Q I H H X L Q S B L A G A$'
l09_tm3_m1 db 'W P K R A Q H N I Q Q L N$'
l10_tm3_m1 db 'S F Y B F K A S W A F R H$'
l11_tm3_m1 db 'L H R C J M L G P T L Y J$'
l12_tm3_m1 db 'I J W J V N S L O Y P I L$'
l13_tm3_m1 db 'Z F P T A I W A N K U Q A$' 

linea5 DB 0AH,0DH,"$"

imprimirL5 PROC
    mov ah,09h
    lea dx,linea5
    int 21h
    ret
imprimirL5 ENDP

imprimirM5 PROC
    mov ah,09h   
    lea dx,l01_tm3_m1
    int 21h     
    call imprimirL5
    mov ah,09h   
    lea dx,l02_tm3_m1
    int 21h
    call imprimirL5
    mov ah,09h   
    lea dx,l03_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l04_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l05_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l06_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l07_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l08_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l09_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l10_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l11_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l12_tm3_m1
    int 21h  
    call imprimirL5
    mov ah,09h   
    lea dx,l13_tm3_m1
    int 21h  
    call imprimirL5
    ret
imprimirM5 ENDP

m1_tm3_p1 PROC
    letraColor5 l1_m5 n0_m5 n0_m5
    letraColor5 l2_m5 n1_m5 n0_m5
    letraColor5 l3_m5 n2_m5 n0_m5
    letraColor5 l4_m5 n3_m5 n0_m5
    letraColor5 l5_m5 n4_m5 n0_m5
    letraColor5 l6_m5 n5_m5 n0_m5
    ret
m1_tm3_p1 ENDP

m1_tm3_p2 PROC
    letraColor5 l12_m5 n12_m5 n6_m5
    letraColor5 no_m5 n12_m5 n7_m5
    letraColor5 l10_m5 n12_m5 n8_m5
    letraColor5 no_m5 n12_m5 n9_m5
    letraColor5 l3_m5 n12_m5 n10_m5
    letraColor5 no_m5 n12_m5 n11_m5
    letraColor5 l13_m5 n12_m5 n12_m5
    letraColor5 no_m5 n12_m5 n13_m5
    letraColor5 l10_m5 n12_m5 n14_m5
    letraColor5 no_m5 n12_m5 n15_m5
    letraColor5 l8_m5 n12_m5 n16_m5
    ret
m1_tm3_p2 ENDP

m1_tm3_p3 PROC
    letraColor5 l3_m5 n1_m5 n2_m5
    letraColor5 no_m5 n1_m5 n3_m5
    letraColor5 l8_m5 n2_m5 n4_m5
    letraColor5 no_m5 n2_m5 n5_m5
    letraColor5 l14_m5 n3_m5 n6_m5
    letraColor5 no_m5 n3_m5 n7_m5
    letraColor5 l15_m5 n4_m5 n8_m5
    letraColor5 no_m5 n4_m5 n9_m5
    letraColor5 l8_m5 n5_m5 n10_m5
    letraColor5 no_m5 n5_m5 n11_m5
    letraColor5 l6_m5 n6_m5 n12_m5
    letraColor5 no_m5 n6_m5 n13_m5
    letraColor5 l7_m5 n7_m5 n14_m5
    letraColor5 no_m5 n7_m5 n15_m5
    letraColor5 l3_m5 n8_m5 n16_m5
    letraColor5 no_m5 n8_m5 n17_m5
    letraColor5 l10_m5 n9_m5 n18_m5
    letraColor5 no_m5 n9_m5 n19_m5
    ret
m1_tm3_p3 ENDP

m1_tm3_p4 PROC
    letraColor5 l7_m5 n0_m5 n8_m5
    letraColor5 no_m5 n0_m5 n9_m5
    letraColor5 l6_m5 n0_m5 n10_m5
    letraColor5 no_m5 n0_m5 n11_m5
    letraColor5 l8_m5 n0_m5 n12_m5
    letraColor5 no_m5 n0_m5 n13_m5
    letraColor5 l6_m5 n0_m5 n14_m5
    letraColor5 no_m5 n0_m5 n15_m5
    letraColor5 l9_m5 n0_m5 n16_m5
    letraColor5 no_m5 n0_m5 n17_m5
    letraColor5 l10_m5 n0_m5 n18_m5
    letraColor5 no_m5 n0_m5 n19_m5
    letraColor5 l11_m5 n0_m5 n20_m5
    ret
m1_tm3_p4 ENDP

m1_tm3_p5 PROC
    letraColor5 l16_m5 n4_m5 n24_m5
    letraColor5 l17_m5 n5_m5 n24_m5
    letraColor5 l12_m5 n6_m5 n24_m5
    letraColor5 l10_m5 n7_m5 n24_m5
    letraColor5 l8_m5 n8_m5 n24_m5
    ret
m1_tm3_p5 ENDP