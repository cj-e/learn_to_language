#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int result[9][9];
	
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			
			result[i-1][j-1]=(i)*(j);
			cout <<"\n"<<i<<"*"<<j<<"="<<result[i-1][j-1];
		}
	}
	
	return 0;
}
