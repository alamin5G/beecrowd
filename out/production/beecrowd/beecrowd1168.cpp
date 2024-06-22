/**
 * @file beecrowd1168.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/1168
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int sum=0;
        for(auto i=0; i<s.size(); i++){
                char c = s.at(i);
                int d = c-'0';
                sum += arr[d];
        }
        cout << sum << " leds" << endl;
    }
    return 0;
}