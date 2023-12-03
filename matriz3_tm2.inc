letraColor3 macro letra fil col    
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

n0_m3 db 0
n1_m3 db 1
n2_m3 db 2
n3_m3 db 3
n4_m3 db 4
n5_m3 db 5
n6_m3 db 6
n7_m3 db 7
n8_m3 db 8
n9_m3 db 9
n10_m3 db 10
n11_m3 db 11
n12_m3 db 12
n13_m3 db 13
n14_m3 db 14
n15_m3 db 15
n16_m3 db 16
n17_m3 db 17
n18_m3 db 18
n19_m3 db 19
n20_m3 db 20
n21_m3 db 21
n24_m3 db 24
n25_m3 db 25

no db ' '
l1_m3 db 'A'
l2_m3 db 'M'
l3_m3 db 'B'
l4_m3 db 'T'
l5_m3 db 'O'
l6_m3 db 'U'
l7_m3 db 'L'
l8_m3 db 'C'
l9_m3 db 'N'
l10_m3 db 'G'
l11_m3 db 'Y'
l12_m3 db 'Q'
l13_m3 db 'I'
l14_m3 db 'E'
l15_m3 db 'V'
l16_m3 db 'D'




l01_tm2_m1 db 'G F W J L K O B Z V U E A$'
l02_tm2_m1 db 'S U B P S H K E D G C V M$'
l03_tm2_m1 db 'Q X A J M A N T A K J T B$'
l04_tm2_m1 db 'U F Y Y F S W X B Z H L A$'
l05_tm2_m1 db 'E W H N A Q Q E S Y O E T$'
l06_tm2_m1 db 'V Y E W L Q P B S V H Z O$'
l07_tm2_m1 db 'E U G T Z Y U H D H J X A$'
l08_tm2_m1 db 'D I H H Y L Q I B L A G Q$'
l09_tm2_m1 db 'O P K R A P H N L Q Q L Y$'
l10_tm2_m1 db 'S F Y B T U L C A N F R H$'
l11_tm2_m1 db 'L H R C J M L G P T L Y J$'
l12_tm2_m1 db 'I J W J V N S L O Y P I L$'
l13_tm2_m1 db 'Z F A D Y O N O R K U Q A$'




linea3 DB 0AH,0DH,"$"


imprimirL3 PROC
    mov ah,09h
    lea dx,linea1
    int 21h
    ret
imprimirL3 ENDP


imprimirM3 PROC
    mov ah,09h   
    lea dx,l01_tm2_m1
    int 21h         
    call imprimirL3      
    mov ah,09h   
    lea dx,l02_tm2_m1
    int 21h
    call imprimirL3
    mov ah,09h   
    lea dx,l03_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l04_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h      
    lea dx,l05_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l06_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l07_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l08_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l09_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l10_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l11_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l12_tm2_m1
    int 21h  
    call imprimirL3
    mov ah,09h   
    lea dx,l13_tm2_m1
    int 21h  
    call imprimirL3
    ret
imprimirM3 ENDP

m1_tm2_p1 PROC
    letraColor3 a n0_m3 n24_m3
    letraColor3 m n1_m3 n24_m3
    letraColor3 b n2_m3 n24_m3
    letraColor3 a n3_m3 n24_m3
    letraColor3 t n4_m3 n24_m3
    letraColor3 o n5_m3 n24_m3
    ret
m1_tm2_p1 ENDP

m1_tm2_p2 PROC
    letraColor3 t n9_m3 n8_m3 
    letraColor3 no n9_m3 n9_m3  
    letraColor3 u n9_m3 n10_m3  
    letraColor3 no n9_m3 n11_m3  
    letraColor3 l n9_m3 n12_m3  
    letraColor3 no n9_m3 n13_m3  
    letraColor3 c n9_m3 n14_m3  
    letraColor3 no n9_m3 n15_m3  
    letraColor3 a n9_m3 n16_m3  
    letraColor3 no n9_m3 n17_m3  
    letraColor3 n n9_m3 n18_m3  
    ret
m1_tm2_p2 ENDP

m1_tm2_p3 PROC
    letraColor3 g n0_m3 n0_m3
    letraColor3 no n0_m3 n1_m3
    letraColor3 u n1_m3 n2_m3
    letraColor3 no n1_m3 n3_m3
    letraColor3 a n2_m3 n4_m3
    letraColor3 no n2_m3 n5_m3
    letraColor3 y n3_m3 n6_m3
    letraColor3 no n3_m3 n7_m3
    letraColor3 a n4_m3 n8_m3
    letraColor3 no n4_m3 n9_m3
    letraColor3 q n5_m3 n10_m3
    letraColor3 no n5_m3 n11_m3
    letraColor3 u n6_m3 n12_m3  
    letraColor3 no n6_m3 n13_m3
    letraColor3 i n7_m3 n14_m3
    letraColor3 no n7_m3 n15_m3
    letraColor3 l n8_m3 n16_m3
    letraColor3 no n8_m3 n17_m3
    ret
m1_tm2_p3 ENDP

m1_tm2_p4 PROC
    letraColor3 q n2_m3 n0_m3
    letraColor3 u n3_m3 n0_m3
    letraColor3 e n4_m3 n0_m3
    letraColor3 v n5_m3 n0_m3
    letraColor3 e n6_m3 n0_m3
    letraColor3 d n7_m3 n0_m3
    letraColor3 o n8_m3 n0_m3
    ret
m1_tm2_p4 ENDP

m1_tm2_p5 PROC
    letraColor3 m n2_m3 n8_m3
    letraColor3 no n2_m3 n9_m3
    letraColor3 a n2_m3 n10_m3
    letraColor3 no n2_m3 n11_m3
    letraColor3 n n2_m3 n12_m3
    letraColor3 no n2_m3 n13_m3
    letraColor3 t n6_m3 n14_m3
    letraColor3 no n7_m3 n15_m3
    letraColor3 a n8_m3 n16_m3
    ret
m1_tm2_p5 ENDP   
           
