#include <iostream>
#include<string>
using namespace std;

//�Ҿ���� ��ȣ
//�Է��ϴ� �����??
//�׸��� �˰���
//ó���� '-'�� ���� �� ������ ������ ������ ���ָ� �ּڰ�

string calc="";

int solution() {
	bool flag=false;
	int result = 0;
	string tmp;
	for (int i = 0; i <= calc.size(); i++) {

		//���ڸ� tmp�� ��Ƴ��� ������ ���� �����ڸ� ���� ����� ������
		//'\0'���� Ȯ���Ͽ� �������� ���� ������ ���ش�,���� ���������� �������� �ִ� ���ڰ� ������ �ȵ�

		if (calc[i] == '+' || calc[i] == '-'||calc[i]=='\0') {

			if (flag) {
				result -= stoi(tmp);
				tmp = "";
			}
			else {
				result += stoi(tmp);
				tmp = "";
			}
			if (calc[i] == '-')
				flag = true;
		}
		//�������̸�

		else
			tmp += calc[i];
		//�����ڰ� �ƴϸ�
		
	}


	return result;
}

int main() {

	cin >> calc;
	cout << solution();




	return 0;
}