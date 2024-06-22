/**
 * @file beecrowd2987.cpp
 * see the problem - https://prnt.sc/4H2Mjz2T5PQf
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
    char c;
    cin >> c;

    string st = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int len = st.size();
    for(auto i=0; i<len; i++){
        if(c==st[i]){
            cout << i+1 << endl;
        }
    }

    return 0;
}