/**
 * @file beecrowd2523.cpp
 * see the problem - https://prnt.sc/FPWL1uIUV1D-
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    while(cin >> s >> n){
        
        int len = s.size();
        int l[n], t[len];
        for(auto i=0; i<len; i++){
            if(s[i]>='A' && s[i]<='Z'){
                t[i] = i+1;
            }
        }
       
        for(auto i=0; i<n; i++){
            cin >> l[i];

        }

        for(auto i = 0; i<n; i++){
            for(auto j = 0; j<len; j++){
                if(l[i]==t[j]){
                    cout << s[j];
                }
            }
        }
        cout  << endl;
    }

    return  0;
}