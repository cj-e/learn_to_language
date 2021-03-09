#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	short a;
	
	short b;
	
	a=0xff00;
	
	b=(short)0xff00;
	
	short a_shift;
	
	a_shift = a >> 4;
	
	short b_shift;
	
	b_shift = b >>4;
	
	cout <<"a = "<< a <<"\n"<<"b = "<<b<<"\n"<<"a_shift = "<<a_shift<<"\n"<<"b_shift = "<<b_shift;/*결과 값은 같은걸 확인 할수 있다 정말로 묵시적 형변환과 명시적 형변환은
	 코딩 할때 형변환이 이뤄지는지 볼수있게끔 하는것 뿐인가..*/ 
	
	return 0;
}
