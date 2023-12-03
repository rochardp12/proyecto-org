imprimirLinea macro
    mov ah,09h
    lea dx,nueva_linea
    int 21h
    endm

imprimirM1 macro
    mov ah,09h   
    lea dx,l01_tm1_m1
    int 21h   
    imprimirLinea
    mov ah,09h   
    lea dx,l02_tm1_m1
    int 21h
    imprimirLinea
    mov ah,09h   
    lea dx,l03_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l04_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l05_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l06_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l07_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l08_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l09_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l10_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l11_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l12_tm1_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l13_tm1_m1
    int 21h
    imprimirLinea
    endm

imprimirM2 macro
    mov ah,09h   
    lea dx,l01_tm1_m2
    int 21h         
    imprimirLinea      
    mov ah,09h   
    lea dx,l02_tm1_m2
    int 21h
    imprimirLinea
    mov ah,09h   
    lea dx,l03_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l04_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h      
    lea dx,l05_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l06_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l07_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l08_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l09_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l10_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l11_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l12_tm1_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l13_tm1_m2
    int 21h  
    imprimirLinea
    endm

imprimirM3 macro
    mov ah,09h   
    lea dx,l01_tm2_m1
    int 21h         
    imprimirLinea     
    mov ah,09h   
    lea dx,l02_tm2_m1
    int 21h
    imprimirLinea
    mov ah,09h   
    lea dx,l03_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l04_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h      
    lea dx,l05_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l06_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l07_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l08_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l09_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l10_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l11_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l12_tm2_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l13_tm2_m1
    int 21h  
    imprimirLinea
    endm

imprimirM4 macro
    mov ah,09h   
    lea dx,l01_tm2_m2
    int 21h         
    imprimirLinea      
    mov ah,09h   
    lea dx,l02_tm2_m2
    int 21h
    imprimirLinea
    mov ah,09h   
    lea dx,l03_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l04_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h      
    lea dx,l05_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l06_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l07_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l08_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l09_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l10_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l11_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l12_tm2_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l13_tm2_m2
    int 21h  
    imprimirLinea
    endm

imprimirM5 macro
    mov ah,09h   
    lea dx,l01_tm3_m1
    int 21h     
    imprimirLinea
    mov ah,09h   
    lea dx,l02_tm3_m1
    int 21h
    imprimirLinea
    mov ah,09h   
    lea dx,l03_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l04_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l05_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l06_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l07_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l08_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l09_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l10_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l11_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l12_tm3_m1
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l13_tm3_m1
    int 21h  
    imprimirLinea
    endm

imprimirM6 macro
    mov ah,09h   
    lea dx,l01_tm3_m2
    int 21h     
    imprimirLinea
    mov ah,09h   
    lea dx,l02_tm3_m2
    int 21h
    imprimirLinea
    mov ah,09h   
    lea dx,l03_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l04_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l05_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l06_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l07_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l08_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l09_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l10_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l11_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l12_tm3_m2
    int 21h  
    imprimirLinea
    mov ah,09h   
    lea dx,l13_tm3_m2
    int 21h  
    imprimirLinea
    endm



org 100h

.data
nueva_linea db 0AH,0DH,"$"

l01_tm1_m1 db 'Q F W J L K O B Z V U E A$'
l02_tm1_m1 db 'S D B R A S I L D G C V R$'
l03_tm1_m1 db 'C X W J L K O Q S K J T U$'
l04_tm1_m1 db 'V F Y K F S W X B Z H L S$'
l05_tm1_m1 db 'B I A R G E N T I N A E I$'
l06_tm1_m1 db 'M Y T W L O P B S V H Z A$'
l07_tm1_m1 db 'N U G A Z Y O H D H J X K$'
l08_tm1_m1 db 'Q I H H L L Q W B L A G Z$'
l09_tm1_m1 db 'W P K R A I H N Z Q Q L T$'
l10_tm1_m1 db 'S F Y B F K A S W P F R H$'
l11_tm1_m1 db 'L H R C J M L G P T L Y J$'
l12_tm1_m1 db 'I J W J V N S L O Y P I L$'
l13_tm1_m1 db 'Z F E C U A D O R K U Q A$'

l01_tm1_m2 db 'S F A U S T R I A V U E A$'
l02_tm1_m2 db 'U D W R Q D A H D G M V D$'
l03_tm1_m2 db 'I X W J L K O Q S K E T G$'
l04_tm1_m2 db 'Z F Y K F S W X B Z X L F$'
l05_tm1_m2 db 'A E H N J Q D U A I I E C$'
l06_tm1_m2 db 'A Y D W L O P A N A M A D$'
l07_tm1_m2 db 'N U G E Z Y O H D H O X A$'
l08_tm1_m2 db 'Q I H H Y L Q W B L A G W$'
l09_tm1_m2 db 'W P K R T H H N Z Q Q L A$'
l10_tm1_m2 db 'S F Y H F K B S W P F R H$'
l11_tm1_m2 db 'L H N C J M E X I C O Y J$'
l12_tm1_m2 db 'I M W J V N S L O Y P I L$'
l13_tm1_m2 db 'S F D I N A M A R C A Q A$'

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
