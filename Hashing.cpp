#include<iostream>
using namespace std;
int main(){
    int a[10],n,i,p;
    for(i=1; i<5; i++)
    {
        cout<<"\nEnter Array Elements ";
        cin>>n;
        p=n%10;
        a[p]=n;
    }
    int ser;
        cout<<"\n Enter element to be search ";
        cin>>ser;
        p=ser%10;
        if(a[p]==ser)
        cout<<"\nFound at "<<p<<" postion ";
        else
        cout<<"\n not found";
        return 0;
}













// #include <iostream>
// using namespace std;

// int midSquareHash(int key, int tableSize) {
//     long long square = (long long)key * key;
//     int mid = (square / 10) % 100;
//     return mid % tableSize;
// }

// int main() {
//     int a[100] = {0}, n, i, p;

//     for (i = 0; i < 5; i++) {
//         cout << "\nEnter a 3-digit number: ";
//         cin >> n;

//         if (n < 100 || n > 999) {
//             cout << "Please enter a 3-digit number!";
//             i--;
//             continue;
//         }

//         p = midSquareHash(n, 100);
//         a[p] = n;
//     }

//     int ser;
//     cout << "\nEnter element to search: ";
//     cin >> ser;
//     p = midSquareHash(ser, 100);

//     if (a[p] == ser)
//         cout << "\nFound at position " << p;
//     else
//         cout << "\nNot found";

//     return 0;
// }
