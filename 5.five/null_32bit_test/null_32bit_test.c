// null_32bit_test
#include <stdio.h>
int main(void)
{

 	_asm{
	  mov edi,edi
  	  mov edi,edi
 		}
	printf("Hello world!\n");

	return 0;
}
