/**
 * @file beecrowd1146.cpp
 * see the problem - https://prnt.sc/W7c-OjYtNA5J
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x =1;
    while(x!=0){
        cin >> x;
        for(auto i = 1; i<=x; i++){
            if(i==x){
                cout << i << endl;
            }else{
                cout << i << " ";
            }
        }
    }
    return 0;
}
