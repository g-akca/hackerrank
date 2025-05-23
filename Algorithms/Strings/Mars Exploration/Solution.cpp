#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'marsExploration' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int marsExploration(string s) {
    int changes = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((i % 3 == 0 || i % 3 == 2) && s[i] != 'S') {
            changes++;
        }
        else if (i % 3 == 1 && s[i] != 'O') {
            changes++;
        }
    }
    return changes;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
