#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    int temp, temp2;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    
    cin >> temp;
    v.erase(v.begin() + temp - 1);
    cin >> temp >> temp2;
    v.erase(v.begin() + temp - 1, v.begin() + temp2 - 1);
    
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}
