#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin >> n;
    string name;
    int phone;
    map<string, int> book;
    for (int i = 0; i < n; i++) {
        cin >> name >> phone;
        book[name] = phone;
    }
    
    while (cin >> name) {
        if (book[name]) {
            cout << name << "=" << book[name] << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}
