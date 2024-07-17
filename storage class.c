#include <stdio.h>

int main(){
	
	int const num = 12;	//num is read only variable
	
	int*  ptr = &num;
	
	printf("%d \n", ptr);
	
	ptr++;

	printf("%d \n", ptr);
	
	return 0;
}
