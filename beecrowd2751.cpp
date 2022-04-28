/**
 * @file beecrowd2751.cpp
 * Bean
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-04-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int w, x, y, z, position;
    cin >> w >> x >> y >> z;
    int c[] = {w, x, y, z};
    for (auto i = 0; i < 4; i++)
    {
        if(c[i] == 1){
            position = i+1;
            break;
        }
    }

    cout << position << endl;
    
    return 0;
}