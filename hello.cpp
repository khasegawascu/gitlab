#include <iostream>
#include "myclass.h"

using namespace std;
     
int main () {
  cout << "Hello World" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
}

// making some changes for part 8.6a