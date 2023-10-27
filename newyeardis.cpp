#include <iostream>
using namespace std;
int main() {
    int x1,x2,x3,dis;
    cin>>x1>>x2>>x3;
    if(x1>=x2 && x1<=x3 || x1<=x2 && x1>=x3)
    {
        dis=abs(x1-x2)+abs(x1-x3);
    }
    else if(x2>=x1 && x2<=x3 || x2<=x1 && x2>=x3)
    {
        dis=abs(x2-x1)+abs(x2-x3);
    }
    else{
        dis=abs(x3-x1)+abs(x3-x2);
    }
    cout<<dis<<endl;
    return 0;
}

