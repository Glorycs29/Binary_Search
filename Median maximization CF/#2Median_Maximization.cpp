// Let's run a binary search for the answer. This will work because if the answer M
//  then we can decrease the median element by d
//  and add d
//  to the max element, so we can get any median element from 1
//  to M
// , but we can't get more than M
// . In the binary search we will use the greedy technique. All numbers less than the median can be 0
//  and all numbers from the median should be at least M
// . So there are m=⌊n2⌋+1
//  numbers and each of them should be at least M
//  and we find the M
//  using the binary search. Number M
//  is reachable if M⋅m≤s
//  because we can add s−M⋅m
//  to the maximal number and the median will be M
// . Otherwise, the median element can not be M

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T --> 0) {
        long long n, s;
        cin >> n >> s;
        long long left = 0, right = s + 1;
        while (right - left > 1) {
            long long M = (left + right) / 2;
            long long m = n / 2 + 1;
            if (m * M <= s) {
                left = M;
            } else {
                right = M;
            }
        }
        cout << left << '\n';
    }
    return 0;
}
