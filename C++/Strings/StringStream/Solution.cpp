#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    char ch;
    int a;
    vector<int> integers;
    
    while (ss >> a) {
        integers.push_back(a);
        ss >> ch;
    }
    
    return integers;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << endl;
    }
    
    return 0;
}
