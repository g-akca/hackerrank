#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <unordered_map>
using namespace std;


int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_map<int, int> to_delete;
    int n, v;
    cin >> n;
    string op;

    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op == "1") {
            cin >> v;
            pq.push(v);
        }
        else if (op == "2") {
            cin >> v;
            to_delete[v]++;
        }
        else {
            while (!pq.empty() && to_delete[pq.top()]) {
                to_delete[pq.top()]--;
                pq.pop();
            }
            if (!pq.empty()) cout << pq.top() << endl;
        }
    }

    return 0;
}
