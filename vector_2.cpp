#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v; 

    for (int i = 1; i <= 5; i++)
    {
        int n;
        cout << "\nEnter data: ";
        cin >> n;
        v.push_back(n); 
    }

    cout << "\nVector elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; 
    }

    return 0;
}
