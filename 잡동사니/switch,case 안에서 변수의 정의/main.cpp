#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//switch/case�� �Է����� ���� ���� 
	char c = 'B';
	
	/*switch(c){
		case 'A':
			char b = c;//�̷��� �ɰ�� ������ ���� 
			break;
		case 'B':
			char d = b;
			break;
	}*/ 
	switch(c){
		case 'A':{
			char b = c;
			break;
		}
		case 'B':
			char d = b;//������ ������ ������ ������ �ٲ���� 
			break;
	}
	
	return 0;
}
