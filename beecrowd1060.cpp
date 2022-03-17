/**
 * @file beecrowd1060.cpp
 * Positive Numbers - see the problems https://prnt.sc/kKPz7nKPSReg
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
    int i,  count = 0;
    double a[6];
    for(i =1; i<=6; i++){
        cin >> a[i];
    }
    
    for (i = 1; i <= 6; i++)
    {
        if(0<a[i]){
            count++;
        }
    }

    cout << count << " valores positivos" << endl;
    

    return 0;
}
