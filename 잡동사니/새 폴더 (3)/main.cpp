#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	long lArray[20];
	
	long (*p)[20] =&lArray;
	
	(*p)[3]= 300;
	
	cout << lArray[3] <<"\n" << p <<"\n"<< p+1 <<"\n" <<&lArray[19] <<"\n"<<&lArray[19]+1<<"\n"<<p[4]<<"\n" <<(*p)[3];
	
	return 0;
}
