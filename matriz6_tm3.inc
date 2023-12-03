letraColor6 macro letra fil col    
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
n0_m6 db 0
n1_m6 db 1
n2_m6 db 2
n3_m6 db 3
n4_m6 db 4
n5_m6 db 5
n6_m6 db 6
n7_m6 db 7
n8_m6 db 8
n9_m6 db 9
n10_m6 db 10
n11_m6 db 11
n12_m6 db 12
n13_m6 db 13
n14_m6 db 14
n15_m6 db 15
n16_m6 db 16
n17_m6 db 17
n18_m6 db 18
n19_m6 db 19
n20_m6 db 20
n21_m6 db 21


no_m6 db ' '
l1_m6 db 'C'
l2_m6 db 'A'
l3_m6 db 'M'
l4_m6 db 'B'
l5_m6 db 'O'
l6_m6 db 'Y'
l7_m6 db 'Z'
l8_m6 db 'I'
l9_m6 db 'E'
l10_m6 db 'G'
l11_m6 db 'P'
l12_m6 db 'T'
l13_m6 db 'R'
l14_m6 db 'U'
l15_m6 db 'S'
l16_m6 db 'H'
l17_m6 db 'N'

l01_tm3_m2 db 'Q F W J L K O B Z V U E W$'
l02_tm3_m2 db 'S M M C J P O Q E G C V D$'
l03_tm3_m2 db 'Z X W A J L K O G G K J T$'
l04_tm3_m2 db 'A F Y K R S W X I Z H L A$'
l05_tm3_m2 db 'M C H N J R X F P P A E Q$'
l06_tm3_m2 db 'B Y H W L O U B T V H Z H$'
l07_tm3_m2 db 'I U G I Z Y O E O H J X D$'
l08_tm3_m2 db 'A I H H N L Q W C L A G K$'
l09_tm3_m2 db 'W P K R A A H N Z O Q L A$'
l10_tm3_m2 db 'S F Y B F K Q S W P S R H$'
l11_tm3_m2 db 'L H R C J M L G P T L Y J$'
l12_tm3_m2 db 'C A M B O Y A L O Y P I L$'
l13_tm3_m2 db 'Z F W X E X A S W K U Q A$'



linea6 DB 0AH,0DH,"$"

imprimirL6 PROC
    mov ah,09h
    lea dx,linea6
    int 21h
    ret
imprimirL6 ENDP

imprimirM6 PROC
    mov ah,09h   
    lea dx,l01_tm3_m2
    int 21h     
    call imprimirL6
    mov ah,09h   
    lea dx,l02_tm3_m2
    int 21h
    call imprimirL6
    mov ah,09h   
    lea dx,l03_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l04_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l05_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l06_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l07_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l08_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l09_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l10_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l11_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l12_tm3_m2
    int 21h  
    call imprimirL6
    mov ah,09h   
    lea dx,l13_tm3_m2
    int 21h  
    call imprimirL6
    ret
imprimirM6 ENDP

m2_tm3_p1 PROC
    letraColor6 l7_m6 n2_m6 n0_m6
    letraColor6 l2_m6 n3_m6 n0_m6
    letraColor6 l3_m6 n4_m6 n0_m6
    letraColor6 l4_m6 n5_m6 n0_m6
    letraColor6 l8_m6 n6_m6 n0_m6
    letraColor6 l2_m6 n7_m6 n0_m6
    ret
m2_tm3_p1 ENDP

m2_tm3_p2 PROC
    letraColor6 l9_m6 n1_m6 n16_m6
    letraColor6 l10_m6 n2_m6 n16_m6
    letraColor6 l8_m6 n3_m6 n16_m6
    letraColor6 l11_m6 n4_m6 n16_m6
    letraColor6 l12_m6 n5_m6 n16_m6
    letraColor6 l5_m6 n6_m6 n16_m6
    ret
m2_tm3_p2 ENDP

m2_tm3_p3 PROC
    letraColor6 l3_m6 n1_m6 n4_m6
    letraColor6 no_m6 n1_m1 n5_m6
    letraColor6 l2_m6 n2_m6 n6_m6
    letraColor6 no_m6 n2_m1 n7_m6
    letraColor6 l13_m6 n3_m6 n8_m6
    letraColor6 no_m6 n3_m1 n9_m6
    letraColor6 l13_m6 n4_m6 n10_m6
    letraColor6 no_m6 n4_m1 n11_m6
    letraColor6 l14_m6 n5_m6 n12_m6
    letraColor6 no_m6 n5_m1 n13_m6
    letraColor6 l9_m6 n6_m6 n14_m6
    letraColor6 no_m6 n6_m1 n15_m6
    letraColor6 l1_m6 n7_m6 n16_m6
    letraColor6 no_m6 n7_m1 n17_m6
    letraColor6 l5_m6 n8_m6 n18_m6
    letraColor6 no_m6 n8_m1 n19_m6
    letraColor6 l15_m6 n9_m6 n20_m6
    letraColor6 no_m6 n9_m1 n21_m6   
    ret
m2_tm3_p3 ENDP

m2_tm3_p4 PROC
    letraColor6 l1_m6 n11_m6 n0_m6
    letraColor6 no_m6 n11_m6 n1_m6
    letraColor6 l2_m6 n11_m6 n2_m6
    letraColor6 no_m6 n11_m6 n3_m6
    letraColor6 l3_m6 n11_m6 n4_m6
    letraColor6 no_m6 n11_m6 n5_m6
    letraColor6 l4_m6 n11_m6 n6_m6
    letraColor6 no_m6 n11_m6 n7_m6
    letraColor6 l5_m6 n11_m6 n8_m6
    letraColor6 no_m6 n11_m6 n9_m6
    letraColor6 l6_m6 n11_m6 n10_m6
    letraColor6 no_m6 n11_m6 n11_m6
    letraColor6 l2_m6 n11_m6 n12_m6
    ret
m2_tm3_p4 ENDP

m2_tm3_p5 PROC
    letraColor6 l1_m6 n4_m6 n2_m6
    letraColor6 no_m6 n4_m6 n3_m1
    letraColor6 l16_m6 n5_m6 n4_m6
    letraColor6 no_m6 n5_m6 n5_m6
    letraColor6 l8_m6 n6_m6 n6_m6
    letraColor6 no_m6 n6_m6 n7_m6
    letraColor6 l17_m6 n7_m6 n8_m6
    letraColor6 no_m6 n7_m6 n9_m6
    letraColor6 l2_m6 n8_m6 n10_m6
    letraColor6 no_m6 n8_m6 n11_m6
    ret
m2_tm3_p5 ENDP