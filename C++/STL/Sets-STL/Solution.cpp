#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    int n, op, x;
    cin >> n;
    
    set<int> s;
    
    for (int i = 0; i < n; i++) {
        cin >> op >> x;
        
        if (op == 1) {
            s.insert(x);
        }
        else if (op == 2) {
            s.erase(x);
        }
        else {
            if (s.find(x) != s.end()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
