/**
 * @file beecrowd2763.cpp
 * CPF Input and Output
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    string in;
    cin >> in;
    for(auto i=0; i<=in.length(); i++){
        if (in[i]>=48 && in[i]<=57)
        {
            cout << in[i];
        }else{
            cout << endl;
        }
        
    }
    return 0;
}