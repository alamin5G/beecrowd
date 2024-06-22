/**
 * @file beecrowd1101.cpp
 * see the problem - https://prnt.sc/4oZIv-S0Z0h0
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-06-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int m , n, sum=0;
    while (cin >> m >> n ){
        if(m<= 0 || n<= 0){
            break;
        }

        if(m>n){
            m = m + n;
            n = m - n;
            m = m - n;
        }

        for (auto i = m; i <=n; i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "Sum=" << sum << endl;
        sum = 0;
        
    }
    return 0;
}