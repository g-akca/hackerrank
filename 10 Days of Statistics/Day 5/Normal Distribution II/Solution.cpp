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
    double mean = 70;
    double sd = 10;
    double x = 80;
    double y = 60;
    
    double p1 = 100 - cd_func(mean, sd, x) * 100;
    double p3 = cd_func(mean, sd, y) * 100;
    double p2 = 100 - p3;
    
    cout << setprecision(2) << fixed << p1 << endl << p2 << endl << p3 << endl;
    return 0;
}
