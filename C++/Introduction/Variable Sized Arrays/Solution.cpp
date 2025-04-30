#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, k;
    cin >> n >> q;
    
    vector<vector<int>> all_vectors;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        vector<int> a;
        int temp;
        for (int j = 0; j < k; j++) {
            cin >> temp;
            a.push_back(temp);
        }
        all_vectors.push_back(a);
    }
    
    for (int i = 0; i < q; i++) {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        cout << all_vectors[temp1][temp2] << endl;
    }
    
    return 0;
}
