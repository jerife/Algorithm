#include <iostream>
using namespace std;
int main(void)
{
    int n,x,k=0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>k;
        if(k<x){
            cout<<k<<" ";
        }
    }
    return 0;
}
