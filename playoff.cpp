#include <bits/stdc++.h>
using namespace std;
int main(){
   int t,n,total=0;
   cin>>t;
   while(t--){
    cin>>n;
    total=pow(2,n);
    total-=1;
    cout<<total<<endl;
   }
return 0;
}


