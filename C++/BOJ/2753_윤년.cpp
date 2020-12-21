#include <iostream>
using namespace std;
int main(void)
{
    int a;
    cin>>a;
    if(a%4==0){//4년 단위인 년도 배출
        if(a%400==0){//먼저 400년도 단위는 1을 출력함
            cout<<1;
            return 0;
        }
        if(a%100==0){//나머지 년도를 100으로나눠 0을 출력함
            cout<<0;
            return 0;
        }
        cout<<1;//위 조건문에 해당하지 않으면 1을 출력
    }
    else{//4년단위가 아닌 년도
        cout<<0;
    }
    return 0;
}
