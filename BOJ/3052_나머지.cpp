#include <iostream>
using namespace std;
int main(void)
{
    int sum=0;
    int a[10]={0};
    int b[42]={0};
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    for(int j=0;j<10;j++){
        b[a[j]%42]++;
    }
    for(int k=0;k<42;k++){
        if(b[k]!=0){
            sum+=1;
        }
    }
    cout<<sum;
    return 0;
}
