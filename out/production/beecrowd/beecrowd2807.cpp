/**
 * @file beecrowd2807.cpp
 * see the problem - https://prnt.sc/uddZRnJB622h
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-07-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, sum=0;
    int first=0, second=1;
    int last;
    cin >> last;
    int fib[last];
    fib[0] = second;
    for(auto i=1; i<last; i++){
        sum = first + second;
        fib[i] = sum;
        first = second;
        second = sum;
    }
    for(auto i=last-1; i>=0; i--){
       
        if(i==0){
            cout << fib[i] << endl;
        }else{
             cout << fib[i] << " ";
        }
    }
    return 0;
}