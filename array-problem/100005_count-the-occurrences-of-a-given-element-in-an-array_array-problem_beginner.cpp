/* DSA_PLATFORM_HEADER_V1
 * Problem: Array Problem
 * Unique ID: 100005
 * Difficulty: beginner
 * Date: 2026-07-26
 * Source: DSA Practice Platform
 */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // We'll read N, then the array elements, then the target.
    // Using int for all values as per constraints.
    
    // Step 1: Read the size of the array
    int N;
    cin >> N;  // N is between 1 and 20 (inclusive) per constraints
    
    // Step 2: Read the array elements into a vector of size N
    vector<int> arr(N);  // allocate vector of N integers
    for (int i = 0; i < N; i++) {
        cin >> arr[i];  // read each element, arr[i] is between -1000 and 1000
    }
    
    // Step 3: Read the target value
    int target;
    cin >> target;  // target is between -1000 and 1000
    
    // Step 4: Count occurrences of target in arr
    int count = 0;  // O(1) auxiliary space: only one integer variable
    for (int i = 0; i < N; i++) {  // O(N) time: we must examine every element
        if (arr[i] == target) {    // compare each element to target
            count++;               // increment count when match found
        }
    }
    
    // Step 5: Output the result
    cout << count << endl;  // single integer output, followed by newline
    
    return 0;  // successful termination
}