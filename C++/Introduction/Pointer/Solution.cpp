#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b) {
    int sum = *a + *b;
    *b = abs(*a - *b);
    *a = sum;
}

int main() {
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl << b << endl;
    return 0;
}
