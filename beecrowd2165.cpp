/**
 * @file beecrowd2165.cpp
 * see the problem - https://prnt.sc/dibJp1afrF_T
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
    string st;
    getline(cin, st);
    if(st.size()<=140){
        cout << "TWEET" << endl;
    }else{
        cout << "MUTE" << endl;
    }
    return 0;
}