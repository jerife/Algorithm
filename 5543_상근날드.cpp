#include <iostream>
using namespace std;
int main(void)
{
    int a,b,x,y;
    b=2001;
    y=2001;
    for(int i=0;i<3;i++){
        cin >> a;
        if(a<b){
            b=a;
        }
    }
    for(int j=0;j<2;j++){
        cin>>x;
        if(x<y){
            y=x;
        }
    }
    cout<<b+y-50;
    return 0;
}
