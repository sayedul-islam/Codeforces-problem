#include<bits/stdc++.h>
#define ll   long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
    ll w,h,n,sheet=1;
    cin>>w>>h>>n;
    if(n==1) {
        cout<<"YES"<<endl;
        continue;
    }
    while(w%2==0){
        sheet*=2;
        w=w/2;
    }
    while(h%2==0){
        sheet*=2;
        h=h/2;
    }
    if(sheet>=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}

