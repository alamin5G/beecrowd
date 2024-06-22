/**
 * @file beecrowd1059.cpp
 * Even Numbers - see the problems https://prnt.sc/RfKFPdTLDlsy
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
    int isEven;
    for(isEven = 2; isEven<=100; isEven++){
        if(isEven%2 == 0) cout << isEven << endl;
    }

    return 0;
}
