#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a=1,b=2,c;
	
	c=a>b?a:b;// a>b라는 조건을 시행한후 true이면 : 왼쪽의 있는값을 c에 false 이면 오른쪽의 있는값을 c에 
	
	cout <<c;
	
	c=a>b?b:a;
	
	cout <<c;
	
	c=b>a?a:b;
	
	cout <<c;
	
	return 0;
}
