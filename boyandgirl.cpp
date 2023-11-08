#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
    fast;
    string s;
    cin>>s;
    set<char> charset;
    for(char c: s){
        charset.insert(c);
    }
    int dissize=charset.size();
    if(dissize&1) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;


   return 0;
}

