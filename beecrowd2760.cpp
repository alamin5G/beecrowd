/**
 * @file beecrowd2760.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/2760
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-27
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    if(a.size()<=10){
        cout << a;
    }else{
        for(auto i=0; i<10; i++){
            cout << a[i];
        }
    }
    
    if(b.size()<=10){
        cout << b;
    }else{
        for(auto i=0; i<10; i++){
            cout << b[i];
        }
    }
    
    if(c.size()<=10){
        cout << c;
    }else{
        for(auto i=0; i<10; i++){
            cout << c[i];
        }
    }
    cout << endl;

    return 0;
}