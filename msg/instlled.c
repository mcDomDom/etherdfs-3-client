/* msg\instlled.c: THIS FILE IS AUTO-GENERATED BY GENMSG.C -- DO NOT MODIFY! */
_asm {
  push ds
  push dx
  push ax
  call getip
  S000 db 69,116,104,101,114,68,70,83,32,118,48,46,56,46,50,32
  S001 db 105,110,115,116,97,108,108,101,100,32,40,108,111,99,97,108
  S002 db 32,77,65,67,32,'$'
 getip:
  pop dx
  push cs
  pop ds
  mov ah,9h
  int 21h
  pop ax
  pop dx
  pop ds
};
