#include <string>
#include <functional>
#include <iostream>
#include "sub1/first.h"
#include "sub2/second.h"

using namespace std;

int main() {
  cout << "Hello World." << endl;
  cout << first_function(5,5) << endl;
  cout << second_function(5,5) << endl;
  return 0;
}
