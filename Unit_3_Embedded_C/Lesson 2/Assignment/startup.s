.global reset 

/*rest section or label*/
reset:
	ldr sp , =stack_top  
	bl  main    		  		
stop: b stop   			   	
