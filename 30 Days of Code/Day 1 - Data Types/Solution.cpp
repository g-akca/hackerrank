#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    int a;
    double b;
    string c;
    cin >> a >> b;
    cin.ignore();
    getline(cin, c);
    cout << i + a << endl << fixed << setprecision(1) << d + b << endl << s + c << endl;

    return 0;
}