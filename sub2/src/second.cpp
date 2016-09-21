#include "second.h"
#include "sub1/first.h"

int second_function(int a, int b) {
  int ret = 0;
  for (int i = 0; i < b; i++) {
    ret = first_function(ret, a);
  }
  return ret;
}
