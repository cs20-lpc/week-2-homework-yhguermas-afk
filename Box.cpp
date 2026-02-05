#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Box {
private:
    T value;

public:
    // TODO:Constructor
    Box(T v) : value(v) {}

    // TODO:setValue
    void setValue(T v) {
        value = v;
    }

    // TODO: getValue
    T getValue() const {
        return value;
    }

    // TODO: print
    void print() const {
        cout << "Box contains: " << value << endl;
    }
};

int main()
{
  Box<int> intBox(0);
  Box<double> doubleBox(100);
  Box<string> stringBox("CS20");

  intBox.print();
  doubleBox.print();
  stringBox.print();
  
  return 0;
}


