/**
 * @file beecrowd1858.cpp
 * see the problem - https://prnt.sc/827bgRMmk83Y
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
    int n, c=0, max=20, index=0;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        c++;
        if(a<max){
            max = a;
            index = c;
        }
    }
    cout << index << endl;
    return 0;
}
