#include <iostream>
using namespace std;
//포인터가 할수있는 기능을 다써보고 포인터와 친해지자 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	// 변수를 선언한다 
	char c = 'B';
	int i=19;
	float f = 4.5f;
	
	//주소를 출력한다 
	cout<<"c의 주소 =" <<(int*)&c << "\n";//아래처럼 쓰면 오류가 나기에 int*타입으로 형변환 한다 
	//cout<<"c의 주소 =" << &c << "\n"; cout객체가 제대로 주소값을 출력하지 않는다 
	cout<<"i의 주소 =" << &i << "\n";
	cout<<"f의 주소 =" << &f << "\n";
	
	
	//포인터 변수 ip를 정의 하고 i 의 주소값을 넣는다 
	int *ip;
	ip = &i;
	
	//i의 주소값과 ip의 값 ip의 주소값을 출력해 비교해보자 
	cout<<"&i = "<<&i <<"\n";
	cout<<"ip = " << ip <<"\n";
	cout<<"&ip = "<<&ip <<"\n"; 
	
	//ip = &c; ip는 int 타입만 가르킬수있는 포인터이다 char타입을 가르키고 싶으면 char*로 char를가르킬수
	//있는 포인터를 정의 해야 한다
	
	char* pc;// 타입* 이름 타입 *이름 둘다 상관 없다 
	float *pf; 
	
	void *vp;//어떤 타입이든 가르킬수 있는 포인터이다 하지만 무슨 타입의 무슨값을 가르키고 있는지 알수없어
	//흔히 주소를 저장하는 용도로만 사용된다
	*ip = 100;//*ip는 ip가 가르키는 변수라는 의미가 된다 즉 i = 100과 같다
	cout << "*ip =" <<*ip<<"\n";
	cout << "i ="   << i <<"\n";
	
	//포인터의 동작방식 이해 
	i = 0x12345678;
	pc = (char*)&i;
	
	cout << hex;//cout이 16진수로 표기하게끔해줌 
	cout << "*pc = " << (int) *pc << "\n";//출력되는값 78 이는 빅 엔디안과 리틀 엔디안과 관련있다
	
	//int *p; 
	// *p =128  포인터 역시 변수이기에 선언 하면 쓰레기 값을 가지고 있다 즉 어디를 가르키는지 모르는거다
	//이상태로 값을 바꿔버리면 무슨일이 일어날지 모르기에 포인터를 선언 하면 0으로 초기화 하자
	
	int *p=0;
	
	if (0 != p)
		*p = 30;
	
	i=100;
	
	p=&i;
	
	if(p)
		*p=30;
		
	return 0;
}
