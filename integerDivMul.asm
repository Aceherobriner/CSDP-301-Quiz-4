;Name: Israel Showell
;Date Created: 10/31/2022
;Project Name: Assembly Div And Mul Function
;Project Desc: 



.386
.model flat, c
.code	

integerMulDiv		proc
					push ebp
					mov ebp, esp

					mov eax, [ebp + 8]
					mov ebx, [ebp + 12]
					mov ecx, [ebp + 16]

					add eax, ebx
					add eax, ecx
					pop ebp
					ret

integerMulDiv		endp	
end