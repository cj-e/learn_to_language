#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//switch/case ����� ����ؼ� ���� ���� �ȳ� ������ ����ϴ� ���α׷��� �ۼ�����. ������ �ȳ� ������  ������ ����
// a:�����߾��,b:���߾��c��d:�й��ϼ���,f:���� 
int main(int argc, char** argv) {
	char score;
	
	score = 'c';
	
	switch(score){
		case 97:
			cout <<"�����߾��";
			break;
		case 'b':
			cout <<"���߾��";
			break;
		case 'c':
		case 'd':
			cout <<"�й��ϼ���";
			break;
		case 'f':
			cout <<"����";
			break; 
	
	}
	
	return 0;
}
