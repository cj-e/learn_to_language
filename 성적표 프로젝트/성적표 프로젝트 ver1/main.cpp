#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int S1_No, S2_No, S3_No;           //�й� 
		int S1_Kor, S2_Kor, S3_Kor;        //���� ���� 
		int S1_Math, S2_Math, S3_Math;     //���� ���� 
		int S1_Eng, S2_Eng, S3_Eng;        //���� ���� 
		float S1_ave, S2_Ave, S3_Ave;      //���� ��� 
		float Total_Ave = 0.0f;            //��ü ��� 
		int NumberOfstudent = 0;           //������� �Էµ� �л��� 
	//while �ݺ������� ���� �����ؼ� ��� �޴��� �����ش�
		while(true){
			//�޴� �����ֱ� 
			cout << "\n-----�޴�-----\n";
			cout << "1. �л� ���� �߰�\n";
			cout << "2. ��ü ���� ����\n";
			cout << "Q. ���α׷� ���� \n";
			cout << "----------------\n\n";
			cout << "���ϴ� �۾��� ��ȣ�� �Է��ϼ��� :";
			
			//�۾��Է� �ޱ�
			char select;
			cin >> select;
			
			
			//���õ� ���� ���� ó��
			switch(select){
				case '1':
				//�л� ���� �߰� 
					cout << "\n�л� ���� �߰��� ���õǾ����ϴ�.\n";
					break;
				// ��ü ���� ���� 
				case '2':
					cout << "\n��ü ���� ���Ⱑ ���õǾ����ϴ�\n";
					break;
				case 'q':
				//����
					cout << "\n���α׷��� �����մϴ�\n";
					return 0;
				default:
				//�� ���� ����
					cout << "\n�ùٸ� ���� �Է����ּ���";
					break; 
			} 
		}
}
