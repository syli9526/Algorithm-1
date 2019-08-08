//
//  main.cpp
//  BJ14501
//
//  Created by 소율 on 08/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define MAX 1<<4

using namespace std;
int N, info[MAX][2], dp[MAX];

int main() {
    
    scanf("%d",&N);
    
    for (int i = 0 ; i < N; i++) scanf("%d %d",&info[i][0], &info[i][1]);
    
    for (int i = N-1; i >=0 ; i--) {
        if(info[i][0] + i > N) continue;
        int j = info[i][0] + i;
        while(j <= N) dp[i] = max(dp[i], info[i][1] + dp[j++]);
    }
    printf("%d",*max_element(dp, dp+N));
    
}
