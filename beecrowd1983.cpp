/**
 * @file beecrowd1983.cpp
 * see the problem - https://prnt.sc/Bf9UqynNHmvV
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int m[t], index=0;
    float note[t],temp=0;
    for(auto i=0; i<t; i++){
        cin >> m[i] >> note[i];
        if(note[i]>=temp){
            temp = note[i];
            index = i;
        }
    }
    if(temp>=8){
        cout << m[index] << endl;
    }else{
        cout << "Minimum note not reached" << endl;
    }
    return 0;
}