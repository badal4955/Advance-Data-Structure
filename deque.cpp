#include<deque>
#include<iostream>

using namespace std;

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for(it=g.begin(); it!=g.end(); ++it);
    cout<<"\t"<<*it;
    cout<<"\n";
}

int main(){
    deque<int> data = {10, 20, 30, 40, 50};
    showdq(data);

    cout<< "\nguiz.size() :"<<data.size();
    cout<< "\ngquiz.front() :"<<data.front();
    cout<< "\ngquiz.back() :"<<data.back();

    cout<< "\ngquiz.pop_front() : ";
    data.pop_front();
    showdq(data);

    cout<<" \nsquiz.pop_back() : ";
    data.pop_back();
    showdq(data);

    return 0;
}