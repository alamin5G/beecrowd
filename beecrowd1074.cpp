/**
 * @file beecrowd1074.cpp
 * see the problem - https://prnt.sc/hOMrJe_fm2yT
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-30
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
        int n;
        cin >> n;
        if(n%2==0 && n<0){
            cout << "EVEN NEGATIVE" << endl;
        }else if(n%2==0 && n>0){
            cout << "EVEN POSITIVE" << endl;
        }else if(n%2!=0 && n<0){
            cout << "ODD NEGATIVE" << endl;
        }else if(n%2!=0 && n>0){
            cout << "ODD POSITIVE" << endl;
        }else if(n==0){
            cout << "NULL" << endl;
        }
    }
    return 0;
}