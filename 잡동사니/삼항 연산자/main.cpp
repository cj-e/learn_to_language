#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a=1,b=2,c;
	
	c=a>b?a:b;// a>b��� ������ �������� true�̸� : ������ �ִ°��� c�� false �̸� �������� �ִ°��� c�� 
	
	cout <<c;
	
	c=a>b?b:a;
	
	cout <<c;
	
	c=b>a?a:b;
	
	cout <<c;
	
	return 0;
}
