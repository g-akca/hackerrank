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
    
    double result = pow(q, 4) * p;
    
    cout << setprecision(3) << fixed << result << endl;
     
    return 0;
}
