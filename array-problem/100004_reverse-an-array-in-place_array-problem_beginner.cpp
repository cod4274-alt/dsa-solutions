/* DSA_PLATFORM_HEADER_V1
 * Problem: Array Problem
 * Unique ID: 100004
 * Difficulty: beginner
 * Date: 2026-07-26
 * Source: DSA Practice Platform
 */

#include <iostream>    // For input/output operations (cin, cout)
#include <vector>      // For using std::vector as our array container
#include <algorithm>   // For std::swap (optional, but cleaner; we can also implement swap manually)

int main() {
    // Optimize input/output speed for competitive programming
    // By default, cin and cout are tied to stdio and each other, which is slower
    std::ios::sync_with_stdio(false); // Disable synchronization with C stdio for faster cin/cout
    std::cin.tie(nullptr);            // Untie cin from cout so we don't flush cout before each cin operation

    // Step 1: Read the integer N (size of the array)
    int N;                 // Variable to store the number of elements
    std::cin >> N;         // Read the first integer from input

    // Step 2: Read the array elements into a vector
    // We use std::vector<int> because it automatically manages memory and allows dynamic size
    // The space used by the vector is O(N) and is necessary to store the input – this is NOT counted as extra space
    std::vector<int> arr(N); // Create a vector of size N to hold the integers
    for (int i = 0; i < N; ++i) { // Loop from i=0 to i=N-1 to read each element
        std::cin >> arr[i];       // Read the i-th integer directly into the vector
    }

    // Step 3: Reverse the array in-place using the two-pointer technique
    // We use two indices: left starts at the beginning, right starts at the end
    // We swap elements at left and right, then move left forward and right backward
    // This continues until left meets or passes right (i.e., the middle is reached)
    // This requires O(1) extra space (only two integer variables and a temporary for swapping)
    int left = 0;          // Index pointing to the first element of the array (0-based)
    int right = N - 1;     // Index pointing to the last element of the array (0-based)

    // Loop while left is less than right (when left >= right, we've reversed the entire array)
    while (left < right) {
        // Swap the elements at positions left and right
        // We use std::swap from <algorithm> for clarity and safety; it's O(1) and uses a temporary variable internally
        // Alternatively, we could manually swap using a third variable: int temp = arr[left]; arr[left] = arr[right]; arr[right] = temp;
        std::swap(arr[left], arr[right]);

        // Move the pointers toward the center
        left++;  // Increment left pointer (move forward)
        right--; // Decrement right pointer (move backward)
    }
    // After the while loop, the array is reversed in-place

    // Step 4: Output the reversed array
    // We print all elements separated by spaces, followed by a newline
    for (int i = 0; i < N; ++i) {     // Loop through each index from 0 to N-1
        std::cout << arr[i];          // Print the current element
        if (i < N - 1) {              // If this is not the last element
            std::cout << " ";         // Print a space separator after the element
        }
    }
    std::cout << std::endl;           // Print a newline at the end for clean output

    return 0; // Indicate successful execution
}