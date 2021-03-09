#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//switch/case 명령을 사용해서 학점 별로 안내 문구를 출력하는 프로그램을 작성하자. 학점별 안내 문구는  다음과 같다
// a:참잘했어요,b:잘했어요c와d:분발하세요,f:쯧쯧 
int main(int argc, char** argv) {
	char score;
	
	score = 'c';
	
	switch(score){
		case 97:
			cout <<"참잘했어요";
			break;
		case 'b':
			cout <<"잘했어요";
			break;
		case 'c':
		case 'd':
			cout <<"분발하세요";
			break;
		case 'f':
			cout <<"쯧쯧";
			break; 
	
	}
	
	return 0;
}
