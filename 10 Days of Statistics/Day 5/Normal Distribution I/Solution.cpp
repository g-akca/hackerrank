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
    double mean = 20;
    double sd = 2;
    double x = 19.5;
    double y = 20;
    double z = 22;
    
    double p1 = cd_func(mean, sd, x);
    double p2 = cd_func(mean, sd, z) - cd_func(mean, sd, y);
    
    cout << setprecision(3) << fixed << p1 << endl << p2 << endl;
    return 0;
}
