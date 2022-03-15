#include <main.h>                                                                                                                                                      
/**                                                                                                                                                                     
* main - Prints _Putchar with a new line                                                                                                                                
*                                                                                                                                                                       
* Return: Always 0 (success)                                                                                                                                            
*                                                                                                                                                                       
*/                                                                                                                                                                      
                                                                                                                                                                        
int main(void)                                                                                                                                                          
{                                                                                                                                                                       
        int i; 
	char p[] = "_putchar";

		for(i=0; i < 9 ; i++)
		{
			putchar(p[i]);
		}
	putchar('\n');
	return (0);
}
