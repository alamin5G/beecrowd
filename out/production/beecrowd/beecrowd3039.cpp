/**
 * @file beecrowd3039.cpp
 * see the problem - https://prnt.sc/wPCC4Z82KoNl
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
    int t;
    cin >> t;
    string name;
    char gen;
    int f=0, m=0;
    while(t--){
        
        cin >> name >> gen;

        if(gen == 'F'){
            f++;
        }else{
            m++;
        }
    }
    cout << m << " carrinhos" << endl;
    cout << f << " bonecas" << endl;
    return 0;
}