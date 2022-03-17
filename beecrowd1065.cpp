/**
 * @file beecrowd1065.cpp
 * Even Between five Numbers - see the problems: https://prnt.sc/0XTD78lMWxQP
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[5], i, count = 0;

    for(i=0; i<5; i++){
        cin >> a[i];
    }

    for(i=0; i<5; i++){
        if(a[i]%2 == 0){
            count++;
        }
    }

    cout << count << " valores pares" << endl;

    return 0;
}