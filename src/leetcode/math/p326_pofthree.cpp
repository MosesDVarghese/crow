#include "p326_pofthree.h" // Include the corresponding header
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Solution::isPowerOfThree(int n) {
  bool result = false;
  int max_power_of_three = 1162261467;

  result = n > 0 && max_power_of_three % n == 0;
  return result;
}
