#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'encryption' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string encryption(string s) {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int n = s.length(), rows = floor(sqrt(n)), columns = ceil(sqrt(n));
    if (rows * columns < n) rows++;
    
    string res;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            int index = j * columns + i;
            if (index < n) res += s[index];
        }
        res += " ";
    }
    
    return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
