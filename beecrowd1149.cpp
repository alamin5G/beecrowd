/**
 * @file beecrowd1149.cpp
 * Summing Consecutive Integers - see the problems https://prnt.sc/GyxgfV6g6Ub8
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    int i, a, n;
    cin >> a >> n;
    int sum = a;
    while(n<=0){
        cin >> n;
    }
        for(i=1; i<=n-1; i++){
            sum = sum + (a+i);
        }
        

    cout << sum << endl;

    return 0;
}