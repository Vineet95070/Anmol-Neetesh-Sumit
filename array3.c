#include <iostream>
using namespace std;

int main(){
	
	int arr[5] = {12, 14, 17, 18, 10};
	
	cout<<arr<<endl;	//base address
	cout<<&arr[0]<<endl;//base address
	cout<<*arr<<endl;	//value at base address
	cout<<*(&arr[0])<<endl;	//value at base address
		
	return 0;
}
