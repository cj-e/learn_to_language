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
	
	cout <<"a = "<< a <<"\n"<<"b = "<<b<<"\n"<<"a_shift = "<<a_shift<<"\n"<<"b_shift = "<<b_shift;/*��� ���� ������ Ȯ�� �Ҽ� �ִ� ������ ������ ����ȯ�� ����� ����ȯ��
	 �ڵ� �Ҷ� ����ȯ�� �̷������� �����ְԲ� �ϴ°� ���ΰ�..*/ 
	
	return 0;
}
