#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map<string, int> marks; 
    int n;
    cin >> n;
    
    int op, mark;
    string name;
    for (int i = 0; i < n; i++) {
        cin >> op >> name;
        if (op == 1) {
            cin >> mark;
            marks[name] += mark;
        }
        else if (op == 2) {
            marks.erase(name);
        }
        else {
            cout << marks[name] << endl;
        }
    }
    
    return 0;
}
