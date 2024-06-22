/**
 * @file beecrowd2028.cpp
 * see the problem - https://prnt.sc/BoazycSvou4k
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
    int n;
    int x=0, num;
    while(cin >> n){
        x++;
        num =1;
        num += ((n*(n+1))/2);
        if(n==0){
            cout << "Caso " << x << ": " << num << " numero" <<endl; 
        }else {
              cout << "Caso " << x << ": " << num << " numeros" <<endl; 
        }
        cout << "0";
        for(auto i=1; i<=n; i++){
            for(auto j=1; j<=i; j++){
                    cout << " " << i;
            }
        }
        cout << endl;
        cout << endl;
    }

    return 0;
}