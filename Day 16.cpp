//Maps are a part of the C++ STL.Maps are associative containers that store elements formed by a combination of a key value and a mapped value, 
//following a specific order.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int q;
    cin >> q;

    map<string, int> student;

    while (q--) {
        int type;
        cin >> type;

        if (type == 1) {
            string name;
            int marks;
            cin >> name >> marks;
            student[name] += marks;
        }
        else if (type == 2) {
            string name;
            cin >> name;
            student.erase(name);
        }
        else if (type == 3) {
            string name;
            cin >> name;
            cout << student[name] << endl;
        }
    }

    return 0;
}
