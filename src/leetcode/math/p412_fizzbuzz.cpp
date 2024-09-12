#include "p412_fizzbuzz.h" // Include the corresponding header
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> Solution::fizzBuzz(int n) {
  vector<string> result;
  for (int i = 1; i <= n; ++i) {
    if (i % 3 == 0 && i % 5 == 0) {
      result.push_back("FizzBuzz");
    } else if (i % 3 == 0) {
      result.push_back("Fizz");
    } else if (i % 5 == 0) {
      result.push_back("Buzz");
    } else {
      result.push_back(to_string(i));
    }
  }
  return result;
}
