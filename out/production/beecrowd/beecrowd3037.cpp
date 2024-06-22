/**
 * @file beecrowd3037.cpp
 * see the problem - https://prnt.sc/LdnwE7IfN-_Z
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
const int a =3;
int main(){
    int t;
    cin>> t;
    int sc[a], dis[a], sc2[a], dis2[a];
        while(t--){
        int sum = 0, sum2 = 0;
        for(auto i=0; i<a; i++){
            cin >> sc[i] >> dis[i];
            sum += sc[i]*dis[i];
            
        }
        for(auto i=0; i<a; i++){
            cin >> sc2[i] >> dis2[i];
            sum2 += sc2[i]*dis2[i];
        }

        if(sum >= sum2){
            cout << "JOAO" << endl;
        }else{
            cout << "MARIA" << endl;
        }
        
    }
    return 0;
}