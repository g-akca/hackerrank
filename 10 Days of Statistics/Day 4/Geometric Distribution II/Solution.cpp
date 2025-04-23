#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    double p = 1.0 / 3.0;
    double q = 1 - p;
    double result = 0;
    
    for (int i = 1; i <= 5; i++) {
        result += pow(q, i - 1) * p;
    }
    
    cout << setprecision(3) << fixed << result << endl;
     
    return 0;
}
