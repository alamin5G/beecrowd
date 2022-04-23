/**
 * @file beecrowd2006.cpp
 * Identifying Tea
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
    int t, a, b, c, d, e;
    cin >> t;
    cin >> a >> b >> c >> d >> e;
    int arr[] = {a, b, c, d, e};
    int i, counter = 0;
    for(i = 0;i < 5;i++){
        if(arr[i] == t){
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}