/**
 * @file beecrowd2702.cpp
 * see the problem - https://prnt.sc/tE9u49-MQnbb
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int p, q, r;
    cin >> p >> q >> r;
    int sum = 0;

    if(a<p){
        sum = p-a;
    }

    if(b < q){
        sum = sum + q-b;
    }

    if(c < r){
        sum += r-c;
    }

    cout << sum << endl;
}