#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// if,else if,else ����� ����ؼ� ������ ���� a~f�� ������ ����ϴ� ���α׷��� �ۼ�����. ������ ������ ������ ����
	//91~100 a,81~90 b,71~80 c,61~70 d,0~60 f
	
	int score;
	
	score = 100;
	
	if(91<=score<=100){
		cout <<"a ���� �Դϴ�";
	}else if(81<=score<=90){
		cout <<"b ���� �Դϴ�";
	}else if(71<=score<=80){
		cout <<"c ���� �Դϴ�";
	}else if(61<=score<=70){
		cout <<"d ���� �Դϴ�";
	}else{
		cout <<"f���� �Դϴ�";
	}
	
	 
	return 0;
}
