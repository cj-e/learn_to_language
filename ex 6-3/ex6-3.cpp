#include <iostream>
#include <bitset>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//��ǻ�Ͱ� �Ǿ��
	//'������ �κ��� �� �ٲٱ�' ������ �����غ��� �Ѵ�. ���������� ��ǻ�Ͱ� �ʿ��� ��Ʈ ���� ������ ��� ���־����� �̹����� ���� ����� ����غ���
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
