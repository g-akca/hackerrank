#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ret_day, ret_month, ret_year;
    int due_day, due_month, due_year;
    cin >> ret_day >> ret_month >> ret_year;
    cin >> due_day >> due_month >> due_year;
    
    if (ret_year > due_year) {
        cout << 10000;
    }
    else if (ret_year == due_year) {
        if (ret_month == due_month && ret_day > due_day) {
            cout << 15 * (ret_day - due_day);
        }
        else if (ret_month > due_month) {
            cout << 500 * (ret_month - due_month);
        }
        else {
            cout << 0;
        }
    }
    else {
        cout << 0;
    }
      
    return 0;
}
