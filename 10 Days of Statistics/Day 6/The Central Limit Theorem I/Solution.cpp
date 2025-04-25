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
    double std = 15;
    int n = 49;
    double mean = 205;
    int a = 9800;
    
    mean *= n;
    std *= pow(n, 0.5);
    double res = cd_func(mean, std, a);
    cout << setprecision(4) << fixed << res << endl;
    
    return 0;
}
