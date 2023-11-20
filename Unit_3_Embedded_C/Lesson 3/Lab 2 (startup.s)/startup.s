/* 
    startup cortex-m3 
    Eng.Abdelrhman Atef Rshdan
*/

/* SRAM Starting At 0x20000000 */

.section .vectors

.word 0x20001000       /*address of stack pointer */
.word _reset           /* 1 Reset */
.word _Vector_handler  /* 2 NMI handler */
.word _Vector_handler  /* 3 hard fault handler */
.word _Vector_handler  /* 4 NM fault */
.word _Vector_handler  /* 5 Bus fault */
.word _Vector_handler  /* 6 Usage fault */
.word _Vector_handler  /* 7 Reserved */
.word _Vector_handler  /* 8 Reserved */
.word _Vector_handler  /* 9 Reserved */
.word _Vector_handler  /* 10 Reserved */
.word _Vector_handler  /* 11 SV call */
.word _Vector_handler  /* 12 Debug Reserved */
.word _Vector_handler  /* 13 Reserved */
.word _Vector_handler  /* 14 PendSV */
.word _Vector_handler  /* 15 SysTick */
.word _Vector_handler  /* 16 IRQ0 */
.word _Vector_handler  /* 17 IRQ1 */
.word _Vector_handler  /* 18 IRQ2 */
.word _Vector_handler  /* 19 ... */




.section .text

_reset : 
  bl  main 
  b   .
  
.thumb_func        /* to enable 32 or 16 bit  */  

_Vector_handler : 
  b  _reset
    
