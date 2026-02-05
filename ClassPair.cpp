#include <iostream>
#include "ClassPairTemplate.hpp"
using namespace std;


int main() {
    Pair<int, double> p1(7, 14);
    Pair<string, int> p2("Age", 20);

    p1.print();
    p2.print();

    return 0;

}
