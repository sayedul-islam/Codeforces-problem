
#include<bits/stdc++.h>
#define ll             long long
#define fast           ios_base::sync_with_stdio(false); cin.tie(NULL)
using namespace std;
int main() {
       int matrix[5][5],i,j,res;
       for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                res=abs(j-2)+abs(i-2);
            }
        }
       }
       cout<<res<<endl;

    return 0;
}

