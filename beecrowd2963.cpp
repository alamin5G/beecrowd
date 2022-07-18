/**
 * @file beecrowd2963.cpp
 * see the problem - https://prnt.sc/CdNknW9oJxy-
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    int v[t], max =0;
    int temp;
    for(auto i=0; i<t; i++){
        cin >> v[i];
        temp = v[0];
    }
    sort(v, v+t, greater<int>());
    if(temp==v[0]){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}