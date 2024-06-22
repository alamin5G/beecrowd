/**
 * @file beecrowd2167.cpp
 * see the problem - https://prnt.sc/kYI-KDgUpWeE
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
    int t, index, c=0;
    cin >> t;

    int a[t];

    for(auto i=0; i<t; i++){
        cin >> a[i];
    }
    for(auto i=1; i<t; i++){
        if(a[i]<a[i-1]){
            c++;
            index = i;
            break;
        }
    }
    if(c==1){
        cout << index+1 << endl;
    }else{
        cout << c << endl;
    }
    return 0;
}