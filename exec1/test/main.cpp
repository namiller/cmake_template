#include "../include/printing.h"
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(VectorTest, OneD) {
  vector<int> int_test = {1, 2, 3, 4, 5};
  vector<float> float_test = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
  vector<string> string_test = {"one", "two", "three", "four", "five"};
  
  ASSERT_EQ("[1, 2, 3, 4, 5]", toString(int_test));
  ASSERT_EQ("[1.0, 2.0, 3.0, 4.0, 5.0]", toString(float_test));
  ASSERT_EQ("[one, two, three, four, five]", toString(string_test));
}

TEST(VectorTest, TwoD) {

}

TEST(VectorTest, ThreeD) {

}

TEST(SetTest, Simple) {

}

TEST(MapTest, Simple) {

}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
