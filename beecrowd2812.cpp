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
    int s=0, l=0;
    vector<int> odd;
    vector<int> great;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (auto i = 0; i < n; i++)
        {
            if (v.at(i) % 2 == 1)
            {
                odd.push_back(v.at(i));
            }
        }
        if(odd.empty()){
            cout << endl;
            continue;
        }
        sort(odd.begin(), odd.end());
        great = odd;
        sort(great.begin(), great.end(), greater<int>());
        
        for (auto i = 0; i < odd.size(); i++)
        {
            if (i == 0)
            {
                cout << great.at(i) << " ";
            }
            else if (i % 2 != 0)
            {
                if (i == odd.size() - 1)
                {
                    cout << odd.at(s) << endl;
                }
                else
                {
                    cout << odd.at(s) << " ";
                }
                s++;
            }
            else
            {
                l++;
                if (i == odd.size() - 1)
                {
                    cout << great.at(l) << endl;
                }
                else
                {
                    cout << great.at(l) << " ";
                }
            }
        }
        s=0, l=0, v.clear(), odd.clear(), great.clear();
    }

    return 0;
}
