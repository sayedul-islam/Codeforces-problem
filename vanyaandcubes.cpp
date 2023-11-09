#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main(){
    fast;
    int i,j,n,sum,count=0;
    cin>>n;
    for(i=1; i<=n; i++){
            sum=0;
        for(j=1; j<=i; j++)
        {
            sum+=j;
        }
        n=n-sum;
        if(n>=0)  count++;
        else break;
    }
    cout<<count<<endl;
   return 0;
}

