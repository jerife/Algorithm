#include <iostream>
using namespace std;
int main(void)
{
    int a,b,c,d;
    cin>>a>>b>>c;
    d=a*b*c;
    int e[10]={0};
    int i=0;
    while(d!=0){
        i=d%10;
        e[i]++;
        d=d/10;
    };
    for(int j=0;j<10;j++){
        cout<<e[j]<<endl;
    }
}
