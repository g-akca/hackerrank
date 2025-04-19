#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <map>
using namespace std;

double mean(int N, vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }
    
    return (double)sum / N;
}

double median(int N, vector<int> arr) {
    sort(arr.begin(), arr.end());
    if (N % 2 == 0) {
        return (arr[N / 2] + arr[(N / 2) - 1]) / 2.0;
    }
    else {
        return arr[(N - 1) / 2];
    }
}

int mode(int N, vector<int> arr) {
    map<int, int> counts;
    int max = arr[0];
    
    for (int i = 0; i < N; i++) {
        counts[arr[i]]++;
        if (counts[arr[i]] > counts[max]) {
            max = arr[i];
        }
        else if (counts[arr[i]] == counts[max] && arr[i] < max) {
            max = arr[i];
        }
    }
    
    return max;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    
    cout << setprecision(1) << fixed << mean(N, arr) << endl << median(N, arr) << endl << mode(N, arr);
    return 0;
}
