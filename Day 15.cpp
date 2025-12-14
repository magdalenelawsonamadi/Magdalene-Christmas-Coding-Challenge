//arrays
//https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
#include <iostream>
#include <sstream>
#include <limits>
using namespace std;

void reverse_array(int* arr, int size)
{
    for (int i = size - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n >= 1 && n <= 1000)
    {
        int num_array[n];
        int i = 0;

        string num_string;
        getline(cin, num_string);

        istringstream iss(num_string);
        int num;

        while (iss >> num && i < n)
        {
            if (num >= 1 && num <= 10000)
            {
                num_array[i++] = num;
            }
        }

        reverse_array(num_array, i);
    }

    return 0;
}
