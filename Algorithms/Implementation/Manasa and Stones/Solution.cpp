#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'stones' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER a
 *  3. INTEGER b
 */

vector<int> stones(int n, int a, int b) {
    n--;
    vector<int> last_stone;
    if (a == b) {
        last_stone.push_back(n * a);
    }
    else if (a < b) {
        for (int i = n * a; i <= n * b; i += b - a) {
            last_stone.push_back(i);
        }
    }
    else {
        for (int i = n * b; i <= n * a; i += a - b) {
            last_stone.push_back(i);
        }
    }
    return last_stone;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string T_temp;
    getline(cin, T_temp);

    int T = stoi(ltrim(rtrim(T_temp)));

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string a_temp;
        getline(cin, a_temp);

        int a = stoi(ltrim(rtrim(a_temp)));

        string b_temp;
        getline(cin, b_temp);

        int b = stoi(ltrim(rtrim(b_temp)));

        vector<int> result = stones(n, a, b);

        for (size_t i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
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
