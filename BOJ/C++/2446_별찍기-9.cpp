#include <iostream>
using namespace std;
int main(void)
{
    int a,b=0,i,j,k;
    cin>>a;
    for(i=a;i>0;i--){
        if(i*2-1==2*a-1){
                for(j=2*i-1;j>0;j--){
                    cout<<"*";
                }
                cout<<endl;
        }
        else{
            for(k=((2*a-1)-(2*i-1))/2;k>0;k--){
                cout<<' ';
            }
            for(j=2*i-1;j>0;j--){
                cout<<"*";
            }
            cout<<endl;
            
        }
    }

    for(i=2;i<=a;i++){
        if(i*2-1==2*a-1){
                for(j=2*i-1;j>0;j--){
                    cout<<"*";
                }
                cout<<endl;
        }
        else{
            for(k=((2*a-1)-(2*i-1))/2;k>0;k--){
                cout<<' ';
            }
            for(j=2*i-1;j>0;j--){
                cout<<"*";
            }
            cout<<endl;
            
        }
    }

    return 0;
}
