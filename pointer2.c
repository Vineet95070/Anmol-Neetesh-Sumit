#include <stdio.h>

int main(){
	
	int num = 12;
	
	int ptr = &num;
	int *pptr = &num;
	
	printf("%d \n", ptr);
	printf("%d \n", pptr);
	
	return 0;
}
