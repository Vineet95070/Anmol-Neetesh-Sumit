#include <stdio.h>

int main(){
	
	int arr[5] = {10, 20, 30, 40, 50};
//	int* ptr = &arr[0];
	int* ptr = arr;
	
	printf("%d \n", *(ptr+4));	//50
	printf("%d \n", *ptr++);
	printf("%d \n", *arr);
	printf("%d \n", *ptr);
	printf("%d \n", *++ptr);	//30
	printf("%d \n", ++*ptr);	//++(*ptr)
	
}
