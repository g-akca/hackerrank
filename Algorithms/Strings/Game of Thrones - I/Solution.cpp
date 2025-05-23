#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    vector<int> counts(27, 0);
    for (int i = 0; i < s.length(); i++) {
        counts[s[i] - 'a']++;
    }
    
    int odd = 0;
    for (int i = 0; i < 27; i++) {
        if (counts[i] % 2 != 0) {
            if (s.length() % 2 == 0) {
                return "NO";
            }
            else {
                odd++;
                if (odd > 1) {
                    return "NO";
                }
            }
        }
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
