/**
 * @file beecrowd3299.cpp
 * see the problem - https://prnt.sc/NT4wpsmz3l_B
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    long long int len = 0, flag=0;
    len = s.size();
    for(auto i = 1; i<len; i++){
        if(s[i]=='3' && s[i-1]=='1'){
            flag++;
            break;
        }
    }
    if(flag==1){
        cout << s << " es de Mala Suerte" << endl;
    }else{
        cout << s << " NO es de Mala Suerte" << endl;
    }
    return 0;
}