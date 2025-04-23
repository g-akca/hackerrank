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
    double p = 12.0 / 100.0;
    double q = 1 - p;
    double result1 = 0;
    double result2 = 0;

    for (int k = 0; k <= 2; k++) {
        int coeff = binomial_coeff(10, k);
        result1 += coeff * pow(p, k) * pow(q, 10 - k);
    }
    
    for (int k = 2; k <= 10; k++) {
        int coeff = binomial_coeff(10, k);
        result2 += coeff * pow(p, k) * pow(q, 10 - k);
    }

    cout << setprecision(3) << fixed << result1 << endl << result2 << endl;
    return 0;
}
