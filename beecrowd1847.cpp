/**
 * @file beecrowd1847.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/1847
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b && b<=c){
        cout << ":)" << endl;
    }else if(a<b & b>=c){
        cout << ":(" << endl;
    } else if(a<b && b<c){
        if((b-a) > c-b){
            cout << ":(" << endl;
        }else{
            cout << ":)" << endl;
        }
    } else if(a>b && b>c){
        if(a-b> b-c){
            cout << ":)" << endl;
        }else{
            cout << ":(" << endl;
        }
        
    }else if(a==b){
        if(b<c){
            cout << ":)" << endl;
        }else {
            cout << ":(" << endl;
        }
    }
    return 0;
}