#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int binomial_coeff(int n, int k) {
    int res = 1;
    for (int i = 1; i <= k; i++) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

int main() {
    double p = 1.09 / 2.09;
    double q = 1 - p;
    double result = 0.0;

    for (int k = 3; k <= 6; k++) {
        int coeff = binomial_coeff(6, k);
        result += coeff * pow(p, k) * pow(q, 6 - k);
    }

    cout << setprecision(3) << fixed << result << endl;
    return 0;
}
