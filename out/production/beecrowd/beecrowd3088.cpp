/**
 * @file beecrowd3088.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/3088
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin, s)){
        for(auto i=0; i<s.size(); i++){
            if((s[i-1] == ' ' && s[i]==',') || (s[i-1]==' ' && s[i]=='.')){
                s.erase(s.begin()+i-1);
            }
        }
        cout << s << endl;
        
    }
    return 0;
}