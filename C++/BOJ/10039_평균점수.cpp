#include <iostream>
using namespace std;
int main(void)
{
    int a,sum=0;
    for(int i=0; i<5;i++){
        cin>>a;
        if(a<40){
            a=40;
        }
        sum=sum+a;
    }
    cout<<sum/5;
    
    return 0;
}
