#include <iostream>
#include <climits>
using namespace std;

int mySqrt(int x) {
    long long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r;
}

int main() {
    for (long long x=0; x<=INT_MAX; ++x) {
        long long r = mySqrt(x);
        if (r<0 || r*r > x || (r+1)*(r+1) <= x)
            cout << "false: " << x << " " << r << endl;
        if (x % 10000000 == 0)
            cout << x << endl;
    }
    cout << "all checked" << endl;
}