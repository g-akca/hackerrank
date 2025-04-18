#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
    string s = "";
    int q;
    cin >> q;
    int operation;
    stack<string> prev;
    
    for (int i = 0; i < q; i++) {
        cin >> operation;
        if (operation == 1) {
            prev.push(s);
            string var;
            cin >> var;
            s += var;
        }
        else if (operation == 2) {
            prev.push(s);
            int var;
            cin >> var;
            s.replace(s.size() - var, var, "");
        }
        else if (operation == 3) {
            int var;
            cin >> var;
            cout << s[var - 1] << endl;
        }
        else {
            s = prev.top();
            prev.pop();
        }
    }
    
    return 0;
}
