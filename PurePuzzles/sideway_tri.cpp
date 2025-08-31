#include <iostream>

using namespace std;

int main () {
    cout << "Please enter the size: " << "\n";
    int num = 5;

    cin >> num;
    int size = num;

    cout << "\n";

    for (int i = 0; i < size; i ++) {
        int j = size-i-1;
        if (i >= (size/2))
            j = i;
        for (int k = j; k < size; k ++) {
            cout << '#';
        }
        cout << "\n";
    }

    return 0;
}
