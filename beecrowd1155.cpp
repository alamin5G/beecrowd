/**
 * @file beecrowd1155.cpp
 * S Sequence - see the problems https://prnt.sc/qDqmf4Zt08pE
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-03-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    double s =0, i;
    for(i=1; i<=100; i++){
        s = s + 1/i;
    }
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}



