#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    string bin = "";
    while (n != 0) {
        int rem = n % 2;
        bin = to_string(rem) + bin;
        n = floor(n / 2);
    }
    
    int max_cons = 1;
    int cons = 1;
    for (int i = 0; i < bin.length() - 1; i++) {
        if (bin[i] == '1' && bin[i + 1] == '1') {
            cons++;
            if (cons > max_cons) {
                max_cons = cons;
            }
        }
        else {
            cons = 1;
        }
    }
    cout << max_cons << endl;

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
