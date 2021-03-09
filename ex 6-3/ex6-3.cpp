#include <iostream>
#include <bitset>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//컴퓨터가 되어보자
	//'빨간색 부분의 값 바꾸기' 예제를 복습해보려 한다. 조금전에는 컴퓨터가 필요한 비트 단위 연산을 모두 해주었지만 이번에는 직접 적어가며 계산해보자
	/*color=ox1234 0001001000110100
	 temp = ox07ff 0000011111111111
	 color_temp = color & temp 0000001000110100
	 red=0000000000011110
	 red_temp =1111000000000000
	 color_finished=color_temp|red_temp=1111001000110100
 
	 */
	unsigned short color = 0x1234;
	
	unsigned short temp = 0x07ff;
	
	cout << "color= "<<bitset<16>(color) << "temp=" <<bitset<16>(temp) << "red="<<bitset<16>(30);
	 
	return 0;
}
