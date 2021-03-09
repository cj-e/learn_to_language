#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct key{
	char k;
	
};

int main(int argc, char** argv) {
	key input;
	input.k = 0;
	for(int i=0;i==0;){
		if(input.k==0){
		
		cout << "input = ";
		
		cin >> input.k;
		
		cout << "output = " << input.k<<"\n";
		
		if(input.k=='k'){
			break;
		}
			
		
		
		input.k = 0;
		

		
		}

		
	}
	
	
	return 0;
}
