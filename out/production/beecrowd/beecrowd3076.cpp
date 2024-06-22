/**
 * @file beecrowd3076.cpp
 * see the problem - https://prnt.sc/4fENAvkzVpZn
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        double d = (double)n/100;
        int p = d;
        if(p==0){
            cout << "1" << endl;
        }else if(p<d){
            cout << p+1 << endl;
        }else{
            cout << p << endl;
        }
    }

    return 0;
}