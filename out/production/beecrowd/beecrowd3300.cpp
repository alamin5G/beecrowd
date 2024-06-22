/**
 * @file beecrowd3300.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/3300
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool lucky = true;
    for(auto i=0; i<s.size()-1; i++){
        if(s[i] == '1' && s[i+1]=='3'){
            lucky = false;
            break;
        }

    }
    if(!lucky){
        cout << s << " es de Mala Suerte" <<endl;
    }else{
        cout << s << " NO es de Mala Suerte" <<endl;
    }
    return 0;
}