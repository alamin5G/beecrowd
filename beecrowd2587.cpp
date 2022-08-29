/**
 * @file beecrowd2587.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/2587
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-28
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
        string a, b, c;
        vector<char> va;
        vector<char> vb;
        cin >> a >>b >>c;

        for(auto i=0; i<c.size(); i++){
            if(c[i]=='_'){
                va.push_back(a[i]);
                vb.push_back(b[i]);
            }
        }
        if(va[0] == vb[1] || va[1]==vb[0]){
            cout << "Y" <<endl;
        }else{
            cout << "N" << endl;
        }
    }

    return 0;
}