#include<iostream>
using namespace std;
 int main() {
    int coin[]={1,2,4,5,10};
    int n=5;
    int k=2;
    int i=0;
    int j=n-1;
    int min=0,max=0;
    while(i<=j){
        min=min+coin[i];
        i++;
        j=j-k;
    }
    cout<<"\n Min amount"<<min;
    return 0;
 }



 