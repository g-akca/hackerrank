#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int factorial(int num) {
    if (num == 1) {
        return 1;
    }
    
    return factorial(num - 1) * num;
}

int main() {
    double m = 2.5;
    int k = 5;
    
    double result = pow(m, k) * pow(2.71828, -m) / factorial(k);
    cout << setprecision(3) << fixed << result << endl;
      
    return 0;
}
