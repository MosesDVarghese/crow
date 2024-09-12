#include "p013_rmntoint.h" // Include the corresponding header
#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int Solution::romanToInt(const string &s) {
    unordered_map<char, int> roman_map = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;

    for (size_t i = 0; i < s.length(); ++i) {
        int curr_value = roman_map[s[i]];

        if (i < s.length() - 1 && curr_value < roman_map[s[i + 1]]) {
            result -= curr_value;
        } else {
            result += curr_value;
        }
    }

    return result;
}
