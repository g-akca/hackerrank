#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'theLoveLetterMystery' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int theLoveLetterMystery(string s) {
    int n = s.length();
    int op = 0;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            if (s[i] - 'a' > s[n - i - 1] - 'a') {
                int diff = (s[i] - 'a') - (s[n - i - 1] - 'a');
                op += diff;
            }
            else {
                int diff = (s[n - i - 1] - 'a') - (s[i] - 'a');
                op += diff;
            }
        }
    }
    return op;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
