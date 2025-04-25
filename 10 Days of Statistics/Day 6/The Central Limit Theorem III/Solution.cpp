#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    double std = 80;
    int n = 100;
    double mean = 500;
    double z = 1.96;
    
    double std_sample = std / pow(n, 0.5);
    double res1 = mean - std_sample * z;
    double res2 = mean + std_sample * z;
    cout << setprecision(2) << fixed << res1 << endl << res2 << endl;
    
    return 0;
}
