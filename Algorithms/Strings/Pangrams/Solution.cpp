#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    vector<int> counts(26, 0);
    
    for (int i = 0; i < s.length(); i++) {
        counts[tolower(s[i]) - 'a']++;
    }
    
    if (find(counts.begin(), counts.end(), 0) != counts.end()) {
        return "not pangram";
    }
    else {
        return "pangram";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
