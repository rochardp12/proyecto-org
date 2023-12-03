letraColor2 macro letra fil col    
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

n0_m2 db 0
n1_m2 db 1
n2_m2 db 2
n3_m2 db 3
n4_m2 db 4
n5_m2 db 5
n6_m2 db 6
n7_m2 db 7
n8_m2 db 8
n9_m2 db 9
n10_m2 db 10
n11_m2 db 11
n12_m2 db 12
n13_m2 db 13
n14_m2 db 14
n15_m2 db 15
n16_m2 db 16
n17_m2 db 17
n18_m2 db 18
n19_m2 db 19
n20_m2 db 20
n21_m2 db 21
n24_m2 db 24
n25_m2 db 25

no db ' '
l1_m2 db 'P'
l2_m2 db 'A'
l3_m2 db 'N'
l4_m2 db 'M'
l5_m2 db 'E'
l6_m2 db 'X'
l7_m2 db 'I'
l8_m2 db 'C'
l9_m2 db 'O'
l10_m2 db 'D'
l11_m2 db 'R'
l12_m2 db 'U'
l13_m2 db 'S'
l14_m2 db 'T'
l15_m2 db 'Z'



l01_tm1_m2 db 'P F A U S T R I A V U E A$'
l02_tm1_m2 db 'A D W R Q D A H D G M V D$'
l03_tm1_m2 db 'N X W J L K O Q S K E T G$'
l04_tm1_m2 db 'A F Y K F S W X B Z X L F$'
l05_tm1_m2 db 'M E H N J Q D U A I I E C$'
l06_tm1_m2 db 'A Y D W L O P B S V C Z D$'
l07_tm1_m2 db 'N U G E Z Y O H D H O X A$'
l08_tm1_m2 db 'Q I H H Y L Q W B L A G W$'
l09_tm1_m2 db 'W P K R A H H N Z Q Q L A$'
l10_tm1_m2 db 'S F Y Z F K B S W P F R H$'
l11_tm1_m2 db 'L H I C J M E X I C O Y J$'
l12_tm1_m2 db 'I U W J V N S L O Y P I L$'
l13_tm1_m2 db 'S F D I N A M A R C A Q A$' 



linea1 DB 0AH,0DH,"$"


imprimirL2 PROC
    mov ah,09h
    lea dx,linea1
    int 21h
    ret
imprimirL2 ENDP


imprimirM2 PROC
    mov ah,09h   
    lea dx,l01_tm1_m2
    int 21h         
    call imprimirL2      
    mov ah,09h   
    lea dx,l02_tm1_m2
    int 21h
    call imprimirL2
    mov ah,09h   
    lea dx,l03_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l04_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h      
    lea dx,l05_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l06_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l07_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l08_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l09_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l10_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l11_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l12_tm1_m2
    int 21h  
    call imprimirL2
    mov ah,09h   
    lea dx,l13_tm1_m2
    int 21h  
    call imprimirL2
    ret
imprimirM2 ENDP

m2_tm1_p1 PROC
    letraColor2 p n0_m2 n0_m2
    letraColor2 a n1_m2 n0_m2
    letraColor2 n n2_m2 n0_m2
    letraColor2 a n3_m2 n0_m2
    letraColor2 m n4_m2 n0_m2
    letraColor2 a n5_m2 n0_m2
    ret
m2_tm1_p1 ENDP

m2_tm1_p2 PROC
    letraColor2 m n1_m2 n20_m2
    letraColor2 e n2_m2 n20_m2
    letraColor2 x n3_m2 n20_m2
    letraColor2 i n4_m2 n20_m2
    letraColor2 c n5_m2 n20_m2
    letraColor2 o n6_m2 n20_m2
    ret
m2_tm1_p2 ENDP

m2_tm1_p3 PROC
    letraColor2 d n12_m2 n4_m2 
    letraColor2 no n12_m2 n5_m2 
    letraColor2 i n12_m2 n6_m2 
    letraColor2 no n12_m2 n7_m2 
    letraColor2 n n12_m2 n8_m2 
    letraColor2 no n2_m2 n9_m2 
    letraColor2 a n12_m2 n10_m2 
    letraColor2 no n12_m2 n11_m2 
    letraColor2 m n12_m2 n12_m2 
    letraColor2 no n12_m2 n13_m2 
    letraColor2 a n12_m2 n114_m2 
    letraColor2 no n12_m2 n15_m2 
    letraColor2 r n12_m2 n16_m2   
    letraColor2 no n12_m2 n17_m2 
    letraColor2 c n12_m2 n18_m2 
    letraColor2 no n12_m2 n19_m2 
    letraColor2 a n12_m2 n20_m2 
    ret
m2_tm1_p3 ENDP

m2_tm1_p4 PROC
    letraColor2 a n0_m2 n4_m2 
    letraColor2 no n0_m2 n5_m2 
    letraColor2 u n0_m2 n6_m2 
    letraColor2 no n0_m2 n7_m2 
    letraColor2 s n0_m2 n8_m2 
    letraColor2 no n0_m2 n9_m2 
    letraColor2 t n0_m2 n10_m2 
    letraColor2 no n0_m2 n11_m2 
    letraColor2 r n0_m2 n12_m2 
    letraColor2 no n0_m2 n13_m2 
    letraColor2 i n0_m2 n14_m2 
    letraColor2 no n0_m2 n15_m2 
    letraColor2 a n0_m2 n16_m2 
    ret
m2_tm1_p4 ENDP

m2_tm1_p5 PROC
    letraColor2 s n12_m2 n0_m2 
    letraColor2 no n12_m2 n1_m2 
    letraColor2 u n11_m2 n2_m2 
    letraColor2 no n11_m2 n3_m2 
    letraColor2 i n10_m2 n4_m2 
    letraColor2 no n10_m2 n5_m2 
    letraColor2 z n9_m2 n6_m2 
    letraColor2 no n9_m2 n7_m2 
    letraColor2 a n8_m2 n8_m2 
    letraColor2 no n8_m2 n9_m2 
    ret
m2_tm1_p5 ENDP   
           
