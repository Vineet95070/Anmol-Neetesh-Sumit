#include <iostream>
#pragma pack(1)

class btech{
	
	public:
		char ch2;
		int num;
		char ch;
};

int main(){
	
	btech s1;
	
	std::cout<<sizeof(s1)<<std::endl;
	
	return 0;
}
