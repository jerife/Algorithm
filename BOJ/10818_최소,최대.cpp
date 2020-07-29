#include <iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int max=a[0],low=a[0];
    for(int i=0;i<n;i++){
        if(max<=a[i]){
            max=a[i];
        }
        if(low>=a[i]){
            low=a[i];
        }
    }
    cout<<low<<" "<<max;
    return 0;
}
