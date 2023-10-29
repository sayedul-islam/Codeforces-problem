#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
    fast;
    int w,i,num,count=0;
    cin>>w;

    for(i=2; i<w; i+=2){
        w=w-i;
        if(w%2==0){
            count=1;
            break;
        }
    }
    if(count) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

