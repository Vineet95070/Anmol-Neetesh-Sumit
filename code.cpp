#include <iostream>
using namespace std;

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
	
	cout<<sizeof(ptr1)<<endl;	//4
	cout<<sizeof(ptr2)<<endl;	//4
	cout<<sizeof(ptr3)<<endl;	//8
	cout<<sizeof(ptr4)<<endl;	//2
	
	
	return 0;
}

