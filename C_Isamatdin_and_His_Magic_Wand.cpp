// Author: Nac712
// Date: 2026-01-11
// Platform: Codeforces

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool even = false, odd = false;
        int st[n];
        copy(a, a+n, st);
        sort(st, st+n);
        for (int i = 0; i < n; i++)
        {
            if(a[i]%2==0){
                even = true;
            }
            else{
                odd = true;
            }
        }
        
        if(odd & even){ 
            for (int i = 0; i < n; i++)
            {
                cout<<st[i]<<" ";
            }
            cout<<"\n";
            
        }
        else{
            for (int i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }

    }
    
    return 0;
}