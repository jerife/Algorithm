#include <iostream>
using namespace std;
int main(void)
{
    int a,b=0,i,j;
    cin>>a;
    if(b<a){
        for(i=1;i<=a;i++){
                for(j=0;j<i;j++){
                    cout<<"*";
                }
                cout<< endl;
                b++;
            }
    }
    if(b>=a){
            for(i=a-1;i>0;i--){
                    for(j=0;j<i;j++){
                        cout<<"*";
                    }
                    cout<< endl;
                }
        }

    return 0;
}
