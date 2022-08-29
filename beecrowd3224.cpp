/**
 * @file beecrowd3224.cpp
 * see the problem - https://prnt.sc/Ee_0iqSrPyap
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
    string child;
    string doc;
    cin >> child;
    cin >> doc;
    
    if(child.size() >= doc.size()){
        cout << "go" << endl;
    }else{
        cout << "no" << endl;
    }

    return 0;
}