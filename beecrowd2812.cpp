/**
 * @file beecrowd2812.cpp
 * see the problem - https://prnt.sc/CbPtTWCTYg06
 * @author Md. Alamin (alamin5g@yahoo.com)
 * I would love be a software engineer at Google. That is why anybody can uses this code without any condition, if you face any difficulty, then try to email me.
 * @version 0.1
 * @date 2022-08-24
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    int s = 0, l = 0;
    vector<int> odd;
    vector<int> great;
    vector<int> out;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (auto j = 0; j < n; j++)
        {
            if (v.at(j) % 2 == 1)
            {
                odd.push_back(v.at(j));
            }
        }
        sort(odd.begin(), odd.end());
        great = odd;
        sort(great.begin(), great.end(), greater<int>());

        for (auto i = 0; i < odd.size(); i++)
        {
            if (i == 0)
            {
                out.push_back(great.at(i));
            }
            else if (i % 2 != 0)
            {
                out.push_back(odd.at(s));
                s++;
            }
            else
            {
                l++;
                out.push_back(great.at(l));
            }
        }
        for(auto a =0; a<out.size(); a++){
            if(a==out.size()-1){
                cout << out[a];
            }else{
                cout << out[a] << " ";
            }
        }
        cout << endl;
        s = 0, l = 0, odd.clear(), great.clear(), out.clear();
    }

    return 0;
}
