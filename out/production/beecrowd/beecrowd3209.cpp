/**
 * @file beecrowd3209.cpp
 * see the problem - https://prnt.sc/q5GUdzZ6f8-H
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, temp;
    cin>> t;
    while(t--){
        int n, sum=0;
        cin >> n;
        int a[n];
        for(auto i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
            temp = i;
        }
        cout << sum-temp << endl;
    }
    return 0;
}