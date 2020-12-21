#include <iostream>
using namespace std;
int main(void)
{
    int a,b;
    cin>>a>>b;
    cout<< a*(b%10)<<endl;//number 3
    cout<< a*((b-100*(b/100))/10)<<endl;//number 4
    cout<< a*(b/100) <<endl;//number 5
    cout<<a*b;//number 6
}
