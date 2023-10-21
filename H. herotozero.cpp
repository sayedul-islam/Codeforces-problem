#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   long long n,k,countt=0;
   cin>>n>>k;
   while(n!=0){
    if(n%k==0){
        n=n/k;
        countt++;
    }
    else{
        long long mod =n%k;
        n=n-mod;
        countt+=mod;
    }
   }
   cout<<countt<<endl;
    }
return 0;
}


