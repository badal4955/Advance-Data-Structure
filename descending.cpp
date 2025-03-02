#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int,greater<int>>s1;
    s1.insert(10);
    s1.insert(2);
    s1.insert(14);
    s1.insert(11);
    s1.insert(17);

    for(auto i : s1){
       cout<<i<<" "; 
    }
    return 0;
}