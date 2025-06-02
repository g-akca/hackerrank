#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

bool isKaprekar(long n) {
    long b = pow(n, 2);
    string s = to_string(b);
    int d = to_string(n).length();

    string left = s.substr(0, s.length() - d);
    string right = s.substr(s.length() - d, d);
    long l = (left.empty()) ? 0 : stol(left);
    long r = stol(right);
    
    if (l + r == n) {
        return true;
    }
    
    return n == 1;
}

void kaprekarNumbers(int p, int q) {
    bool none = true;
    for (int i = p; i <= q; i++) {
        if (isKaprekar(i)) {
            cout << i << " ";
            none = false;
        }
    }
    
    if (none) {
        cout << "INVALID RANGE" << endl;
    }
}

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

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
