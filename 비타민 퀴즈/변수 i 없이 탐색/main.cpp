#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//���� i�� ������� �ʰ� ������ p�� ����ؼ� �迭�� Ž���� �� �ְ� �����ش޶�� ��û�� ���Դ�. ���� ����(12-5)�� �����ؼ� �迭�� ��� ������ ����
//����ϴ� ���α׷��� �ۼ��غ���. �迭 nArray�� ������p �ܿ� �� � ������ �����ؼ��� �� �ȴ�. 
int main(int argc, char** argv) {
	
	//�迭�� �����͸� ���� 
	int nArray[10];
	int* p;
	
	p = &nArray[0];
	
	// do while������ nArray[0]�� ���� ������ ���   

	while(true){// ���ѷ����� �������� nArray�� Ž�� 
		
		cout << *p<<"\n";
		
		p=p+1;
		
		
		if(p==&nArray[9]){//p�� ���� nArray[9]�� �ּҰ��� �Ǹ� Ż��  nArray[9]���� ����ϰ� Ż��
			cout << *p; 
			break;
		}
	}
	
	return 0;
}
