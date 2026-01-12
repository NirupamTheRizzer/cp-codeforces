// Author: Nac712
// Date: 2026-01-12
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
        vector<int> a(n);
        for(int &x : a) cin>>x;
        bool unsafe = false;
        sort(a.begin(),a.end());
        for (int i = 1; i < n; i+=2)
        {
            if(a[i] != a[i+1]){
                unsafe = true;
            }
        }
        if(unsafe){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        

        
    }
    
    return 0;
}