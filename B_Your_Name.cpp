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
        if(1<=n && n<=20){
            string s,t;
            cin>>s>>t;

            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            if(s == t){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}