#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int coins[]={1,2,5,10};
    int amount =39;

    int n=4;
    int res =0;
    for(int i=n-1; i>=0; i--){
        if(amount == 0)
        break;
    }
    cout<<"\n Total Note Require "<<res;
    return 0;
}
