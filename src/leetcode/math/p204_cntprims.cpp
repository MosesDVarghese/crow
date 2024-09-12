#include "p204_cntprims.h" // Include the corresponding header
#include <cctype>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Solution::countPrimes(int n) {
  if (n <= 2) {
    return 0;
  }

  vector<int> isPrime(n, 1);

  isPrime[0] = 0;
  isPrime[1] = 0;

  int limit = static_cast<int>(sqrt(n)) + 1;
  for (int i = 2; i <= limit; ++i) {
    if (isPrime[i] == 1) {
      // Mark multiples of i starting from i * i as false
      for (int j = i * i; j < n; j += i) {
        isPrime[j] = 0;
      }
    }
  }

  // Count the number of primes (those marked true)
  int result = 0;
  for (int prime : isPrime) {
    if (prime == 1) {
      ++result;
    }
  }

  return result;
}
