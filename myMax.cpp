#include <iostream>
using namespace std;

// TODO: Write a function template myMax
template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    cout << myMax(10, 27) << endl;
    cout << myMax(3.1, 2.1) << endl;
    cout << myMax(string("strawberry"), string("banana")) << endl;
    return 0;
}
