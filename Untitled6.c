#include <stdio.h>
//sizeof pointer;

int main(){
	
	int num = 23;
	float f;
	double d;
	short sh;
	
	int* ptr1 = &num;
	float* ptr2 = &f;
	double* ptr3 = &d;
	short* ptr4 = &sh;
	
	printf("%d \n", sizeof(ptr1));
	printf("%d \n", sizeof(ptr2));
	printf("%d \n", sizeof(ptr3));
	printf("%d \n", sizeof(ptr4));
	
	
	return 0;
}

