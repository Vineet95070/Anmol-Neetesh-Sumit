#include <iostream>
using namespace std;

int main(){
	
	int ii = 12, j=13, k=9, l=6, m=34;
	int *a=&ii, *b=&j, *c=&k, *d=&l, *e=&m;
	
	int** ptr[5] = {&a, &b, &c, &d, &e};
	
	int i=0;
	while( i!=5 ){
		
		cout<<***(ptr+i)<<"  ";
		
		i++;
	}
	
	
	return 0;
}
