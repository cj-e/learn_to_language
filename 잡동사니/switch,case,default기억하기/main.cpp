#include <iostream>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//switch/case���� default�� ����ϱ� ���� ������ �ڵ� �ۼ�
	
	int a;
	int b;
	int c;
	int d;
	
	a=3;//default �� �Ʒ����� ���ƾ� �ϱ⿡ 3����  
	b=3; 
	c=1;
	d=0;
	
	switch(a){
		case 0:{
			cout << "a0��""\n";
			break;
		}
		case 1:{
			cout << "a1��""\n";
			break;
		}
		case 2:{
			cout << "a2��""\n";
			break;
		}
		default:
			cout << "ad��""\n";
	}
	switch(b){
		case 0:{
			cout << "b0��""\n";
			break;
		}
		case 1:{
			cout << "b1��""\n";
			break;
		}
		default:
			cout << "bd��""\n";//default�� ���� �ٸ� case�� ó�� break�� ������ �Ʒ� case�� �۵����� ������ 
		case 2:{
			cout << "b2��""\n";
			break;
		}
	}
		switch(c){
		case 0:{
			cout << "c0��""\n";
			break;
		}
		case 1:{
			cout << "c1��""\n";
		}
		default:
			cout << "cd��""\n";
		case 2:{
			cout << "c2��""\n";//break�� ������ break�� �ִ°� ���� �۵���Ű�� �������´� 
			break;
		}
		case 3:{
			cout << "c3��""\n";
			break;
		}

	}
	switch(d){
		case 0:
		case 1:{
			cout << "d0d1��""\n";//d��0,1�ΰ�� ��� �̹����� ����Ѵ� 
			break;
		}
		case 2:{
			cout << "a2��""\n";
			break;
		}
		default:
			cout << "ad��""\n";
	}
	
	
	 
	return 0;
}
