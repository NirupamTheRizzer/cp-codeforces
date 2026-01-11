// Author: Nac712
// Date: 2026-01-11
// Platform: Codeforces

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        string s;
        cin>>s;
        if (s.length() == n)
        {
            for (int i = 0; i < n; i++)
            {
                if(s[i] != s[n-1]){
                    cnt++;
                }
            }
            cout<<cnt<<endl;
        }
    }

    return 0;
}