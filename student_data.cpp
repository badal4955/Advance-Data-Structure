#include <iostream>
#include <map>
#include <string>

using namespace std;

struct student {
    int r, p, c, m;
};

int main() {
    map<string, student> myMap;
    
    myMap["student1"] = {101, 45, 67, 78};
    myMap["student2"] = {102, 44, 66, 44};
    myMap["student3"] = {103, 55, 46, 78};
    myMap["student4"] = {104, 34, 77, 84};
    myMap["student5"] = {105, 11, 45, 67};
    myMap["student6"] = {106, 23, 67, 88};

    cout << "Size of map: " << myMap.size() << endl;

    cout << "\nStudent\t\tRoll\tPhy\tChe\tMaths\tTotal\tPer\tRes\n";

    for (const auto& pair : myMap) {
        int total = pair.second.p + pair.second.c + pair.second.m;
        int per = total / 3;

        cout << pair.first << "\t" 
             << pair.second.r << "\t" 
             << pair.second.p << "\t" 
             << pair.second.c << "\t" 
             << pair.second.m << "\t" 
             << total << "\t" 
             << per << "\t";

        if (per >= 33)
            cout << "Pass";
        else
            cout << "Fail";

        cout << "\n";
    }

    return 0;
}
