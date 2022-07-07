/**
 * @file beecrowd1958.cpp
 * see the problem - https://prnt.sc/zzFUWJIBMC-t
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
     long double x;
     char a[111];
     cin >> x;
     sprintf(a, "%LE", x);
    if(a[0] != '-'){
        cout << "+";
    }
    printf("%.4LE\n",x);

    return 0;
}