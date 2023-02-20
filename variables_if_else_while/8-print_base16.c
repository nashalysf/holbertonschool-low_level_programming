#include <stdio.h>

int main(void){
		
	int x;

	for(x = 0; x <= 16; x++){
		if(x <= 9){
			putchar(x);
		} else if(x <= 10){
			x = 'a';
			putchar(x);
			x++;
		}
	}
	
	putchar('\n');
	return(0);


}
