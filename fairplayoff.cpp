#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   int s1,s2,s3,s4;
   cin>>s1>>s2>>s3>>s4;
   if(s1>s2 && s3>s4){
        if(s1>s4 && s3>s2)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
            }
   else if(s1>s2 && s4>s3){
        if(s1>s3 && s4>s2)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
            }

   else if(s2>s1 && s3>s4){
        if(s2>s4 && s3>s1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
            }
   else if(s2>s1 && s4>s3){
        if(s2>s3 && s4>s1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

            }

   else
        cout<<"NO"<<endl;
    }
return 0;
}


