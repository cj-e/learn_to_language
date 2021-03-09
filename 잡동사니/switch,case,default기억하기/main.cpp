#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//switch/case문의 default를 기억하기 위해 간단한 코드 작성
	
	int a;
	int b;
	int c;
	int d;
	
	a=3;//default 블럭 아래까지 돌아야 하기에 3을줌  
	b=3; 
	c=1;
	d=0;
	
	switch(a){
		case 0:{
			cout << "a0끝""\n";
			break;
		}
		case 1:{
			cout << "a1끝""\n";
			break;
		}
		case 2:{
			cout << "a2끝""\n";
			break;
		}
		default:
			cout << "ad끝""\n";
	}
	switch(b){
		case 0:{
			cout << "b0끝""\n";
			break;
		}
		case 1:{
			cout << "b1끝""\n";
			break;
		}
		default:
			cout << "bd끝""\n";//default블럭 역시 다른 case블럭 처럼 break가 없으면 아래 case도 작동시켜 버린다 
		case 2:{
			cout << "b2끝""\n";
			break;
		}
	}
		switch(c){
		case 0:{
			cout << "c0끝""\n";
			break;
		}
		case 1:{
			cout << "c1끝""\n";
		}
		default:
			cout << "cd끝""\n";
		case 2:{
			cout << "c2끝""\n";//break가 없으면 break가 있는곳 까지 작동시키고 빠져나온다 
			break;
		}
		case 3:{
			cout << "c3끝""\n";
			break;
		}

	}
	switch(d){
		case 0:
		case 1:{
			cout << "d0d1끝""\n";//d가0,1인경우 모두 이문장을 출력한다 
			break;
		}
		case 2:{
			cout << "a2끝""\n";
			break;
		}
		default:
			cout << "ad끝""\n";
	}
	
	
	 
	return 0;
}
