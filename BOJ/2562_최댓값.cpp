#include <iostream>
using namespace std;
int main(void)
{
    int a[8];
    for(int i=0; i<9; i++){
        cin>>a[i];
    }
    int max=a[0],x=0;
    for(int i=0;i<9;i++){
        if(max<=a[i]){
            max=a[i];
            x=i+1;
        }
    }
    
    cout<<max<<endl;
    cout<<x;
    return 0;
}
