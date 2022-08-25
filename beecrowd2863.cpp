/**
 * @file beecrowd2863.cpp
 * see the problem - https://prnt.sc/SVCo2llbvO6l
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(cin >> t){
        vector<double> vd(t);
        for(auto i=0; i<t; i++){
            cin >> vd[i];
        }
        sort(vd.begin(), vd.end());
        cout << vd[0]<< endl;
    }

    return 0;
}