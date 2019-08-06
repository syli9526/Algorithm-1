//
//  main.cpp
//  BJ1932
//
//  Created by 소율 on 06/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define MAX 1<<9

using namespace std;
int dp[MAX], n;

int main() {
    
    scanf("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = i,val; j>=1; j--) {
            scanf("%d",&val);
            dp[j] = max(val+dp[j], val+dp[j-1]);
        }
    }
    printf("%d",*max_element(dp, dp+n));
}
