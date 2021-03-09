#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	// if,else if,else 명령을 사용해서 점수의 따라 a~f의 성적을 출력하는 프로그램을 작성하자. 점수의 기준은 다음과 같다
	//91~100 a,81~90 b,71~80 c,61~70 d,0~60 f
	
	int score;
	
	score = 100;
	
	if(91<=score<=100){
		cout <<"a 학점 입니다";
	}else if(81<=score<=90){
		cout <<"b 학점 입니다";
	}else if(71<=score<=80){
		cout <<"c 학점 입니다";
	}else if(61<=score<=70){
		cout <<"d 학점 입니다";
	}else{
		cout <<"f학점 입니다";
	}
	
	 
	return 0;
}
