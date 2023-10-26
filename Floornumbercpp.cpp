#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
  int n,x,count=1;
  cin>>n>>x;
  for(int i=2; i<n; i=i+x){
    count++;
  }
  if(n<=2)
    cout<<1<<endl;
  else cout<<count<<endl;
    }

return 0;
}



