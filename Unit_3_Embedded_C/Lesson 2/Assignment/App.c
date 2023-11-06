#include "Uart.h" 
unsigned char string_buffer [100] = "Learn-in_depth:Abdelrhman Atef Rshdan" ;
void  main(void)
{
	
	Uart_Send_String(string_buffer);
}	