#include <iostream>
using namespace std;

//��ȸ of ����
//������ �����ϴ� ���� ����� ���Ѵ�

int solution(int n, int m, int k) {

	int ans;
	int tmp;
	for (int i = 0; i < 100; i++) {

		if (n >= 2 * i&&m >= i) {
			tmp = (n + m - k) / 3;
			if (tmp >= i) {
				ans = i;
			}

		}
	}
	return ans;

}

int main() {

	int n;//���� ��
	int m;//���� ��
	int k;//���� �� 
	cin >> n >> m >> k;
	cout << solution(n, m, k);

	return 0;
}
