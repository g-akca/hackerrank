#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'makingAnagrams' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. STRING s1
 *  2. STRING s2
 */

int makingAnagrams(string s1, string s2) {
    vector<int> counts(27, 0);
    int del = 0;
    
    for (int i = 0; i < s1.length(); i++) {
        counts[s1[i] - 'a']++;
    }
    
    for (int i = 0; i < s2.length(); i++) {
        counts[s2[i] - 'a']--;
    }
    
    for (int i = 0; i < 27; i++) {
        if (counts[i] != 0) {
            del += abs(counts[i]);
        }
    }
    return del;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
