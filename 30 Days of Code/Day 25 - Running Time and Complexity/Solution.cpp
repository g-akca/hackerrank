#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin >> T;
    
    int n;
    for (int i = 0; i < T; i++) {
        cin >> n;
        bool flag = false;
        
        if (n == 1) {
            flag = true;
        }
        else {
            for (int j = 2; j * j <= n; j++) {
                if (n % j == 0) {
                    flag = true;
                    break;
                }
            }
        }
        
        if (flag) {
            cout << "Not prime" << endl;
        }
        else {
            cout << "Prime" << endl;
        }
    }  
    return 0;
}
