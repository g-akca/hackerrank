#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <iomanip>
using namespace std;

vector<double> getRanks(vector<double> arr, double N) {
    vector<pair<double, int>> v;
    for (int i = 0; i < N; i++) {
        v.push_back({arr[i], i});
    }
    sort(v.begin(), v.end());
    
    vector<double> ranks(N);
    for (int i = 0; i < N;) {
        int j = i;
        while (j + 1 < N && v[j].first == v[j+1].first) {
            j++;
        }
        double avg = (i + j + 2) / 2.0;
        for (int k = i; k <= j; k++) {
            ranks[v[k].second] = avg;
        }
        i = j + 1;
    }
    return ranks;
}

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
    
    vector<double> rank_X = getRanks(X, n);
    vector<double> rank_Y = getRanks(Y, n);
    
    double mean_X = accumulate(rank_X.begin(), rank_X.end(), 0) / n;
    double mean_Y = accumulate(rank_Y.begin(), rank_Y.end(), 0) / n;
    
    double cov = covariance(rank_X, rank_Y, mean_X, mean_Y, n);
    
    double std_X = stdDev(rank_X, mean_X, n);
    double std_Y = stdDev(rank_Y, mean_Y, n);
    
    double result = cov / (std_X * std_Y);
    cout << setprecision(3) << fixed << result << endl;
    
    return 0;
}
