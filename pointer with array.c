#include <stdio.h>

int main(){
	
	int arr[] = {12, 13, 14, 15, 16};
	
//	printf("%d \n", *arr+3 );
//	printf("%d \n", *(&arr[0] + 3) );
	
	arr++;
	
	int i=0;
	while( i!=5 ){
		
		printf("%d  ", *(arr+i) );
		
		i++;
	}
	
	return 0;
}
