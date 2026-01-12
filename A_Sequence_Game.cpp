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
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int x;
        cin>>x;
        int cnt =0;
        
        int i = *min_element(a.begin(),a.end()); 
        int e = *max_element(a.begin(),a.end()); 
        if(e>=x && x>=i){
            cout<<"YES"<<endl;
        
        }
        else{
            cout<<"NO"<<endl;
            
        } 
    }
    
    return 0;
}