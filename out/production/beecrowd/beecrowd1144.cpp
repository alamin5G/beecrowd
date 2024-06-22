/**
 * @file beecrowd1144.cpp
 * Logical Sequence - see the problems https://prnt.sc/S1YPsk6fUmMz
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

int main(){
    
    int n;
    
    cin >> n;
    
    for(int i = 1; i <= n; i++){
            cout << i << " " << i*i << " " << i*i*i << endl;
            cout << i << " " << i*i+1 << " " << i*i*i+1 << endl;
    }
    return 0;
}
