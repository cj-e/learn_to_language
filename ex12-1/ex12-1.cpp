#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//�迭�� ������ ����
	 
	long lArray[20];
	long (*p)[20]=&lArray;
	
	
	
	//�ݺ����� ���Ͽ� *p��lArray���� ���
	for(int i=0;i<20;i++){
		cout << (*p)[i]<<"==="<<lArray[i]<<"\n";

	}
	cout <<"\n";//���� 
	for(int i=0;i<20;i++){
		cout <<"\n" <<p[i]<<"==="<<&lArray[i];
	}
	return 0;
}
