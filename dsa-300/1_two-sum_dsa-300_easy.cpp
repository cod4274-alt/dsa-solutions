/* DSA_PLATFORM_HEADER_V1
 * Problem: Two Sum
 * Unique ID: 1
 * Difficulty: Easy
 * Date: 2026-07-26
 * Source: DSA Practice Platform
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    long long target;
    cin >> target;

    unordered_map<long long, int> mp;

    for (int i = 0; i < N; i++) {
        long long complement = target - nums[i];

        if (mp.find(complement) != mp.end()) {
            int idx1 = mp[complement];
            int idx2 = i;

            if (idx1 < idx2)
                cout << idx1 << " " << idx2;
            else
                cout << idx2 << " " << idx1;

            return 0;
        }

        mp[nums[i]] = i;
    }

    return 0;
}