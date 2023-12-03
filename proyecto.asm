include emu8086.inc
;include matriz1_tm1.inc
;include matriz2_tm1.inc
;include matriz3_tm2.inc
;include matriz4_tm2.inc
;include matriz5_tm3.inc 
;include matriz6_tm3.inc

org 100h

name 'Sopa de Letras'

.model small

.data 
buffer db 20 dup (0)   ; buffer de entrada para get_string
bufSize = $-buffer ;calcula el tamano del buffer
tematica_escogida db ?
;matriz_escogida db ?


cadena_mayusculas db 50 dup(0)

v1 db 0
v2 db 0
v3 db 0
v4 db 0
v5 db 0

vI db 0

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



.code

.start

mov ax,@data
mov ds,ax


;------------------IMPRIMIR TITULO------------------------ 

PRINTN '<---[SOPA DE LETRAS]--->'

PRINTN ""   
                     
;------------------IMPRIMIR TEMATICAS-----------------------

PRINTN 'Tematicas Disponibles'  


PRINTN '1. Paises de America y de Europa'


PRINTN '2. Ciudades del Ecuador'  


PRINTN '3. Paises de Asia y Africa'
       

;-----------------INGRESAR Y SELECCIONAR TEMATICA-----------------

escoger_t:

PRINT 'Escoja la tematica que desea: '

mov ah,01h
int 21h
sub al,30h
mov tematica_escogida,al

PRINTN "" 
 
cmp tematica_escogida,1
jl incorrecta_t

cmp tematica_escogida,3
jg incorrecta_t

cmp tematica_escogida,1
jz tm1_inicio

;cmp tematica_escogida,2
;jz tm_2 

;cmp tematica_escogida,3
;jz tm_3

jmp salir 
 
 
;----------------TEMATICA INGRESADA INCORRECTA------------------

incorrecta_t:

PRINTN 'Valor incorrecto' 

jmp escoger_t 
 
;---------------TEMATICA 1---------------------------- 


tm1_inicio:
    call clear_screen 
    call imprimirM1
    GOTOXY 0 14    
    jmp ingresar_palabra

;---------------INGRESAR POSIBLE PALABRA---------------------

ingresar_palabra: 
    mov al,0
    mov vI,al
    PRINT 'Ingrese una palabra: '

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
    cmp vI,5
    jz pin
    jnz cambiosPantalla

pin: 
    PRINTN ''
    PRINTN 'Incorrecto'
    call vaciarMayus
    jmp ingresar_palabra  
    
;---------------VALIDAR PALABRAS INGRESADAS-----------------


cambiosPantalla:
    call clear_screen 
    call imprimirM1
    jmp validarP1 


validarP1:
    cmp v1,1
    jz cambiosP1
    jnz validarP2
        
cambiosP1:
    call m1_tm1_p1
    GOTOXY 0 14 
    jmp validarP2

validarP2:
    cmp v2,1
    jz cambiosP2
    jnz validarP3
        
cambiosP2:
    call m1_tm1_p2
    GOTOXY 0 14
    jmp validarP3

validarP3:
    cmp v3,1
    jz cambiosP3
    jnz validarP4
        
cambiosP3:
    call m1_tm1_p3
    GOTOXY 0 14
    jmp validarP4    
    
validarP4:
    cmp v4,1
    jz cambiosP4
    jnz validarP5
        
cambiosP4:
    call m1_tm1_p4
    GOTOXY 0 14
    jmp validarP5    
    
validarP5:
    cmp v5,1
    jz cambiosP5
    jnz total
        
cambiosP5:
    call m1_tm1_p5
    GOTOXY 0 14
    jmp total



;------------TOTAL------------------------


total:
    call vaciarMayus
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

DEFINE_CLEAR_SCREEN  



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



m1_tm1 PROC
    mov ah,09h   
    lea dx,l01_tm1_m1
    int 21h     
    PRINTN ''
    mov ah,09h   
    lea dx,l02_tm1_m1
    int 21h
    PRINTN ''
    mov ah,09h   
    lea dx,l03_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l04_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l05_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l06_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l07_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l08_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l09_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l10_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l11_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l12_tm1_m1
    int 21h  
    PRINTN ''
    mov ah,09h   
    lea dx,l13_tm1_m1
    int 21h  
    PRINTN ''
    ret
m1_tm1 ENDP




convertirMayus PROC
    lea si, buffer
    lea di, cadena_mayusculas


    ; Recorre la cadena original
    recorrer:
        mov al, [si]        ; Obtiene el próximo carácter de la cadena original
        cmp al, 0           ; Comprueba si es el carácter nulo (fin de cadena)
        je  finConversion   ; Si es el final, termina el bucle

        cmp al, 'a'         ; Compara con 'a'
        jb  noConversion    ; Si es menor que 'a', no es una letra minúscula

        cmp al, 'z'         ; Compara con 'z'
        ja  noConversion    ; Si es mayor que 'z', no es una letra minúscula

        ; Si llega aquí, el carácter es una letra minúscula
        sub al, 32          ; Convierte a mayúsculas restando 32 (diferencia entre 'a' y 'A')

    noConversion:
        mov [di], al        ; Almacena el carácter convertido en la cadena de destino

        inc si
        inc di
        jmp recorrer              ; Salta de nuevo al inicio del bucle

    finConversion:
        call vaciarBuf    
    ret    
convertirMayus ENDP


comprobarPalabra1_Tm1_M1 PROC
    lea si, [p1_tm1_m1]
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
    lea si, [p2_tm1_m1]
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
    lea si, [p3_tm1_m1]
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
    lea si, [p4_tm1_m1]
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
    lea si, [p5_tm1_m1]
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
call clear_screen
call imprimirM2
PRINTN 'Felicidades! Completaste la sopa de letras :D'
.exit
end