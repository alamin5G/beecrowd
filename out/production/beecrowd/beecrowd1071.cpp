/**
 * @file beecrowd1071.cpp
 * see the problem - https://prnt.sc/jcKkAe2MZljg
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a>b){
        a = a +b;
        b = a - b;
        a = a - b;
    }
    int sum = 0;
    for (auto i = a+1; i < b; i++)
    {
        if(i%2!=0){
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}