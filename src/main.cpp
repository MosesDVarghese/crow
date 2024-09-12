#include <iostream>

#include "leetcode/math/p412_fizzbuzz.h" // problem
#include "utils/vectors/vectors.h"       // utils

int main() {
  std::cout << "Hello from crow!\n";

  // Create an instance of the Solution class
  Solution solution;

  // Call the problem function
  vector<string> result = solution.fizzBuzz(15);

  // Use the printVector utility function to print the result
  printVector(result);

  return 0;
}
