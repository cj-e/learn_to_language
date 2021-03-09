#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//switch/case의 입력으로 쓰일 변수 
	char c = 'B';
	
	/*switch(c){
		case 'A':
			char b = c;//이렇게 될경우 오류가 난다 
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
			char d = b;//오류는 여전히 나지만 종류가 바뀌었다 
			break;
	}
	
	return 0;
}
