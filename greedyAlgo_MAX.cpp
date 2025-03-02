#include<iostream>
using namespace std;
 int main() {
    int coin[]={1,2,4,5,10};
    int n=5;
    int k=2;
    int i=n-1;
    int j=0;
    int min=0,max=0;
    while(i>=j){
        max=max+coin[i];
        i--;
        j=j+k;
    }
    cout<<"\n Max amount"<<max;
    return 0;
 }



 