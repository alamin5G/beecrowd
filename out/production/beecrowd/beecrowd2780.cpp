/**
 * @file beecrowd2780.cpp
 * see the problem - https://prnt.sc/n42of8FJt2n9
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int d;
    cin>> d;
    if(d<= 800) {
        cout << "1" << endl;
    }else if(800<d && d<=1400){
        cout << "2" << endl;
    }else if(1400<d && d<=2000){
        cout << "3" << endl;
    }

    return 0;
}