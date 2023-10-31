#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int rating;
        cin>>rating;
        if(rating>=1900) cout<<"Division 1"<<endl;
        else if(rating>=1600 && rating<=1899) cout<<"Division 2"<<endl;
        else if(rating>=1400 && rating<=1599) cout<<"Division 3"<<endl;
        else {
            if(rating<=1399) cout<<"Division 4"<<endl;
        }
    }
   return 0;
}

