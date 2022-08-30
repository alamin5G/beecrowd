/**
 * @file beecrowd1581.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/1581
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-30
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
        int n;
        cin >> n;
        vector<string> vs;
        string s;
        while(n--){
            cin >> s;
            vs.push_back(s);
        }
        int native=1;
        for(auto i=1; i<vs.size(); i++){
            if(vs.at(i)==vs.at(i-1)){
                native++;
            }
        }

        if(native==vs.size()){
            cout << vs.at(0) <<endl;
        }else{
            cout << "ingles" << endl;
        }
    }
    return 0;
}