/**
 * @file beecrowd2160.cpp
 * see the problem -
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    string st;
    getline(cin, st);
    int len = st.size();
    if(len>80){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
    return 0;
}