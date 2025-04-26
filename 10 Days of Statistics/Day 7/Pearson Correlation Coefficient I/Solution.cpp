#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

double covariance(vector<double> X, vector<double> Y, double mean_X, double mean_Y, double N) {
    double cov = 0;
    for (int i = 0; i < N; i++) {
        cov += (X[i] - mean_X) * (Y[i] - mean_Y);
    }
    return cov / N;
}

double stdDev(vector<double> arr, double mean, double N) {
    double std = 0;
    
    for (int i = 0; i < N; i++) {
        std += pow(arr[i] - mean, 2);
    }
    
    std = pow(std / N, 0.5);
    return std;
}

int main() {
    double n, a;
    vector<double> X;
    vector<double> Y;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        X.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        cin >> a;
        Y.push_back(a);
    }
    
    double mean_X = accumulate(X.begin(), X.end(), 0) / n;
    double mean_Y = accumulate(Y.begin(), Y.end(), 0) / n;
    
    double cov = covariance(X, Y, mean_X, mean_Y, n);
    
    double std_X = stdDev(X, mean_X, n);
    double std_Y = stdDev(Y, mean_Y, n);
    
    double result = cov / (std_X * std_Y);
    cout << setprecision(3) << fixed << result << endl;
    
    return 0;
}
