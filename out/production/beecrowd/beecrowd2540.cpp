/**
 * @file beecrowd2540.cpp
 * 
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
    int t;
    int y;
    
    while(cin >> t){
        y=0;
        int n[t];
        for(auto i = 0;i < t;i++)
        {
            cin >> n[i];
            if(n[i]==1){
                y++;
            }
        }
        float z = ceil(t*.666);
        int x = (int) z;
        if(y>=x){
            cout << "impeachment" <<endl;
        }else{
            cout << "acusacao arquivada" <<endl;
        }
    }
    return 0;
}