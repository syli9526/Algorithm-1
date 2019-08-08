//
//  main.cpp
//  BJ2096
//
//  Created by 소율 on 08/08/2019.
//  Copyright © 2019 소율. All rights reserved.
//
#include <iostream>
#include <algorithm>

using namespace std;
int N,a,b,c, max_value[2][3],min_value[2][3];

int main(){
    
    scanf("%d",&N);
    
    for (int i = 1; i <= N; i++) {
        
        scanf("%d %d %d",&a,&b,&c);
        
        int curr = i % 2; //현재 줄
        int prev = (i - 1) % 2; //전 줄
        
        //최고 점수 찾기
        max_value[curr][0] = max(max_value[prev][0], max_value[prev][1]) + a;
        max_value[curr][1] = max(max(max_value[prev][0], max_value[prev][1]), max_value[prev][2]) + b;
        max_value[curr][2] = max(max_value[prev][1], max_value[prev][2]) + c;
        
        //최저 점수 찾기
        min_value[curr][0] = min(min_value[prev][0], min_value[prev][1]) + a;
        min_value[curr][1] = min(min(min_value[prev][0], min_value[prev][1]), min_value[prev][2]) +b;
        min_value[curr][2] = min(min_value[prev][1], min_value[prev][2]) + c;
    }
    
    printf("%d %d", *max_element(max_value[N % 2], max_value[N % 2] + 3), *min_element(min_value[N % 2], min_value[N % 2] + 3));
    
    return 0;
    
}
