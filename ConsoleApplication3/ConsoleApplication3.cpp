#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y, z;
    if (a >= x) {
        if (b >= y) {
            cout << "YES" << endl;
        }
        else if (b>=z) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else if (b >= x) {
        if (a >= y) {
            cout << "YES" << endl;
        }
        else if (a >= z) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else if (a >= y) {
        if (b >= z) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else if (b >= y) {
        if (a >= z) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }else{
        cout << "NO" << endl;
    }
}
