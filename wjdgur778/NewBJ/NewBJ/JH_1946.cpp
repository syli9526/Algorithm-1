#include<iostream>
#include<algorithm>
using namespace std;

//���� ���
//�׸��� �˰���
//�ð� ���⵵ ����
int n;
int m;

int solution() {
	bool flag = false;
	int ans = 0;
	int tmp;
	cin >> m;
	pair <int, int> *grade = new pair <int, int>[m];


	for (int i = 0; i < m; i++) {
		cin >> grade[i].first >> grade[i].second;
	}
	sort(grade, grade + m);

	tmp = grade[0].second;
	//������ �ּڰ����� �ּ��̸� �հ�
	//���������̱⶧����(���� ������ ��������) ������ ������ ������� ���ʿ� ����
	//��������� �����ڵ� �� ���� ������ �ߺ��� �ȴ�.
	for (int i = 1; i < m; i++) {
		if (tmp > grade[i].second) {
			tmp = grade[i].second;
			ans++;
		}
	}


	return  ans + 1;
}

int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << solution()<<endl;

	}

	return 0;

}
