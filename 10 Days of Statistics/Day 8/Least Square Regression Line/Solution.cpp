#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    vector<vector<int>> points = {{95, 85}, {85, 95}, {80, 70}, {70, 65}, {60, 70}};
    
    double n = 5;
    double total_x = 0, total_y = 0, square_x = 0, xy = 0;
    
    for (int i = 0; i < n; i++) {
        total_x += points[i][0];
        total_y += points[i][1];
        square_x += pow(points[i][0], 2);
        xy += points[i][0] * points[i][1];
    }
    
    double mean_x = total_x / n;
    double mean_y = total_y / n;
    
    double b = (n * xy - total_x * total_y) / (n * square_x - pow(total_x, 2));
    double a = mean_y - b * mean_x;
    
    double res = a + b * 80;
    cout << setprecision(3) << fixed << res << endl;
     
    return 0;
}
