#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int age;//���� 
	int rate;//�Ƿ� ���� 
	bool baduser;//�ҷ������ ���� 
	
	age=13;//���̴� 13 
	rate=1401;//�Ƿ� ������ 1401 
	baduser = false;//�ҷ� ����ڴ� �ƴ� 
	
	
	bool ok;//���� �������� ���� 
	ok = (age>=12)&&(rate>=1400&&rate<=1800)&&(baduser==!true);// ���̴� �����졡�̻󡡽Ƿ¡������¡����������̻󡡣����������ϡ��ҷ�����ڴ¡��ƴϿ����� 
	
	cout <<"1�̸� ���� ���� 0�̸� ����Ұ�=" <<"\t" <<ok;
	
	return 0;
}
