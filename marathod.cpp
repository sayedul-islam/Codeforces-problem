#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
    int a,b,c,d,count=0,v=4;
    cin>>a>>b>>c>>d;
    while(v--){
        if(a<b){
            b=0;
            count++;
        }
        else if(a<c){
            c=0;
            count++;
        }
        else if(a<d){
            d=0;
            count++;
        }
    }
    cout<<count<<endl;
}
   return 0;
}

