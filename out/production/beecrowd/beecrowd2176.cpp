/**
 * @file beecrowd2176.cpp
 * Parity - 
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
    string s;
    int count=0, even;
    cin >> s;
    for (auto i = 0; i < s.length(); i++)
    {
        if(s[i] == '1'){
            count++;
        }
    }
    
    if(count%2 != 0){
        cout << s << "1" << endl;
    }else{
        cout << s << "0" << endl;
    }
    return 0;
}