#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
    fast;
    ll t;
   cin>>t;
    while(t--){
    ll a,b,c,n,maxi;
    cin>>a>>b>>c>>n;
    maxi=max(a,max(b,c));
    ll s=a+b+c+n;
    if(s%3==0 && s/3>=maxi) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
   return 0;
}

