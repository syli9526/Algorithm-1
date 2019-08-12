#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//���� �ﰢ��
//dynamic programming

vector<vector<int>> triangle;
vector<vector<int>> dp;

int n;

void solution() {
	
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < triangle[i].size(); j++) {

			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + triangle[i + 1][j]);
			dp[i + 1][j+1] = max(dp[i + 1][j+1], dp[i][j] + triangle[i + 1][j+1]);
		}
	}//dp��� ���͸� �� ���� �޸������̼��� �ϸ鼭 �ִ��� ���Ѵ�.

	sort(dp[n - 1].begin(), dp[n - 1].end());//�ִ��� ����ִ� �������ٿ��� �ִ밪�� ã������ ��Ʈ
	cout << dp[n - 1][n - 1];//�ִ� ���
}

int main() {
	int a;
	cin >> n;
	triangle = vector<vector<int>>(n);
	dp = vector<vector<int>>(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i+1; j++) {
			cin >> a;
			triangle[i].push_back(a);
			dp[i].push_back(a);
		}
	}//�Է�
	solution();
	
	return 0;
}