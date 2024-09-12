#include <iostream>

// #include "leetcode/math/p326_pofthree.h" // problem
// #include "leetcode/math/p204_cntprims.h" // problem
// #include "leetcode/math/p412_fizzbuzz.h" // problem
#include "leetcode/math/p013_rmntoint.h"
#include "utils/vectors/vectors.h" // utils

int main() {
  std::cout << "Hello from crow!\n";

  // Create an instance of the Solution class
  Solution solution;

  int n = 15;

  // bool result
  // bool result = solution.isPowerOfThree(15);

  // int result
  int result = solution.romanToInt("XVI");

  // vec(string) result
  // vector<string> result = solution.fizzBuzz(15);

  // print int result
  std::cout << (result) << std::endl;

  // print boolean result
  // std::cout << (result ? "True" : "False") << std::endl;

  // print vec result
  // printVector(result);

  return 0;
}
