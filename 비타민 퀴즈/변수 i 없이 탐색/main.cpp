#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//정수 i를 사용하지 않고 포인터 p만 사용해서 배열을 탐색할 수 있게 수정해달라는 요청이 들어왔다. 앞의 예제(12-5)를 수정해서 배열의 모든 원소의 값을
//출력하는 프로그램을 작성해보자. 배열 nArray와 포인터p 외에 그 어떤 변수를 정의해서도 안 된다. 
int main(int argc, char** argv) {
	
	//배열과 포인터를 정의 
	int nArray[10];
	int* p;
	
	p = &nArray[0];
	
	// do while문으로 nArray[0]의 값을 무조건 출력   

	while(true){// 무한루프의 빠지게해 nArray를 탐색 
		
		cout << *p<<"\n";
		
		p=p+1;
		
		
		if(p==&nArray[9]){//p의 값이 nArray[9]의 주소값이 되면 탈출  nArray[9]값을 출력하고 탈출
			cout << *p; 
			break;
		}
	}
	
	return 0;
}
