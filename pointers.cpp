#include <iostream>
using namespace std;

int main(){
	
	int num = 34;
	int* ptr = &num;
	int** pptr = &ptr;
	
	printf("%d \n", num); //34
	printf("%d \n", &num); //address of num
	printf("%d \n", *(&num) );	//34
	printf("%d \n", ptr);	//address of num
	printf("%d \n", &ptr);	//address of ptr
	printf("%d \n", *ptr);	//34
	printf("%d \n", *(&ptr) );//address of num
	printf("%d \n", pptr);	//address of ptr
	printf("%d \n", &pptr);	//address of pptr
	printf("%d \n", *pptr);	//address of num
	printf("%d \n", **pptr);//value at num
	printf("%d \n", *(&pptr));//address of ptr
		
	return 0;
}
