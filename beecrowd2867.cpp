/**
 * @file beecrowd2867.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/2867
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
int main(){
    
    int t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        double logs = log10(n);
        logs*=m;
        cout << floor(logs)+1 << endl;
    }

    return 0;
}