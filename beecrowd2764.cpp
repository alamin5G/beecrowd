/**
 * @file beecrowd2764.cpp
 * see the problem - 
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int d, m, y;
    scanf("%d/%d/%d",&d, &m, &y);

    if(m<10){
        cout << "0" << m << "/";
    }else{
        cout << m << "/";
    }
    if(d<10){
        cout << "0" << d << "/";
    }else{
        cout << d << "/";
    }
    if(y<10){
        cout << "0" << y << endl;
    }else{
        cout << y << endl;
    }

    if(y<10){
        cout << "0" << y << "/";
    }else{
        cout << y << "/";
    }
    if(m<10){
        cout << "0" << m << "/";
    }else{
        cout << m << "/";
    }
    if(d<10){
        cout << "0" << d << endl;
    }else{
        cout << d << endl;
    }

    if(d<10){
        cout << "0" << d << "-";
    }else{
        cout << d << "-";
    }
    if(m<10){
        cout << "0" << m << "-";
    }else{
        cout << m << "-";
    }
    if(y<10){
        cout << "0" << y << endl;
    }else{
        cout << y << endl;
    }
    

    return 0;
}