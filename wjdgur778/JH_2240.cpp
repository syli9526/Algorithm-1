#include<iostream>
#include<algorithm>
using namespace std;
//�ڵγ��� 
//�����~~~~~~~~~~~~~~~~
//dynamic programming

int t;
int w;

int tree[1001];
int dp[1001][32] = { 0, };//[��ġ][�����ϼ��ִ� Ƚ��]
int ans = 0;
int solution() {

	for (int i = 1; i <= t; i++) {
		for (int j = 0; j <= w; j++) {

			if (tree[i] == 1) {
				if (j % 2 == 0) {//w�� ¦�� �϶� (����ġ 1)
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j + 1]) + 1;
				}
				else {//w�� Ȧ���϶� (����ġ 2)
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j + 1]);
				}
			}
			else if (tree[i] == 2) {
				if (j % 2 == 0) {//w�� ¦�� �϶� (����ġ 1)
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j + 1]);
				}
				else {//w�� Ȧ���϶� (����ġ 2)
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j + 1]) + 1;
				}
			}
		}
	}//�ڵγ����� 1 �϶�, ������ �ִ°�� +1 Ȥ�� �����̰� +0
	 //�ڵγ����� 2 �϶�, ������ �ִ°�� +0 Ȥ�� �����̰� +1

	for (int i = 0; i <= w; i++) {
		ans = max(ans, dp[t][i]);
	}
	return 0;
}



int main()
{
	cin >> t;
	cin >> w;
	for (int i = 1; i <= t; i++) {
		cin >> tree[i];
	}
	solution();
	cout << ans;

	return 0;
}