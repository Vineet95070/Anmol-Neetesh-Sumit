#include <stdio.h>

int main(){
	
	int num = 12;
	int *ptr = &num;
	int **pptr = &ptr;
	
	printf("%d \n", num);	//12
	printf("%d \n", &num);	//address of num
	printf("%d \n", *(&num) );
	printf("%d \n", ptr);	//address of num
	printf("%d \n", *ptr);	//12
	printf("%d \n", *(&ptr) );
	printf("%d \n", pptr);
	printf("%d \n", *pptr);
	printf("%d \n", **pptr);
	printf("%d \n", *(&pptr) );
	
	
	return 0;
}
