/**
 * @file beecrowd3170.cpp
 * see the problem - https://prnt.sc/TWIytNKysZPR
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
    int b, g, quotient, need;
    cin >> b >> g;
    int temp;
    temp = g; 
    if(g%2==1){
        g = temp-1;
    }
    
    quotient = g/2;
    
    if(b<quotient){
        need = quotient - b;
        cout << "Faltam "<<need << " bolinha(s)" << endl;
    }else{
        cout << "Amelia tem todas bolinhas!" << endl;
    }

    return 0;
}