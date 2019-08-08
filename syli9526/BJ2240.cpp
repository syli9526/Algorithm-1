//
//  main.cpp
//  BJ2240
//
//  Created by 소율 on 08/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define COUNT 1<<10
#define MOVE 1<<5

using namespace std;
int t,w,tree[COUNT], dp[MOVE],pos,idx;

int main() {
    
    scanf("%d %d",&t,&w);
    
    for (int i = 1; i<=t; i++) {
    
        scanf("%d",&pos);
        idx = i > w  ? w + 1 : i + 1 ;
        for (int j = idx; j > 0; j--) {
            if(pos == 1){
                if(j % 2 == 1)dp[j] = max(dp[j-1] + 1, dp[j] + 1);
                else dp[j] = max(dp[j-1], dp[j]);
            }else {
                if(j % 2 == 0)dp[j] = max(dp[j-1] + 1, dp[j]+1);
                else dp[j] = max(dp[j-1], dp[j]);
            }
        }
    }
    
     printf("%d",*max_element(dp, dp+w+2));
    
}
