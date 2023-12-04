include emu8086.inc  
include matrices.inc
;include colores.inc
include colorear.inc

org 100h

name 'Sopa de Letras'

.model small

.data 
buffer db 20 dup (0)   ; buffer de entrada para get_string
bufSize = $-buffer ;calcula el tamano del buffer
tematica_escogida db ?
matriz_escogida db ?


cadena_mayusculas db 20 dup(0)

v1 db 0
v2 db 0
v3 db 0
v4 db 0
v5 db 0

vI db 0


vTp1 db 0
vTp2 db 0
vTp3 db 0
vTp4 db 0
vTp5 db 0
vTp6 db 0 

vR db 0

palabra6letras1 db 10 dup(0)
palabra6letras2 db 10 dup(0)
palabra9letras db 10 dup(0)
palabra7letras db 10 dup(0)
palabra5letras db 10 dup(0)


p1_tm1_m1 db 'ITALIA',0
p2_tm1_m1 db 'BRASIL',0
p3_tm1_m1 db 'ARGENTINA',0
p4_tm1_m1 db 'ECUADOR',0
p5_tm1_m1 db 'RUSIA',0



p1_tm1_m2 db 'PANAMA',0
p2_tm1_m2 db 'MEXICO',0
p3_tm1_m2 db 'DINAMARCA',0
p4_tm1_m2 db 'AUSTRIA',0
p5_tm1_m2 db 'SUIZA',0


p1_tm2_m1 db 'AMBATO',0
p2_tm2_m1 db 'TULCAN',0
p3_tm2_m1 db 'GUAYAQUIL',0
p4_tm2_m1 db 'QUEVEDO',0
p5_tm2_m1 db 'MANTA',0 

p1_tm2_m2 db 'CUENCA',0
p2_tm2_m2 db 'IBARRA',0
p3_tm2_m2 db 'CHILLANES',0
p4_tm2_m2 db 'CHUNCHI',0
p5_tm2_m2 db 'QUITO',0 


p1_tm3_m1 db 'CHIPRE',0
p2_tm3_m1 db 'TAIWAN',0
p3_tm3_m1 db 'INDONESIA',0
p4_tm3_m1 db 'SENEGAL',0
p5_tm3_m1 db 'BUTAN',0

p1_tm3_m2 db 'ZAMBIA',0
p2_tm3_m2 db 'EGIPTO',0
p3_tm3_m2 db 'MARRUECOS',0
p4_tm3_m2 db 'CAMBOYA',0
p5_tm3_m2 db 'CHINA',0


linea1 db ' ********************************************** $'
linea2 db '**************<---------------->****************$'
linea3 db '*****(~^^)~***| SOPA DE LETRAS |***~(^^~)*******$'
linea4 db '**************<---------------->****************$'
linea5 db ' ********************************************** $'
linea6 db                 'Ð BIENVENIDO Ð$'
linea7 db            'Ï Tematicas Disponibles Ï$'
linea8 db          '1. Paises de America y Europa$'
linea9 db          '2. Ciudades del Ecuador$'
linea10 db         '3. Paises de Asia y Africa$'

ingreseTematica db '> Ingrese el numero de la tematica deseada: $'

tematicaInco db 'Valor incorrecto$'

ingresePalabra db '>> Ingrese una palabra: $'

palabraInco db 'Incorrecto$'

matrizDeseada db 'Escoja sopa de letras 1 o 2: $'   

matrizInco db 'Matriz incorrecta$'

finalInfo db 'Felicitaciones!! Completaste con exito la sopa de letras :D$'

rendirseAviso db 'En caso de que te des por vencido, tipea la palabra RENDIR$'

rendirseInfo db 'Te diste por vencido!!! :( mas suerte la proxima'

rendir db 'RENDIR',0

.code

.start

mov ax,@data
mov ds,ax



;------------------IMPRIMIR INTERFAZ------------------------ 

call imprimirInterfaz
       

;-----------------INGRESAR Y SELECCIONAR TEMATICA-----------------

escoger_t:

mov ah,09h
lea dx,ingreseTematica
int 21h

mov ah,01h
int 21h
sub al,30h
mov tematica_escogida,al

imprimirLinea 
 
cmp tematica_escogida,1
jl incorrecta_t

cmp tematica_escogida,3
jg incorrecta_t

cmp tematica_escogida,1
jz m_tm1

cmp tematica_escogida,2
jz m_tm2 

cmp tematica_escogida,3
jz m_tm3

jmp salir 
 
 
;----------------TEMATICA INGRESADA INCORRECTA------------------

incorrecta_t:

mov ah,09h
lea dx,tematicaInco
int 21h

imprimirLinea 

jmp escoger_t

;-----------------ESCOGER MATRIZ TEMATICA 1-----------------

m_tm1:

mov ah,09h
lea dx,matrizDeseada
int 21h   

mov ah,01h
int 21h
sub al,30h
mov matriz_escogida,al

imprimirLinea 

cmp matriz_escogida,1
jl incorrecta_m1

cmp matriz_escogida,2
jg incorrecta_m1

cmp matriz_escogida,1
jz tm1_m1_inicio

cmp matriz_escogida,2
jz tm1_m2_inicio


;----------------MATRIZ TM1 INGRESADA INCORRECTA------------------

incorrecta_m1:

mov ah,09h
lea dx,matrizInco
int 21h

imprimirLinea 

jmp m_tm1

;-----------------ESCOGER MATRIZ TEMATICA 2-----------------

m_tm2:

mov ah,09h
lea dx,matrizDeseada
int 21h   

mov ah,01h
int 21h
sub al,30h
mov matriz_escogida,al

imprimirLinea 

cmp matriz_escogida,1
jl incorrecta_m2

cmp matriz_escogida,2
jg incorrecta_m2

cmp matriz_escogida,1
jz tm2_m1_inicio

cmp matriz_escogida,2
jz tm2_m2_inicio


;----------------MATRIZ TM2 INGRESADA INCORRECTA------------------

incorrecta_m2:

mov ah,09h
lea dx,matrizInco
int 21h

imprimirLinea 

jmp m_tm2 

;-----------------ESCOGER MATRIZ TEMATICA 3-----------------

m_tm3:

mov ah,09h
lea dx,matrizDeseada
int 21h   

mov ah,01h
int 21h
sub al,30h
mov matriz_escogida,al

imprimirLinea 

cmp matriz_escogida,1
jl incorrecta_m3

cmp matriz_escogida,2
jg incorrecta_m3

cmp matriz_escogida,1
jz tm3_m1_inicio

cmp matriz_escogida,2
jz tm3_m2_inicio


;----------------MATRIZ TM3 INGRESADA INCORRECTA------------------

incorrecta_m3:

mov ah,09h
lea dx,matrizInco
int 21h

imprimirLinea 

jmp m_tm3


;---------------TEMATICA 1 MATRIZ 1---------------------------- 


tm1_m1_inicio:
    mov al,1
    mov vTp1,al
    
    mov ax,3
    int 10h
    
    mov ah,09h
    lea dx,rendirseAviso
    int 21h
    
    imprimirLinea
    imprimirLinea
     
    imprimirM1 
    
    mov dh,16
    mov dl,0
    mov ah,2
    int 10h
    
    jmp palabras_tm1_m1
    
;--------------TEMATICA 1 MATRIZ 2-----------------------------
tm1_m2_inicio:
    mov al,1
    mov vTp2,al
    
    mov ax,3
    int 10h
    
    mov ah,09h
    lea dx,rendirseAviso
    int 21h
    
    imprimirLinea
    imprimirLinea
     
    imprimirM2 
    
    mov dh,16
    mov dl,0
    mov ah,2
    int 10h
    
    jmp palabras_tm1_m2

;---------------TEMATICA 2 MATRIZ 1---------------------------- 


tm2_m1_inicio:
    mov al,1
    mov vTp3,al
    
    mov ax,3
    int 10h
    
    mov ah,09h
    lea dx,rendirseAviso
    int 21h
    
    imprimirLinea
    imprimirLinea
     
    imprimirM3 
    
    mov dh,16
    mov dl,0
    mov ah,2
    int 10h
    
    jmp palabras_tm2_m1

;---------------TEMATICA 2 MATRIZ 2---------------------------- 


tm2_m2_inicio:
    mov al,1
    mov vTp4,al
    
    mov ax,3
    int 10h
    
    mov ah,09h
    lea dx,rendirseAviso
    int 21h
    
    imprimirLinea
    imprimirLinea
    
    imprimirM4 
    
    mov dh,16
    mov dl,0
    mov ah,2
    int 10h
    
    jmp palabras_tm2_m2
 
 ;---------------TEMATICA 3 MATRIZ 1---------------------------- 


tm3_m1_inicio:
    mov al,1
    mov vTp5,al
    
    mov ax,3
    int 10h
 
    mov ah,09h
    lea dx,rendirseAviso
    int 21h
    
    imprimirLinea
    imprimirLinea
     
    imprimirM5 
    
    mov dh,16
    mov dl,0
    mov ah,2
    int 10h
    
    jmp palabras_tm3_m1 

;---------------TEMATICA 3 MATRIZ 2---------------------------- 


tm3_m2_inicio:
    mov al,1
    mov vTp6,al
    
    mov ax,3
    int 10h
    
    mov ah,09h
    lea dx,rendirseAviso
    int 21h
    
    imprimirLinea
    imprimirLinea
     
    imprimirM6 
    
    mov dh,16
    mov dl,0
    mov ah,2
    int 10h
    
    jmp palabras_tm3_m2 

;----------------PALABRAS MATRIZ 1 TEMATICA 1-----------------
palabras_tm1_m1:
    mov si,offset p1_tm1_m1
    mov di,offset palabra6letras1
    mov cx,6
    rep movsb
    mov si,offset p2_tm1_m1
    mov di,offset palabra6letras2
    mov cx,6
    rep movsb 
    mov si,offset p3_tm1_m1
    mov di,offset palabra9letras
    mov cx,9
    rep movsb  
    mov si,offset p4_tm1_m1
    mov di,offset palabra7letras
    mov cx,7
    rep movsb  
    mov si,offset p5_tm1_m1
    mov di,offset palabra5letras
    mov cx,5
    rep movsb    

    jmp ingresar_palabra
    

;----------------PALABRAS MATRIZ 2 TEMATICA 1-----------------
palabras_tm1_m2:
    mov si,offset p1_tm1_m2
    mov di,offset palabra6letras1
    mov cx,6
    rep movsb
    mov si,offset p2_tm1_m2
    mov di,offset palabra6letras2
    mov cx,6
    rep movsb 
    mov si,offset p3_tm1_m2
    mov di,offset palabra9letras
    mov cx,9
    rep movsb  
    mov si,offset p4_tm1_m2
    mov di,offset palabra7letras
    mov cx,7
    rep movsb  
    mov si,offset p5_tm1_m2
    mov di,offset palabra5letras
    mov cx,5
    rep movsb    

    jmp ingresar_palabra        

;----------------PALABRAS MATRIZ 1 TEMATICA 2-----------------
palabras_tm2_m1:
    mov si,offset p1_tm2_m1
    mov di,offset palabra6letras1
    mov cx,6
    rep movsb
    mov si,offset p2_tm2_m1
    mov di,offset palabra6letras2
    mov cx,6
    rep movsb 
    mov si,offset p3_tm2_m1
    mov di,offset palabra9letras
    mov cx,9
    rep movsb  
    mov si,offset p4_tm2_m1
    mov di,offset palabra7letras
    mov cx,7
    rep movsb  
    mov si,offset p5_tm2_m1
    mov di,offset palabra5letras
    mov cx,5
    rep movsb    

    jmp ingresar_palabra

;----------------PALABRAS MATRIZ 2 TEMATICA 2-----------------
palabras_tm2_m2:
    mov si,offset p1_tm2_m2
    mov di,offset palabra6letras1
    mov cx,6
    rep movsb
    mov si,offset p2_tm2_m2
    mov di,offset palabra6letras2
    mov cx,6
    rep movsb 
    mov si,offset p3_tm2_m2
    mov di,offset palabra9letras
    mov cx,9
    rep movsb  
    mov si,offset p4_tm2_m2
    mov di,offset palabra7letras
    mov cx,7
    rep movsb  
    mov si,offset p5_tm2_m2
    mov di,offset palabra5letras
    mov cx,5
    rep movsb    

    jmp ingresar_palabra

;----------------PALABRAS MATRIZ 1 TEMATICA 3-----------------
palabras_tm3_m1:
    mov si,offset p1_tm3_m1
    mov di,offset palabra6letras1
    mov cx,6
    rep movsb
    mov si,offset p2_tm3_m1
    mov di,offset palabra6letras2
    mov cx,6
    rep movsb 
    mov si,offset p3_tm3_m1
    mov di,offset palabra9letras
    mov cx,9
    rep movsb  
    mov si,offset p4_tm3_m1
    mov di,offset palabra7letras
    mov cx,7
    rep movsb  
    mov si,offset p5_tm3_m1
    mov di,offset palabra5letras
    mov cx,5
    rep movsb    

    jmp ingresar_palabra

;----------------PALABRAS MATRIZ 2 TEMATICA 3-----------------
palabras_tm3_m2:
    mov si,offset p1_tm3_m2
    mov di,offset palabra6letras1
    mov cx,6
    rep movsb
    mov si,offset p2_tm3_m2
    mov di,offset palabra6letras2
    mov cx,6
    rep movsb 
    mov si,offset p3_tm3_m2
    mov di,offset palabra9letras
    mov cx,9
    rep movsb  
    mov si,offset p4_tm3_m2
    mov di,offset palabra7letras
    mov cx,7
    rep movsb  
    mov si,offset p5_tm3_m2
    mov di,offset palabra5letras
    mov cx,5
    rep movsb    

    jmp ingresar_palabra    

;---------------INGRESAR POSIBLE PALABRA---------------------

ingresar_palabra: 
    mov al,0
    mov vI,al 
    
    mov ah,09h
    lea dx,ingresePalabra
    int 21h  

    lea  di, buffer ;configura el puntero (DI) para el buffer de entrada
    mov  dx, bufSize ;establece el tamano del buffer
    call get_string  ;obtener el nombre y ponerlo en el buffer  
    call convertirMayus
    
    jmp comprobarRendir
    
;--------------COMPROBAR RENDIR-----------------------
comprobarRendir:
    call comprobarPalabraRendir
    jmp testR
testR:    
    cmp vR,1
    jz menu_rendirse
    jnz comprobarP1
    
    
;-------------RENDIRSE--------------------------------

menu_rendirse:
    mov ax,3
    int 10h

    ;mov ah,09h
    ;lea dx,rendirseInfo
    ;int 21h
    
    letraColor rendirseInfo n0 n0 w47
    
    jmp salir
 

;--------------COMPROBAR PALABRAS----------------------

comprobarP1:
    call comprobarPalabra1_Tm1_M1
    jmp comprobarP2 
    
comprobarP2:
    call comprobarPalabra2_Tm1_M1
    jmp comprobarP3
    
comprobarP3:
    call comprobarPalabra3_Tm1_M1    
    jmp comprobarP4
    
comprobarP4:
    call comprobarPalabra4_Tm1_M1
    jmp comprobarP5
    
comprobarP5:
    call comprobarPalabra5_Tm1_M1
    jmp incorrecto        

;------------PALABRA INCORRECTA-----------------

incorrecto:
    call vaciarMayus
    cmp vI,5
    jz pin
    jnz cambiosPantalla
    jnz total

pin: 
    imprimirLinea
    
    mov ah,09h
    lea dx,palabraInco
    int 21h 
    
    imprimirLinea

    jmp ingresar_palabra  
    
;-------------VALIDAR PALABRAS INGRESADAS---------------


cambiosPantalla:
    mov ax,3
    int 10h 
    jmp validacionM1
    
validacionM1:
    cmp vTp1,1
    jz k1
    jnz validacionM2
k1:
    imprimirM1
    jmp validarP1
    
validacionM2:
    cmp vTp2,1
    jz k2
    jnz validacionM3
k2:
    imprimirM2
    jmp validarP1_1

validacionM3:
    cmp vTp3,1
    jz k3
    jnz validacionM4
k3:
    imprimirM3
    jmp validarP1_2     
    
validacionM4:
    cmp vTp4,1
    jz k4
    jnz validacionM5
k4:
    imprimirM4
    jmp validarP1_3 

validacionM5:
    cmp vTp5,1
    jz k5
    jnz k6
k5:
    imprimirM5
    jmp validarP1_4 

k6:
    imprimirM6
    jmp validarP1_5 



validarP1:
    cmp v1,1
    jz cambiosP1
    jnz validarP2
        
cambiosP1:
    m1_italia
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h 
    jmp validarP2

validarP2:
    cmp v2,1
    jz cambiosP2
    jnz validarP3
        
cambiosP2:
    m1_brasil 
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP3

validarP3:
    cmp v3,1
    jz cambiosP3
    jnz validarP4
        
cambiosP3:
    m1_argentina   
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP4    
    
validarP4:
    cmp v4,1
    jz cambiosP4
    jnz validarP5
        
cambiosP4:
    m1_ecuador p7
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP5    
    
validarP5:
    cmp v5,1
    jz cambiosP5
    jnz total
        
cambiosP5:
    m1_rusia
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp total
    
    
    
    
validarP1_1:
    cmp v1,1
    jz cambiosP1_1
    jnz validarP2_1
        
cambiosP1_1:
    m2_panama
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h 
    jmp validarP2_1

validarP2_1:
    cmp v2,1
    jz cambiosP2_1
    jnz validarP3_1
        
cambiosP2_1:
    m2_mexico
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP3_1

validarP3_1:
    cmp v3,1
    jz cambiosP3_1
    jnz validarP4_1
        
cambiosP3_1:
    m2_dinamarca    
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP4_1    
    
validarP4_1:
    cmp v4,1
    jz cambiosP4_1
    jnz validarP5_1
        
cambiosP4_1:
    m2_austria
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP5_1    
    
validarP5_1:
    cmp v5,1
    jz cambiosP5_1
    jnz total
        
cambiosP5_1:
    m2_suiza
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp total
    
    
validarP1_2:
    cmp v1,1
    jz cambiosP1_2
    jnz validarP2_2
        
cambiosP1_2:
    m3_ambato
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h 
    jmp validarP2_2

validarP2_2:
    cmp v2,1
    jz cambiosP2_2
    jnz validarP3_2
        
cambiosP2_2:
    m3_tulcan
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP3_2

validarP3_2:
    cmp v3,1
    jz cambiosP3_2
    jnz validarP4_2
        
cambiosP3_2:
    m3_guayaquil    
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP4_2    
    
validarP4_2:
    cmp v4,1
    jz cambiosP4_2
    jnz validarP5_2
        
cambiosP4_2:
    m3_quevedo
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP5_2    
    
validarP5_2:
    cmp v5,1
    jz cambiosP5_2
    jnz total
        
cambiosP5_2:
    m3_manta
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp total






validarP1_3:
    cmp v1,1
    jz cambiosP1_3
    jnz validarP2_3
        
cambiosP1_3:
    m4_cuenca
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h 
    jmp validarP2_3

validarP2_3:
    cmp v2,1
    jz cambiosP2_3
    jnz validarP3_3
        
cambiosP2_3:
    m4_ibarra
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP3_3

validarP3_3:
    cmp v3,1
    jz cambiosP3_3
    jnz validarP4_3
        
cambiosP3_3:
    m4_chillanes    
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP4_3    
    
validarP4_3:
    cmp v4,1
    jz cambiosP4_3
    jnz validarP5_3
        
cambiosP4_3:
    m4_chunchi
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP5_3    
    
validarP5_3:
    cmp v5,1
    jz cambiosP5_3
    jnz total
        
cambiosP5_3:
    m4_quito
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp total
    
    


validarP1_4:
    cmp v1,1
    jz cambiosP1_4
    jnz validarP2_4
        
cambiosP1_4:
    m5_chipre
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h 
    jmp validarP2_4

validarP2_4:
    cmp v2,1
    jz cambiosP2_4
    jnz validarP3_4
        
cambiosP2_4:
    m5_taiwan
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP3_4

validarP3_4:
    cmp v3,1
    jz cambiosP3_4
    jnz validarP4_4
        
cambiosP3_4:
    m5_indonesia    
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP4_4    
    
validarP4_4:
    cmp v4,1
    jz cambiosP4_4
    jnz validarP5_4
        
cambiosP4_4:
    m5_senegal
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP5_4    
    
validarP5_4:
    cmp v5,1
    jz cambiosP5_4
    jnz total
        
cambiosP5_4:
    m5_butan
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp total 
    
    
    



validarP1_5:
    cmp v1,1
    jz cambiosP1_5
    jnz validarP2_5
        
cambiosP1_5:
    m6_zambia
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h 
    jmp validarP2_5

validarP2_5:
    cmp v2,1
    jz cambiosP2_5
    jnz validarP3_5
        
cambiosP2_5:
    m6_egipto
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP3_5

validarP3_5:
    cmp v3,1
    jz cambiosP3_5
    jnz validarP4_5
        
cambiosP3_5:
    m6_marruecos    
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP4_5    
    
validarP4_5:
    cmp v4,1
    jz cambiosP4_5
    jnz validarP5_5
        
cambiosP4_5:
    m6_camboya
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp validarP5_5    
    
validarP5_5:
    cmp v5,1
    jz cambiosP5_5
    jnz total
        
cambiosP5_5:
    m6_china
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    jmp total           
    


;------------TOTAL------------------------


total:
    mov al,0
    add al,v1
    add al,v2
    add al,v3
    add al,v4
    add al,v5
    cmp al,5
    jz final
    jnz ingresar_palabra   

final:
    mov ah,09h
    lea dx,finalInfo
    int 21h
    jmp salir    


jmp salir



;---------------TEMATICA 2----------------------------

;tm_2:

;---------------TEMATICA 3----------------------------

;tm_3:


;-----------------PROCEDIMIENTOS---------------------

DEFINE_GET_STRING   

imprimirInterfaz PROC
    mov ah,09h   
    lea dx,linea1
    int 21h  
    
    imprimirLinea
    
    mov ah,09h   
    lea dx,linea2
    int 21h
    
    imprimirLinea
    
    mov ah,09h   
    lea dx,linea3
    int 21h
    
    imprimirLinea
    
    mov ah,09h   
    lea dx,linea4
    int 21h
     
    imprimirLinea
    
    mov ah,09h   
    lea dx,linea5
    int 21h
    
    mov dh,6
    mov dl,16
    mov ah,2
    int 10h 
    
    mov ah,09h   
    lea dx,linea6
    int 21h
    
    mov dh,8
    mov dl,11
    mov ah,2
    int 10h
 
    mov ah,09h   
    lea dx,linea7
    int 21h 

    mov dh,10
    mov dl,9
    mov ah,2
    int 10h
    
    mov ah,09h   
    lea dx,linea8
    int 21h      
    
    mov dh,11
    mov dl,9
    mov ah,2
    int 10h

    mov ah,09h   
    lea dx,linea9
    int 21h      
    
    mov dh,12
    mov dl,9
    mov ah,2
    int 10h

    mov ah,09h   
    lea dx,linea10
    int 21h      
     
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    ret   
imprimirInterfaz ENDP


vaciarBuf PROC

    mov si,0
    vaciarB:
    mov byte ptr [buffer+si],0
    inc si;
    
    cmp si,20
    jl vaciarB

    ret
vaciarBuf ENDP


vaciarMayus PROC

    mov si,0
    vaciarM:
    mov byte ptr [cadena_mayusculas+si],0
    inc si;
    
    cmp si,20
    jl vaciarM

    ret
vaciarMayus ENDP


convertirMayus PROC
    lea si, buffer
    lea di, cadena_mayusculas


    ; Recorre la cadena original
    recorrer:
        mov al, [si]        ; Obtiene el prï¿½ximo carï¿½cter de la cadena original
        cmp al, 0           ; Comprueba si es el carï¿½cter nulo (fin de cadena)
        je  finConversion   ; Si es el final, termina el bucle

        cmp al, 'a'         ; Compara con 'a'
        jb  noConversion    ; Si es menor que 'a', no es una letra minï¿½scula

        cmp al, 'z'         ; Compara con 'z'
        ja  noConversion    ; Si es mayor que 'z', no es una letra minï¿½scula

        ; Si llega aquï¿½, el carï¿½cter es una letra minï¿½scula
        sub al, 32          ; Convierte a mayï¿½sculas restando 32 (diferencia entre 'a' y 'A')

    noConversion:
        mov [di], al        ; Almacena el carï¿½cter convertido en la cadena de destino

        inc si
        inc di
        jmp recorrer              ; Salta de nuevo al inicio del bucle

    finConversion:
        call vaciarBuf    
    ret    
convertirMayus ENDP


comprobarPalabra1_Tm1_M1 PROC
    lea si, [palabra6letras1]
    lea di, [cadena_mayusculas]
    jmp comparar

    comparar:
    ; Compara los caracteres
        mov al, [si]
        cmp al, [di]

    ; Si los caracteres son diferentes, sal del bucle
        jne diferentes

    ; Si se llega al final de la cadena, son iguales
        cmp al, 0
        je iguales

    ; Incrementa los punteros y repite el bucle
        inc si
        inc di
        jmp comparar

    diferentes:
    ; Las cadenas no son iguales
        mov al,vI
        add al,1
        mov vI,al
        jmp comprobarP2

    iguales:
        mov al,1
        mov v1,al
    ret
comprobarPalabra1_Tm1_M1 ENDP


comprobarPalabra2_Tm1_M1 PROC
    lea si, [palabra6letras2]
    lea di, [cadena_mayusculas]
    jmp comparar2

    comparar2:
    ; Compara los caracteres
        mov al, [si]
        cmp al, [di]

    ; Si los caracteres son diferentes, sal del bucle
        jne diferentes2

    ; Si se llega al final de la cadena, son iguales
        cmp al, 0
        je iguales2

    ; Incrementa los punteros y repite el bucle
        inc si
        inc di
        jmp comparar2

    diferentes2:
    ; Las cadenas no son iguales
        mov al,vI
        add al,1
        mov vI,al
        jmp comprobarP3

    iguales2:
        mov al,1
        mov v2,al 
    ret
comprobarPalabra2_Tm1_M1 ENDP

comprobarPalabra3_Tm1_M1 PROC
    lea si, [palabra9letras]
    lea di, [cadena_mayusculas]
    jmp comparar3

    comparar3:
    ; Compara los caracteres
        mov al, [si]
        cmp al, [di]

    ; Si los caracteres son diferentes, sal del bucle
        jne diferentes3

    ; Si se llega al final de la cadena, son iguales
        cmp al, 0
        je iguales3

    ; Incrementa los punteros y repite el bucle
        inc si
        inc di
        jmp comparar3

    diferentes3:
    ; Las cadenas no son iguales
        mov al,vI
        add al,1
        mov vI,al
        jmp comprobarP4

    iguales3:
        mov al,1
        mov v3,al
    ret
comprobarPalabra3_Tm1_M1 ENDP

comprobarPalabra4_Tm1_M1 PROC
    lea si, [palabra7letras]
    lea di, [cadena_mayusculas]
    jmp comparar4

    comparar4:
    ; Compara los caracteres
        mov al, [si]
        cmp al, [di]

    ; Si los caracteres son diferentes, sal del bucle
        jne diferentes4

    ; Si se llega al final de la cadena, son iguales
        cmp al, 0
        je iguales4

    ; Incrementa los punteros y repite el bucle
        inc si
        inc di
        jmp comparar4

    diferentes4:
    ; Las cadenas no son iguales
        mov al,vI
        add al,1
        mov vI,al
        jmp comprobarP5
        
    iguales4:
        mov al,1
        mov v4,al
    ret
comprobarPalabra4_Tm1_M1 ENDP

comprobarPalabra5_Tm1_M1 PROC
    lea si, [palabra5letras]
    lea di, [cadena_mayusculas]
    jmp comparar5

    comparar5:
    ; Compara los caracteres
        mov al, [si]
        cmp al, [di]

    ; Si los caracteres son diferentes, sal del bucle
        jne diferentes5

    ; Si se llega al final de la cadena, son iguales
        cmp al, 0
        je iguales5

    ; Incrementa los punteros y repite el bucle
        inc si
        inc di
        jmp comparar5

    diferentes5:
    ; Las cadenas no son iguales
        mov al,vI
        add al,1
        mov vI,al
        jmp incorrecto
    iguales5:
        mov al,1
        mov v5,al
    ret
comprobarPalabra5_Tm1_M1 ENDP


comprobarPalabraRendir PROC
    lea si, [rendir]
    lea di, [cadena_mayusculas]
    jmp compararR

    compararR:
    ; Compara los caracteres
        mov al, [si]
        cmp al, [di]

    ; Si los caracteres son diferentes, sal del bucle
        jne diferentesR

    ; Si se llega al final de la cadena, son iguales
        cmp al, 0
        je igualesR

    ; Incrementa los punteros y repite el bucle
        inc si
        inc di
        jmp compararR

    diferentesR:
        jmp testR
    igualesR:
        mov al,1
        mov vR,al
    ret
comprobarPalabraRendir ENDP


;----------------SALIR DEL PROGRAMA--------------------------
salir:
.exit
end