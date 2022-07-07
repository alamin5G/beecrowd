/**
 * @file beecrowd1929.cpp
 * see the problem - https://prnt.sc/Fe1h2dmCnPUf
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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr[] = {a, b, c, d};
    sort(arr, arr+4);
    if(arr[0]+arr[1]>arr[2]){
        cout << "S" << endl;
    }else if(arr[0]+arr[2]>arr[3]){
        cout << "S" << endl;
    }else if(arr[1]+arr[2]>arr[3]){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    
    return 0;
}