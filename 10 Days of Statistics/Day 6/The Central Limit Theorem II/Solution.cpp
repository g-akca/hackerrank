#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double cd_func(double m, double sd, double a){
    double res = erf((a - m) / (sd * pow(2.0, 0.5)));
    return 0.5 * (1 + res);
}

int main() {
    double std = 2;
    int n = 100;
    double mean = 2.4;
    int a = 250;
    
    mean *= n;
    std *= pow(n, 0.5);
    double res = cd_func(mean, std, a);
    cout << setprecision(4) << fixed << res << endl;
    
    return 0;
}
