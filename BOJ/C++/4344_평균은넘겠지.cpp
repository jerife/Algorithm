#include<iostream>
using namespace std;
int main(void){
    int n;
    cin>> n;
    int x;
    double sum=0,avg=0,avgcount=0;
    int y[1000][1000]={0};
    for(int i=0;i<n;i++){
        cin >> x;
        for(int j=0; j<x;j++){
            cin >> y[i][j];
            sum+=y[i][j];
        }
            for(int k=0; k<x;k++){
                if((sum/x)<y[i][k]){
                    avgcount++;
                }
            }
        cout.precision(5);
        cout<<(double)(avgcount/x*100)<<"%"<<endl;
        avgcount=0;
        avg=0;
        sum=0;
    }
    return 0;
}
