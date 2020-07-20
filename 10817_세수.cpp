#include <iostream>
using namespace std;
int main(void)
{
    int a,b,c,x=0;
    cin>> a>>b>>c;
    if(a>=b&&b>=c){
        x=b;
    }
    else if(c>=b&&b>=a){
        x=b;
    }
    else if(b>=a&&a>=c){
        x=a;
    }
    else if(c>=a&&a>=b){
        x=a;
    }
    else if(a>=c&&c>=b){
        x=c;
    }
    else if(b>=c&&c>=a){
        x=c;
    }
    cout<<x;
    return 0;
}
