/**
 * @file beecrowd1076.cpp
 * Even Square - see the problems https://prnt.sc/4_RV6iLlTho1
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;
int main(){
    int i, n, sqr = 0;
    cin >> n;
    for(i=1; i<=n; i++){
        if(i%2 == 0){
            sqr = i*i;
            cout << i << "^2 = " << sqr << endl;
        }
    }

    return 0;
}
