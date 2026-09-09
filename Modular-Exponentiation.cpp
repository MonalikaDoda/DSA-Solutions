#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
    long long ans = 1;
    long long base = x;

    while (n > 0) {

        if (n & 1) {
            ans = (ans * base) % m;
        }

        base = (base * base) % m;
        n = n / 2;
    }

    return ans;
}
