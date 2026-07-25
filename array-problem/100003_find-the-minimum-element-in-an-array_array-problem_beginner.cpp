/* DSA_PLATFORM_HEADER_V1
 * Problem: Array Problem
 * Unique ID: 100003
 * Difficulty: beginner
 * Date: 2026-07-25
 * Source: DSA Practice Platform
 */

#include <iostream> // for input and output operations

int main() {
    // Read the number of elements in the array
    int N;
    // Prompt is not required: just read directly from stdin
    std::cin >> N; // Read N (1 <= N <= 1e5)

    // We will store the minimum value seen so far.
    // Since the array has at least one element, we can initialize with the first element.
    // But we need to read it first.
    int min_val; // variable to hold the current minimum

    // Read the first element to initialize min_val
    // This also consumes the first integer from the second line of input
    std::cin >> min_val;

    // Now iterate over the remaining N-1 elements
    for (int i = 1; i < N; ++i) { // i counts how many elements we have processed after the first
        // Temporary variable to store the current element
        int current;
        std::cin >> current; // read one integer from standard input

        // Update min_val if current element is smaller
        if (current < min_val) {
            min_val = current; // found a new minimum
        }
        // else: current is not smaller, no change needed
    }

    // After processing all elements, output the minimum value
    std::cout << min_val << std::endl; // print the result followed by newline

    // Return 0 to indicate successful completion
    return 0;
}