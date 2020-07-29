#include <iostream>
using namespace std;
int main(void)
{
    int a,b,x;
    cin>>a>>b;
    if(b-45<0){
        x=45-b;
        b=60-x;
        if(a==0){
            a=24;
        }
        cout<<a-1<<' '<<b;
    }
    else{
        b=b-45;
        cout<<a<<' '<<b;
    }
    return 0;
}
