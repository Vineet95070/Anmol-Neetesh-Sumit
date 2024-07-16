#include <iostream>
using namespace std;

int main(){
	
//	int arr[] = {12, 14, 17, 18, 10};
	int arr[5] = {12, 14, 17, 18, 10};
	
	int i=0;
	int size = sizeof(arr)/sizeof(int);
	
	while( i!=size ){
		
		printf("%d  ", *(arr+i) );
		
		i++;
	}
	
	
//	while( i!=size ){
//		
//		printf("%d  ", arr[i]);
//		
//		i++;
//	}
	
		
	return 0;
}
