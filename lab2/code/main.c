#include <project.h>

int main()
{
	CyGlobalIntEnable; /* Enable global interrupts. */

	for(;;)
	{           	 
    	if( !SwitchInput_Read() )
    	{
        	LED2_Write(1);   
    	}    
    	else
    	{
        	LED2_Write(0);
    	}
   	 
    	LED_Write( !LED_Read() );   	 
    	CyDelay(500);
	}
}
