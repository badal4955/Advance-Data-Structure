#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main()
{
    array<int, 5> ar1{{3, 4, 5, 1, 2}};
    array<int, 5> ar2{{1, 2, 3, 4, 5}};
    array<string, 2> ar3 = {{string("Tulas"), "Institute"}};

    cout << "sizes of arrays are" << endl;
    cout << ar1.size() << endl;
    cout << ar2.size() << endl;
    cout << ar3.size() << endl;

    cout << "\nInitial ar1 : ";
    for (auto i : ar1)
        cout << i << ' ';

    sort(ar1.begin(), ar1.end());

    cout << "\nsorted ar1 : ";
    for (auto i : ar1)
        cout << i << " ";

    ar2.fill(10);

    cout << "\nfilled ar2: ";
    for (auto i : ar2)
        cout << i << ' ';

    cout << "\nar3 : ";
    for (auto &s : ar3)
        cout << s << ' ';

    return 0;
}
