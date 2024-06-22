/**
 * @file beecrowd2157.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/2157
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        string s, st;
        for(auto i=a; i<=b; i++){
            cout << i;
            s = to_string(i);
            st += s;
        }
        reverse(st.begin(), st.end());
        for(auto v : st){
            cout << v;
        }
        cout << endl;
    }
    return 0;
}