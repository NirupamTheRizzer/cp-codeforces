// Author: Nac712
// Date: 2026-01-10
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
        int out;
        int out1 = 0;
        if(n%2 == 0){
            out = floor(n/4) + 1;
            cout<<out<<endl;
        }
        else{
            cout<<out1<<endl;
        }
        
    }
    
    return 0;
}