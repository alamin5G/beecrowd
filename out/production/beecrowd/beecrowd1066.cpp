/**
 * @file beecrowd1066.cpp
 * Even, Odd, Positive and Negative - see the problems https://prnt.sc/17BUjuZBG1DA
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
    int a[5], i, even = 0, odd = 0, positive = 0, negative = 0;

    for(i=0; i<5; i++){
        cin >> a[i];
    }

    for(i=0; i<5; i++){
        if(a[i]%2 == 0){
            even++;
        }else if(a[i]%2 != 0){
            odd++;
        }

        if(a[i] < 0){
            negative++;
        }else if (a[i] > 0){
            positive++;
        }
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;

    return 0;
}
