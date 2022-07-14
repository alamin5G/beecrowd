/**
 * @file beecrowd2787.cpp
 * see the problem - https://prnt.sc/4F1KtLme-1H-
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, c;
    cin >> l >> c;
    if(l%2==0 && c%2==0){
        cout << "1" << endl;
    }else if(l%2 != 0 && c%2 != 0){
        cout << "1" << endl;
    }else if(l%2==0 && c%2!=0){
        cout << "0" << endl;
    }else if(l%2 !=0 && c%2==0){
        cout << "0" << endl;
    }
    return 0;
}