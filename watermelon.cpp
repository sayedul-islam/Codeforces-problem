#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
    fast;
    int n,len;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        len=s.size();
        if(len>10){
            cout<<s[0]<<len-2<<s[len-1]<<endl;
        }
        else cout<<s<<endl;
    }
    return 0;
}
