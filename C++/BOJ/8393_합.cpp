#include <iostream>
using namespace std;
int main(void)
{
    int n,sum=0;//개수
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}
