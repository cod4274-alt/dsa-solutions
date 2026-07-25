/* DSA_PLATFORM_HEADER_V1
 * Problem: Array Problem
 * Unique ID: 100002
 * Difficulty: beginner
 * Date: 2026-07-25
 * Source: DSA Practice Platform
 */

#include <iostream>
#include <vector>
#include <algorithm> // for std::max, but we won't use it to showcase manual logic
#include <climits>   // for INT_MIN

int main() {
    // Step 1: Read the number of elements in the array
    int N;
    // Read the first line containing N
    std::cin >> N;

    // Step 2: Create a vector to store the array elements
    // Using vector allows dynamic sizing and easy iteration
    std::vector<int> arr(N);
    
    // Step 3: Read the second line containing N space-separated integers
    // Loop through each element and store it in the vector
    for (int i = 0; i < N; ++i) {
        // Read the i-th element from standard input
        std::cin >> arr[i];
    }

    // Step 4: Initialize the maximum variable to the smallest possible integer
    // This ensures that any element from the array will be greater than or equal to this initial value
    // Using INT_MIN from <climits> is safe because all array elements are >= -10^5
    int max_element = INT_MIN;

    // Step 5: Perform a linear scan to find the maximum element
    // This is the optimal O(N) solution with O(1) auxiliary space (just one variable)
    // We iterate through each element of the array exactly once
    for (int i = 0; i < N; ++i) {
        // Compare the current element with the current maximum
        // If the current element is greater, update the maximum
        if (arr[i] > max_element) {
            // Update max_element to the larger value found
            max_element = arr[i];
        }
        // Note: If arr[i] is equal to max_element, we don't need to do anything
        // because we only care about the maximum value, not its position or count
    }

    // Step 6: Output the maximum element found
    // According to the problem, we output a single integer
    std::cout << max_element << std::endl;

    // Step 7: Program ends successfully
    // Return 0 indicates to the operating system that the program completed without errors
    return 0;
}