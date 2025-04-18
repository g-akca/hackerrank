#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    string S;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> S;
        string even = "";
        string odd = "";
        for (int j = 0; j < S.length(); j++) {
            if (j % 2 == 0) {
                even.push_back(S[j]);
            }
            else {
                odd.push_back(S[j]);
            }
        }
        cout << even << " " << odd << endl;
    }
    return 0;
}
