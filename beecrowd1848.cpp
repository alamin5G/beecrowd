/**
 * @file beecrowd1848.cpp
 * see the problem - https://prnt.sc/civbCQAs4Mg_
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
    int c=1, sum=0;
    string s; 
    while(c<=3) {
        getline(cin, s);
        if(s[0]=='c'){
            cout << sum << endl;
            c++;
            sum = 0;
        }else{
            if(s == "---"){
                sum += 0;
            }else if(s == "--*"){
                sum += 1;
            }else if(s == "-*-"){
                sum += 2;
            }else if(s == "-**"){
                sum += 3;
            }else if(s == "*--"){
                sum += 4;
            }else if(s == "*-*"){
                sum += 5;
            }else if(s == "**-"){
                sum += 6;
            }else if(s == "***"){
                sum += 7;
            }
        }
    }

    return 0;
}