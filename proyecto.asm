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


cadena_mayusculas db 50 dup(0)

v1 db 0
v2 db 0
v3 db 0
v4 db 0
v5 db 0

vI db 0


vTp1 db 0
vTp2 db 0

palabra6letras1 db 10 dup(0)
palabra6letras2 db 10 dup(0)
palabra9letras db 10 dup(0)
palabra7letras db 10 dup(0)
palabra5letras db 10 dup(0)


tp1_p6_l1 db 5 dup(0)
tp1_p6_l2 db 5 dup(0)
tp1_p6_l3 db 5 dup(0)
tp1_p6_l4 db 5 dup(0)
tp1_p6_l5 db 5 dup(0)
tp1_p6_l6 db 5 dup(0)


tp1_p5_l1 db 5 dup(0)
tp1_p5_l2 db 5 dup(0)
tp1_p5_l3 db 5 dup(0)
tp1_p5_l4 db 5 dup(0)
tp1_p5_l5 db 5 dup(0)

tp1_p6 db 10 dup(0)
tp1_p7 db 10 dup(0)
tp1_p9 db 10 dup(0)


p1_tm1_m1 db 'ITALIA',0
p2_tm1_m1 db 'BRASIL',0
p3_tm1_m1 db 'ARGENTINA',0
p4_tm1_m1 db 'ECUADOR',0
p5_tm1_m1 db 'RUSIA',0

brasil db 'B R A S I L'
ecuador db 'E C U A D O R'
argentina db 'A R G E N T I N A'

i db 'I'
t db 'T'
a db 'A'
l db 'L'
r db 'R'
u db 'U'
s db 'S'


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
linea6 db                 '� BIENVENIDO �$'
linea7 db            '� Tematicas Disponibles �$'
linea8 db          '1. Paises de America y Europa$'
linea9 db          '2. Ciudades del Ecuador$'
linea10 db         '3. Paises de Asia y Africa$'

ingreseTematica db '> Ingrese el numero de la tematica deseada: $'

tematicaInco db 'Valor incorrecto$'

ingresePalabra db '>> Ingrese una palabra: $'

palabraInco db 'Incorrecto$'

matrizDeseada db 'Escoja sopa de letras 1 o 2: $'   

matrizInco db 'Matriz incorrecta$'


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

call imprimirLinea 
 
cmp tematica_escogida,1
jl incorrecta_t

cmp tematica_escogida,3
jg incorrecta_t

cmp tematica_escogida,1
jz m_tm1

;cmp tematica_escogida,2
;jz tm_2 

;cmp tematica_escogida,3
;jz tm_3

jmp salir 
 
 
;----------------TEMATICA INGRESADA INCORRECTA------------------

incorrecta_t:

mov ah,09h
lea dx,tematicaInco
int 21h

call imprimirLinea 

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

call imprimirLinea 

;cmp matriz_escogida,1
;jl incorrecta_m

;cmp matriz_escogida,2
;jg incorrecta_m

cmp matriz_escogida,1
jz tm1_m1_inicio

;cmp matriz_escogida,2
;jz tm1_m2_inicio

;----------------MATRIZ INGRESADA INCORRECTA------------------

;incorrecta_m:

;mov ah,09h
;lea dx,matrizInco
;int 21h

;call imprimirLinea 

;jmp m_tm1


;---------------TEMATICA 1 MATRIZ 1---------------------------- 


tm1_m1_inicio:
    mov al,1
    mov vTp1,al
    
    mov ax,3
    int 10h 
    call imprimirM1 
    
    mov dh,14
    mov dl,0
    mov ah,2
    int 10h
    
    jmp palabras_tm1_m1 

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
      
    mov si,offset i
    mov di,offset tp1_p6_l1
    mov cx,1
    rep movsb
    mov si,offset t
    mov di,offset tp1_p6_l2
    mov cx,1
    rep movsb
    mov si,offset a
    mov di,offset tp1_p6_l3
    mov cx,1
    rep movsb
    mov si,offset l
    mov di,offset tp1_p6_l4
    mov cx,1
    rep movsb
    mov si,offset i
    mov di,offset tp1_p6_l5
    mov cx,1
    rep movsb
    mov si,offset a
    mov di,offset tp1_p6_l6
    mov cx,1
    rep movsb
    
    mov si,offset r
    mov di,offset tp1_p5_l1
    mov cx,1
    rep movsb
    mov si,offset u
    mov di,offset tp1_p5_l2
    mov cx,1
    rep movsb
    mov si,offset s
    mov di,offset tp1_p5_l3
    mov cx,1
    rep movsb
    mov si,offset i
    mov di,offset tp1_p5_l4
    mov cx,1
    rep movsb
    mov si,offset a
    mov di,offset tp1_p5_l5
    mov cx,1
    rep movsb

    mov si,offset brasil
    mov di,offset tp1_p6
    mov cx,11
    rep movsb
    mov si,offset ecuador
    mov di,offset tp1_p7
    mov cx,13
    rep movsb
    mov si,offset argentina
    mov di,offset tp1_p9
    mov cx,17
    rep movsb

    jmp ingresar_palabra
    
        

;---------------TEMATICA 1 MATRIZ 1---------------------------- 


;tm1_m2_inicio:
   ; mov ax,3
    ;int 10h 
    ;call imprimirM2 
    
    ;mov dh,14
    ;mov dl,0
    ;mov ah,2
    ;int 10h
    
    ;jmp ingresar_palabra

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
    jmp comprobarP1

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
    call imprimirLinea
    
    mov ah,09h
    lea dx,palabraInco
    int 21h 
    
    call imprimirLinea

    jmp ingresar_palabra  
    
;-------------VALIDAR PALABRAS INGRESADAS---------------


cambiosPantalla:
    mov ax,3
    int 10h 
    call imprimirM1
    jmp validarP1 


validarP1:
    cmp v1,1
    jz cambiosP1
    jnz validarP2
        
cambiosP1:
    ;call m1_tm1_p1
    tp1_p6letrasD i t a l i a
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
   ; call m1_tm1_p2
    tp1_p6letrasH brasil
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
    ;call m1_tm1_p3
    tp1_p9letras argentina
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
    ;call m1_tm1_p4
    tp1_p7letras ecuador
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
    ;call m1_tm1_p5
    tp1_p5letras r u s i a
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
    jz salir
    jnz ingresar_palabra   


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
    
    call imprimirLinea
    
    mov ah,09h   
    lea dx,linea2
    int 21h
    
    call imprimirLinea
    
    mov ah,09h   
    lea dx,linea3
    int 21h
    
    call imprimirLinea
    
    mov ah,09h   
    lea dx,linea4
    int 21h
     
    call imprimirLinea
    
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
    
    cmp si,50
    jl vaciarM

    ret
vaciarMayus ENDP


convertirMayus PROC
    lea si, buffer
    lea di, cadena_mayusculas


    ; Recorre la cadena original
    recorrer:
        mov al, [si]        ; Obtiene el pr�ximo car�cter de la cadena original
        cmp al, 0           ; Comprueba si es el car�cter nulo (fin de cadena)
        je  finConversion   ; Si es el final, termina el bucle

        cmp al, 'a'         ; Compara con 'a'
        jb  noConversion    ; Si es menor que 'a', no es una letra min�scula

        cmp al, 'z'         ; Compara con 'z'
        ja  noConversion    ; Si es mayor que 'z', no es una letra min�scula

        ; Si llega aqu�, el car�cter es una letra min�scula
        sub al, 32          ; Convierte a may�sculas restando 32 (diferencia entre 'a' y 'A')

    noConversion:
        mov [di], al        ; Almacena el car�cter convertido en la cadena de destino

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

;----------------SALIR DEL PROGRAMA--------------------------
salir:
.exit
end