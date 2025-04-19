#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    return max(a, max(b, max(c, d)));
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;  
    int max = max_of_four(a, b, c, d);
    cout << max;
    return 0;
}
