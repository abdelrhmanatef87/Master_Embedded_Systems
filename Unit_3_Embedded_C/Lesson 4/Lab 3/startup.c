// startup.c 
// Eng.Abdelrhman Atef Rshdan 

#include "Plateform_Types.h" 
extern int main(void);
extern Uint32_t _E_text ;
extern Uint32_t _S_data ;
extern Uint32_t _E_data ;
extern Uint32_t _S_bss ;
extern Uint32_t _E_bss ;



void Default_Handler () ;
void Reset_Handler () ;
void NMI_Handler ()         __attribute__ ((weak , alias ("Default_Handler")));;
void H_Fault_Handler ()     __attribute__ ((weak , alias ("Default_Handler")));;
void MM_Fault_Handler ()    __attribute__ ((weak , alias ("Default_Handler")));;
void Bus_Fault ()           __attribute__ ((weak , alias ("Default_Handler")));;
void Usage_Fault_Handler()  __attribute__ ((weak , alias ("Default_Handler")));;


/*
 booking 1024 Bytes located by .bss through un 
 initialized array of int of 256 elements 
 as (256 * 4 = 1024) 
 and make it static to limit it scope
*/
static unsigned long Stack_top[256];

/*

 g_p_fn_Vectors is an array of constant pointer 
 to function that take nothing and return void

*/
void (* const g_p_fn_Vectors []) ()  __attribute__((section (".vectors"))) = {
   
   //same type of the array
   (void (*)()) ((unsigned long)Stack_top + sizeof(Stack_top)) ,
                 &Reset_Handler ,
                 &NMI_Handler ,
                 &H_Fault_Handler ,
                 &MM_Fault_Handler ,
                 &Bus_Fault ,
                 &Usage_Fault_Handler ,


};



void Reset_Handler () { 

   // copy Data section from flash to sram 
   Uint32_t Data_Size = (Uint8_t *) &_E_data - (Uint8_t *) &_S_data ; //get the size of the data section
   Uint8_t * p_src = (Uint8_t *)&_E_text ;
   Uint8_t * p_dst = (Uint8_t *)&_S_data ;
    
   for (int i = 0 ; i < Data_Size ;i++) {
      *((Uint8_t*)p_dst++) = *((Uint8_t*)p_src++) ; 

   }  

   // init .bss section  in sRam by zero
   Uint32_t  bss_Size = (Uint8_t *) &_E_bss - (Uint8_t *) &_S_bss ; //get the size of the data section
   p_dst = (Uint8_t *)&_S_bss ; 

   for (int  i = 0 ; i < bss_Size ; i++) {
     *((Uint8_t*)p_dst++) = (Uint8_t)0 ; 

   }
   // jump to main()
     main();
} 

void Default_Handler () {

	Reset_Handler();
}