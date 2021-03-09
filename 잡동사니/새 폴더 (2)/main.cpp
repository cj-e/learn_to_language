#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a=10;
	
	int   *  const ap = &a;
	

		
	*ap = 20;
	
	cout << *ap;
	
	return 0;
}
