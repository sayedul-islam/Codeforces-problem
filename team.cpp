#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
    fast;
   int n,p,v,t,count=0;
   cin>>n;
   while(n--){
    cin>>p>>v>>t;
    if((p==1 && v==1) || (p==1 && t==1) ||(v==1 && t==1) || (p==1 && v==1 && t==1))
        count++;
   }
   cout<<count<<endl;
   return 0;
}
