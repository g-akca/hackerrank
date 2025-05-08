#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    vector<int> v;
    int temp;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    
    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> temp;
        auto it = lower_bound(v.begin(), v.end(), temp);
        if (*it == temp) {
            cout << "Yes " << it - v.begin() + 1 << endl;
        }
        else {
            cout << "No " << it - v.begin() + 1 << endl;
        }
    }
    
    return 0;
}
