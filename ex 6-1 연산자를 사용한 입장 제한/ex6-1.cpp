#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int age;//나이 
	int rate;//실력 점수 
	bool baduser;//불량사용자 여부 
	
	age=13;//나이는 13 
	rate=1401;//실력 점수는 1401 
	baduser = false;//불량 사용자는 아님 
	
	
	bool ok;//입장 가능한지 여부 
	ok = (age>=12)&&(rate>=1400&&rate<=1800)&&(baduser==!true);// 나이는 １２살　이상　실력　점수는　１４００이상　１８００이하　불량사용자는　아니여야함 
	
	cout <<"1이면 입장 가능 0이면 입장불가=" <<"\t" <<ok;
	
	return 0;
}
