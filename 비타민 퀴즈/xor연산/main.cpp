#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//������ �ڵ�� temp��� ������ ����ؼ� a�� b�� ���� �ٲٰ� �ִ�. �� 3�� ������ ������� �ʰ� ���� a,b�� ����ؼ� a,b�� ���� �ٲ㺸��(��Ʈ ��Ʈ���� xor ������ ���)
	//int a,b,temp;
	//a=3;
	//b=5;
	//a�� b�� ���� �ٲ۴�.
	//temp = a;
	//a = b;
	//b = temp;
	
	int a = 3,b = 5;
	
	a = a^b;//6
	
	b = a/2;//3
	
	a = a^b;//5
	
	
	//�̰� �³� �ʹ� ���� ��û�Ѱ��� ������ �̻��Ѱ��� 
	cout << "a�� ��" a << "b�� ��"<<b;	
	
	return 0;
}
