#include <iostream>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	long lArray[20];
	long *p1[20];
	long (*p2)[20]=&lArray;
	int i;
	cout << &lArray << "\t" << lArray;
	for(i=0;i<20;i++){
		p1[i]=&lArray[i];
		cout<<"*p1="<<setw(17)<<*p1[i]<<"\t p2="<<setw(17)<<(*p2)[i]<<setw(17)<<lArray[i]<<"\n";
	}
	for(i=0;i<20;i++){
		cout<<"*p1="<<setw(17)<<p1[i]<<"\t p2="<<setw(17)<<(*p2)[i]<<setw(17)<<&lArray[i]<<"\n";	
	} 

	cout <<"p2="<<p2[2]<<"\t"<<(p2)[2]<<"\t"<<lArray[2]<<"\t"<<&lArray[2]<<"\t"<<*p2[2];
	
	return 0;
}
