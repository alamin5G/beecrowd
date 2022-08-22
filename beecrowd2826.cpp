/**
 * @file beecrowd2826.cpp
 * see the problem - https://prnt.sc/W394Cd2YU9qr
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    if(a<b){
        cout << a << endl;
        cout << b << endl;
    }else{
        cout << b << endl; 
        cout << a << endl;
    }
    return 0;
}