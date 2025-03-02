#include <iostream>
#include <stack>
#include <deque>

using namespace std;

void showq(deque<int> g) {
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << "\t" << *it;
    cout << "\n";
}

int main() {
    stack<int> stack;
    stack.push(21);
    stack.push(22);
    stack.push(23);
    stack.push(24);
    
    int num = 150;
    stack.push(num);

    stack.pop();

    cout << "Top element of stack: " << stack.top() << endl;
    cout << "Stack size: " << stack.size() << endl;

    deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_back(20);
    gquiz.push_back(30);

    cout << "The queue gquiz is: ";
    showq(gquiz);

    cout << "\ngquiz.size(): " << gquiz.size();
    cout << "\ngquiz.front(): " << gquiz.front();
    cout << "\ngquiz.back(): " << gquiz.back();

    cout << "\ngquiz.pop(): ";
    gquiz.pop_front();
    showq(gquiz);

    return 0;
}
