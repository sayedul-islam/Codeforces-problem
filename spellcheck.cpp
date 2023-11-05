#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s,t1="Timur";
    cin>>s;
    sort(t1.begin(),t1.end());
    sort(s.begin(),s.end());
    if(s==t1) cout<<"YES\n";
    else cout<<"NO\n";
    }
    return 0;
}

