// Given a string ‘S’ (composed of digits) and an integer ‘X”, the task is to count all the sub-strings of ‘S’ that satisfy the following conditions:  
// The sub-string must not begin with the digit ‘0’.
// And the numeric number it represents must be greater than ‘X’.

// Count number of substrings with numeric value greater than X
#include <bits/stdc++.h>
using namespace std;
 
// Function that counts
// valid sub-strings
int count(string S, int X)
{
    int count = 0;
    const int N = S.length();
    for (int i = 0; i < N; ++i) {
 
        // Only take those numbers
        // that do not start with '0'.
        if (S[i] != '0') {
            for (int len = 1; (i + len) <= N; ++len) {
 
                // converting the sub-string
                // starting from index 'i'
                // and having length 'len' to int
                // and checking if it is greater
                // than X or not
                if (stoi(S.substr(i, len)) > X)
                    count++;
            }
        }
    }
    return count;
}
 
// Driver code
int main()
{
 
    string S = "2222";
    int X = 97;
    cout << count(S, X);
 
    return 0;
}
