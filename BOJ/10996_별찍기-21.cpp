#include <iostream>
using namespace std;
int main(void)
{
    int a;
    cin >> a;
        for(int i=a; i>0; i--){
                for(int j=1; j<=a;j++){
                    if(j%2==1) cout<< "*";
                    else cout<<" ";
                }
            if(a==1){
                return 0;
            }
            cout<<endl;
             for(int j=1; j<=a;j++){
                 if(j%2==0) cout<< "*";
                 else cout<<" ";
             }
            cout<<endl;
            }
    return 0;
}
