/**
 * @file beecrowd1151.cpp
 * Easy Fibonacci - see the problems https://prnt.sc/CSt7uIJNXiwb
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 0, b = 1, i, n, fibonacci = 0;
    cin >> n;

    
    for(i = 1; i<=n; i++){

        if(i == 1) cout << a << " ";
        else if(i==2) cout << b;
        else{
        fibonacci = a + b;
        
        cout << " " << fibonacci;
        a = b;
        b = fibonacci;
        }

        if(i == n){
            cout << endl;
        }
        

    }

    return 0;
}