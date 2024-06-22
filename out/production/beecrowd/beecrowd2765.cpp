/**
 * @file beecrowd2765.cpp
 * see the problem - https://prnt.sc/OIDdjSqG6MaF
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    getline(cin, st);

    for(auto i=0; i<st.size();i++){
        if(st[i] == ','){
            cout << endl;
        }else{
            cout << st[i];
        }
    }
    cout << endl;
    return 0;
}