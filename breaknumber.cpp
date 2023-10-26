#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  long long i,x,n,maxVal,count=0 ,size;
  cin>>n;
  long long arr[n];
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  for(i=0; i<n; i++){
        x=arr[i];
    while(x){
        if(x%2==0) count++;
        else break;
        x=x/2;
    }
    arr[i]=count;
    count=0;
  }
  size = sizeof(arr) / sizeof(arr[0]);
  if (size > 0)
        maxVal =*max_element(arr, arr + size);
        cout<<maxVal<<endl;
return 0;
}



