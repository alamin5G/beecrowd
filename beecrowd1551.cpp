/**
 * @file beecrowd1551.cpp
 * see the problem - https://www.beecrowd.com.br/judge/en/problems/view/1551
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-09-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    while(n--){
        getline(cin >> ws, s);
        string st="";
        for(auto i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z'){
                char c = s[i];
                st+= c;
            }
        }
        sort(st.begin(), st.end());
        int uniq = 0;
        uniq = unique(st.begin(), st.end())-st.begin();
        if(uniq==26){
            cout << "frase completa" <<endl;
        }else if(uniq>=13){
            cout << "frase quase completa" <<endl;
        }else{
            cout << "frase mal elaborada" << endl;
        }
    }

    return 0;
}