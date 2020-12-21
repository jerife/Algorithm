#include <iostream>
using namespace std;
int main(void)
{
    int n,x,a,b,c,sum=0;

    cin>>n;
    x=n;
    while(1){
        a=x/10;
        b=x%10;
        c=a+b;
        x=10*b+c%10;
        sum=sum+1;
        if(x==n) {
            break;
        }
        
    }
    cout<<sum;
    return 0;
}
