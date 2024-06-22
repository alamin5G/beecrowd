/**
 * @file beecrowd3303.cpp
 * Big Word - https://prnt.sc/l7QfFd6nuWyz
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    char w[20];
    cin >> w;
    int l = strlen(w);
    if(l>=10){
        cout << "palavrao" << endl;
    }else{
        cout << "palavrinha" << endl;
    }
    return 0;
}