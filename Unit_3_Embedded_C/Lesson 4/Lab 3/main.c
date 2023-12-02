/*  
  Toggle
  cortex-m4
  Eng Abdelrhman Atef Rshdan
*/


#include "Plateform_Types.h" 
                                                     //base address + offset
#define SYSCTL_RCGC2_R    *((volatile unsigned long * )  (0x400FE108))
#define GPIO_PORTF_DIR_R  *((volatile unsigned long * )  (0x40025400))
#define GPIO_PORTF_DEN_R  *((volatile unsigned long * )  (0x4002551C))
#define GPIO_PORTF_DATA_R *((volatile unsigned long * )  (0x400253FC)) 

int  main(void)
{
	SYSCTL_RCGC2_R = 0x00000020;
    
	//just delay to make sure that GPIOF is up and runnning
	volatile unsigned long delay_count ; // to solve optimization 
	for( delay_count = 0 ; delay_count < 200;delay_count++);  
     
    //Direction is output for pin 3 in port F
	GPIO_PORTF_DIR_R |= (1 << 3);
	//Enabled 
	GPIO_PORTF_DEN_R |= (1 << 3); 	 
    
    while(1) {
         
        //toggle led
        // set 1
    	GPIO_PORTF_DATA_R |= (1 << 3); 
    	for( delay_count = 0 ; delay_count < 200000;delay_count++);  

    	//clear bit 1 to 0
    	GPIO_PORTF_DATA_R  &= ~(1 << 3); 
    	for( delay_count = 0 ; delay_count < 200000;delay_count++);  

    }
  

	return 0;
}