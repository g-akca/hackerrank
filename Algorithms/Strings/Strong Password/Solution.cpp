#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";

    int required = 0;
    
    if (none_of(password.begin(), password.end(), [&](char c) { return numbers.find(c, 0) != string::npos; })) {
        required++;
    }
    if (none_of(password.begin(), password.end(), [&](char c) { return lower_case.find(c, 0) != string::npos; })) {
        required++;
    }
    if (none_of(password.begin(), password.end(), [&](char c) { return upper_case.find(c, 0) != string::npos; })) {
        required++;
    }
    if (none_of(password.begin(), password.end(), [&](char c) { return special_characters.find(c, 0) != string::npos; })) {
        required++;
    }
    while (n + required < 6) {
        required++;
    }
    
    return required;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

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
