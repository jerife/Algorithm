#include <iostream>
using namespace std;
int main(void)
{
    int n;
    int max=0;
    double sum=0;
    cin>>n;
    double arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    for(int j=0;j<n;j++){
        arr[j]=arr[j]/max*100;
        sum+=arr[j];
    }
    cout<<sum/n;
    return 0;
}
