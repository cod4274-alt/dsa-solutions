/* DSA_PLATFORM_HEADER_V1
 * Problem: Array Problem
 * Unique ID: 100001
 * Difficulty: beginner
 * Date: 2026-07-25
 * Source: DSA Practice Platform
 */

#include <stdio.h>  // For printf, scanf

int main() {
    // Read the number of elements N (0 ≤ N ≤ 10^5)
    int N;
    // Use scanf to read an integer from standard input
    scanf("%d", &N);

    // Use a 64-bit integer to store the sum (max possible sum 10^14 fits in long long)
    // In C, long long is a 64-bit signed integer type, same as C++'s long long
    long long sum = 0;

    // If N > 0, read the N integers one by one
    if (N > 0) {
        // Loop exactly N times to read each element
        for (int i = 0; i < N; ++i) {
            // Temporary variable to hold the current array element
            int x;
            // Read the next integer from standard input
            scanf("%d", &x);

            // Add the current element to the running sum
            sum += x;
        }
    }
    // If N == 0, the second line is absent; sum remains 0 (correct for empty array)

    // Output the total sum followed by a newline
    // Use %lld format specifier for long long in printf
    printf("%lld\n", sum);

    return 0;  // Indicate successful program termination
}