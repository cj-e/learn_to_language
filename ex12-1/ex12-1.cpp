#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//배열과 포인터 정의
	 
	long lArray[20];
	long (*p)[20]=&lArray;
	
	
	
	//반복문을 통하여 *p즉lArray값을 출력
	for(int i=0;i<20;i++){
		cout << (*p)[i]<<"==="<<lArray[i]<<"\n";

	}
	cout <<"\n";//실험 
	for(int i=0;i<20;i++){
		cout <<"\n" <<p[i]<<"==="<<&lArray[i];
	}
	return 0;
}
