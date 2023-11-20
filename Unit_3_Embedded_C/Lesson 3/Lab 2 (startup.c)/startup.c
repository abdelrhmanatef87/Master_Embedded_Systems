// startup.c 
// Eng.Abdelrhman Atef Rshdan 

#include "Plateform_Types.h" 
extern int main(void);
extern Uint32_t  _stack_top ;


void Default_Handler (void) ;
void Reset_Handler (void) ;
void NMI_Handler (void)         __attribute__ ((weak , alias ("Default_Handler")));;
void H_Fault_Handler (void)     __attribute__ ((weak , alias ("Default_Handler")));;
void MM_Fault_Handler (void)    __attribute__ ((weak , alias ("Default_Handler")));;
void Bus_Fault (void)           __attribute__ ((weak , alias ("Default_Handler")));;
void Usage_Fault_Handler(void)  __attribute__ ((weak , alias ("Default_Handler")));;


Uint32_t vectors [] __attribute__ ((section (".vectors"))) = {

   (Uint32_t) &_stack_top ,
   (Uint32_t) &Reset_Handler ,
   (Uint32_t) &NMI_Handler ,
   (Uint32_t) &H_Fault_Handler ,
   (Uint32_t) &MM_Fault_Handler ,
   (Uint32_t) &Bus_Fault ,
   (Uint32_t) &Usage_Fault_Handler ,


};

extern Uint32_t _E_text ;
extern Uint32_t _S_data ;
extern Uint32_t _E_data ;
extern Uint32_t _S_bss ;
extern Uint32_t _E_bss ;

void Reset_Handler (void) { 

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

void Default_Handler (void) {

	Reset_Handler();
}