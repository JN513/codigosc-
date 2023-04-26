section	.text
   global _start      
	
_start:	              
   mov eax, '.'
	
l1:
   mov [num], eax
   mov eax, 4
   mov ebx, 1
   push ecx
	
   mov ecx, num        
   mov edx, 1        
   int 0x80
	
   mov eax, [num]

   loop l1
	
   mov eax,1             
   int 0x80              
section	.bss
num resb 1