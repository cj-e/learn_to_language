#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//다음의 코드는 temp라는 변수를 사용해서 a와 b의 값을 바꾸고 있다. 제 3의 변수를 사용하지 않고 오직 a,b만 사용해서 a,b의 값을 바꿔보자(힌트 비트단위 xor 연산을 사용)
	//int a,b,temp;
	//a=3;
	//b=5;
	//a와 b의 값을 바꾼다.
	//temp = a;
	//a = b;
	//b = temp;
	
	int a = 3,b = 5;
	
	a = a^b;//6
	
	b = a/2;//3
	
	a = a^b;//5
	
	
	//이게 맞나 싶다 내가 멍청한건지 문제가 이상한건지 
	cout << "a의 값" a << "b의 값"<<b;	
	
	return 0;
}
