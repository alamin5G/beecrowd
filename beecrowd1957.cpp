/**
 * @file beecrowd1957.cpp
 * Converting to hexa decimal
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
    long long int d;
    cin >> d;
    long long int remain;
    int i = 0;
    char hex[19];

    while(d!=0){
        remain = d%16;
        d = d/16;
        if(remain<=9){
            hex[i] = remain+48;
        }else if(remain == 10)
        {
            hex[i] = remain + 55; // 10+55=65 (65=A)
        }else if(remain == 11){
            hex[i] = remain + 55; //11+55 = 66 (66=B)
        }else if(remain == 12 ){
            hex[i] = remain + 55;
        }else if(remain == 13 ){
            hex[i] = remain + 55;
        }else if(remain == 14 ){
            hex[i] = remain + 55;
        }else if(remain == 15 ){
            hex[i] = remain + 55;
        }
        i++;
    }

    hex[i] = '\0';
    int len = strlen(hex);
    for(i=len-1; i>=0; i--){
        cout << hex[i];
    }
    cout << "\n";
    return 0;
}