#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    double meanX = 0.88;
    double meanY = 1.55;
    
    double X = meanX + pow(meanX, 2);
    double Y = meanY + pow(meanY, 2);
    double costA = 160 + 40 * X;
    double costB = 128 + 40 * Y;
    
    cout << setprecision(3) << fixed << costA << endl << costB << endl;
      
    return 0;
}
