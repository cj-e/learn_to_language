#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int S1_No, S2_No, S3_No;           //학번 
		int S1_Kor, S2_Kor, S3_Kor;        //국어 점수 
		int S1_Math, S2_Math, S3_Math;     //수학 점수 
		int S1_Eng, S2_Eng, S3_Eng;        //영어 점수 
		float S1_ave, S2_Ave, S3_Ave;      //개인 평균 
		float Total_Ave = 0.0f;            //전체 평균 
		int NumberOfstudent = 0;           //현재까지 입력된 학생수 
	//while 반복문으로 무한 루프해서 계속 메뉴를 보여준다
		while(true){
			//메뉴 보여주기 
			cout << "\n-----메뉴-----\n";
			cout << "1. 학생 성적 추가\n";
			cout << "2. 전체 성적 보기\n";
			cout << "Q. 프로그램 종료 \n";
			cout << "----------------\n\n";
			cout << "원하는 작업의 번호를 입력하세요 :";
			
			//작업입력 받기
			char select;
			cin >> select;
			
			
			//선택된 값에 따라서 처리
			switch(select){
				case '1':
				//학생 성적 추가 
					cout << "\n학생 성적 추가가 선택되었습니다.\n";
					break;
				// 전체 성적 보기 
				case '2':
					cout << "\n전체 성적 보기가 선택되었습니다\n";
					break;
				case 'q':
				//종료
					cout << "\n프로그램을 종료합니다\n";
					return 0;
				default:
				//그 외의 선택
					cout << "\n올바른 값을 입력해주세요";
					break; 
			} 
		}
}
