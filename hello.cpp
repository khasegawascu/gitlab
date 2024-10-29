#include <iostream>
#include "myclass.h"

using namespace std;
     
int main () {
  cout << "Hello World" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
}

// making some different changes than main