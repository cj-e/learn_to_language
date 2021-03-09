#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Flags
{
 int a : 3;
 int b : 4;
 unsigned int : 1;
 bool c : 1;
};
int main(int argc, char** argv) {
	Flags f;
	Flags *a=&f;
	cout<<a<<"\n"<<f.b<<"\n"<<a+2<<"\n"<<a+3;
	
	return 0;
}
