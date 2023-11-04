
#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
       fast;
       int t;
       cin>>t;
       while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c) cout<<'+'<<endl;
        else cout<<'-'<<endl;
       }
    return 0;
}

