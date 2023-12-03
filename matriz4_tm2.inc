letraColor4 macro letra fil col    
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

n0_m4 db 0
n1_m4 db 1
n2_m4 db 2
n3_m4 db 3
n4_m4 db 4
n5_m4 db 5
n6_m4 db 6
n7_m4 db 7
n8_m4 db 8
n9_m4 db 9
n10_m4 db 10
n11_m4 db 11
n12_m4 db 12
n13_m4 db 13
n14_m4 db 14
n15_m4 db 15
n16_m4 db 16
n17_m4 db 17
n18_m4 db 18
n19_m4 db 19
n20_m4 db 20
n21_m4 db 21
n24_m4 db 24
n25_m4 db 25

no db ' '
l1_m4 db 'C'
l2_m4 db 'U'
l3_m4 db 'E'
l4_m4 db 'N'
l5_m4 db 'A'
l6_m4 db 'I'
l7_m4 db 'B'
l8_m4 db 'R'
l9_m4 db 'H'
l10_m4 db 'L'
l11_m4 db 'S'
l12_m4 db 'Q'
l13_m4 db 'T'
l14_m4 db 'O'



l01_tm2_m2 db 'Q F W J L K O B Z V U E Q$'
l02_tm2_m2 db 'S C Z X C P L S D G C V W$'
l03_tm2_m2 db 'C X H C U E N C A K J T E$'
l04_tm2_m2 db 'A F Y U F S W X B Z H L R$'
l05_tm2_m2 db 'B S H N N Q Q D Z I Q E T$'
l06_tm2_m2 db 'M Y G W L C P B S B H Z Y$'
l07_tm2_m2 db 'N U G H Z Y H H D A J X U$'
l08_tm2_m2 db 'Q Q H H K L Q I B R A G I$'
l09_tm2_m2 db 'W U K R A U H N Z R Q L O$'
l10_tm2_m2 db 'S I Y B F K A S W A F R H$'
l11_tm2_m2 db 'L T C H I L L A N E S Y J$'
l12_tm2_m2 db 'I O W J V N S L O Y P I L$'
l13_tm2_m2 db 'Z F L P I T G D S K U Q A$'



linea1 DB 0AH,0DH,"$"


imprimirL4 PROC
    mov ah,09h
    lea dx,linea1
    int 21h
    ret
imprimirL4 ENDP


imprimirM4 PROC
    mov ah,09h   
    lea dx,l01_tm2_m2
    int 21h         
    call imprimirL4      
    mov ah,09h   
    lea dx,l02_tm2_m2
    int 21h
    call imprimirL4
    mov ah,09h   
    lea dx,l03_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l04_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h      
    lea dx,l05_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l06_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l07_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l08_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l09_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l10_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l11_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l12_tm2_m2
    int 21h  
    call imprimirL4
    mov ah,09h   
    lea dx,l13_tm2_m2
    int 21h  
    call imprimirL4
    ret
imprimirM3 ENDP

m2_tm2_p1 PROC
    letraColor4 c n2_m4 n6_m4  
    letraColor4 no n2_m4 n7_m4
    letraColor4 u n2_m4 n8_m4
    letraColor4 no n2_m4 n9_m4
    letraColor4 e n2_m4 n10_m4
    letraColor4 no n2_m4 n11_m4
    letraColor4 n n2_m4 n12_m4
    letraColor4 no n2_m4 n13_m4
    letraColor4 c n2_m4 n14_m4
    letraColor4 no n2_m4 n15_m4
    letraColor4 a n2_m4 n16_m4
    ret
m2_tm2_p1 ENDP

m2_tm2_p2 PROC
    letraColor4 i n4_m4 n18_m4
    letraColor4 b n5_m4 n18_m4
    letraColor4 a n6_m4 n18_m4
    letraColor4 r n7_m4 n18_m4
    letraColor4 r n8_m4 n18_m4
    letraColor4 a n9_m4 n18_m4
    ret
m2_tm2_p2 ENDP

m2_tm2_p3 PROC
    letraColor4 c n10_m4 n4_m4
    letraColor4 no n10_m4 n5_m4
    letraColor4 h n10_m4 n6_m4
    letraColor4 no n10_m4 n7_m4
    letraColor4 i n10_m4 n8_m4
    letraColor4 no n10_m4 n9_m4
    letraColor4 l n10_m4 n10_m4
    letraColor4 no n10_m4 n11_m4
    letraColor4 l n10_m4 n12_m4
    letraColor4 no n10_m4 n13_m4
    letraColor4 a n10_m4 n14_m4
    letraColor4 no n10_m4 n15_m4
    letraColor4 n n10_m4 n16_m4  
    letraColor4 no n10_m4 n17_m4
    letraColor4 e n10_m4 n18_m4
    letraColor4 no n10_m4 n19_m4
    letraColor4 s n10_m4 n20_m4
    ret
m2_tm2_p3 ENDP

m2_tm2_p4 PROC
    letraColor4 c n1_m4 n2_m4
    letraColor4 no n1_m4 n3_m4
    letraColor4 h n2_m4 n4_m4
    letraColor4 no n2_m4 n5_m4
    letraColor4 u n3_m4 n6_m4
    letraColor4 no n3_m4 n7_m4
    letraColor4 n n4_m4 n8_m4
    letraColor4 no n4_m4 n9_m4
    letraColor4 c n5_m5 n10_m4  
    letraColor4 no n5_m5 n11_m4
    letraColor4 h n6_m6 n12_m4
    letraColor4 no n6_m6 n13_m4
    letraColor4 i n7_m7 n14_m4
    ret
m2_tm2_p4 ENDP

m2_tm2_p5 PROC
    letraColor4 q n7_m4 n2_m4
    letraColor4 u n8_m4 n2_m4
    letraColor4 i n9_m4 n2_m4
    letraColor4 t n10_m4 n2_m4
    letraColor4 o n11_m4 n2_m4
    ret
m2_tm2_p5 ENDP   
           
