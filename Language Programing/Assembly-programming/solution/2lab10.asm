dosseg
.model small
.stack 100h
.data 
a db 'both are equal$'
.code
main proc

mov dl,31h
mov cl,9

l1:
mov ah,2
int 21h
add dl,1
loop l1

mov ah,4ch
int 21h

main endp
end main
   
   