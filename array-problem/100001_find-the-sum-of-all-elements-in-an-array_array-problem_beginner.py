/* DSA_PLATFORM_HEADER_V1
 * Problem: Array Problem
 * Unique ID: 100001
 * Difficulty: beginner
 * Date: 2026-07-25
 * Source: DSA Practice Platform
 */

import sys  # Import sys for reading from standard input

def main():
    # Read the first line which contains the integer N (number of elements)
    # Using sys.stdin.readline() to read one line at a time
    first_line = sys.stdin.readline()
    # If the input is empty (e.g., EOF), treat N as 0
    if not first_line:
        N = 0
    else:
        # Strip whitespace (newline) and convert to integer
        N = int(first_line.strip())

    # Initialize sum as an integer (Python int is arbitrary precision,
    # so no overflow issues even with 10^14)
    total_sum = 0

    # Only read the second line if N > 0
    if N > 0:
        # Read the second line containing N space-separated integers
        second_line = sys.stdin.readline()
        # If the line exists, split it into tokens and parse each token
        if second_line:
            # Split the line by whitespace (default split handles multiple spaces)
            tokens = second_line.split()
            # Ensure we have at least N tokens (in case of extra spaces, safe)
            # Loop over the first N tokens (in case of more tokens, ignore extras)
            for i in range(N):
                # Convert token to integer and add to total sum
                total_sum += int(tokens[i])
        # If the second line is missing (should not happen for valid input),
        # treat as if no numbers (sum stays 0) – but problem guarantees presence.
    # If N == 0, the loop is skipped, total_sum remains 0 (correct for empty array)

    # Print the total sum followed by a newline
    # Using sys.stdout.write for consistency, but print is also fine
    sys.stdout.write(str(total_sum) + "\n")

# Call the main function when the script is executed
if __name__ == "__main__":
    main()