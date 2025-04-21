#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'interQuartile' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY values
 *  2. INTEGER_ARRAY freqs
 */

void interQuartile(vector<int> values, vector<int> freqs) {
    // Print your answer to 1 decimal place within this function
    vector<int> S;
    for (int i = 0; i < values.size(); i++) {
        for (int j = 0; j < freqs[i]; j++) {
            S.push_back(values[i]);
        }
    }
    
    sort(S.begin(), S.end());
    int N = S.size();
    double q1;
    double q3;
    if (N % 2 == 0) {
        if (N % 4 == 0) {
            q1 = (S[(N / 4) - 1] + S[N / 4]) / 2;
            q3 = (S[(3 * N / 4) - 1] + S[3 * N / 4]) / 2;
        }
        else {
            q1 = S[((N / 2) - 1) / 2];
            q3 = S[(N / 2) + ((N - 2) / 4)];
        }
    }
    else {
        if ((N - 1) % 4 == 0) {
            q1 = (S[((N - 1) / 4) - 1] + S[(N - 1) / 4]) / 2;
            q3 = (S[3 * (N - 1) / 4] + S[(3 * (N - 1) / 4) + 1]) / 2;
        }
        else {
            q1 = S[(((N - 1) / 2) - 1) / 2];
            q3 = S[((N - 1) / 2) + ((N + 1) / 4)];
        }
    }
    
    cout << setprecision(1) << fixed << q3 - q1 << endl;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string val_temp_temp;
    getline(cin, val_temp_temp);

    vector<string> val_temp = split(rtrim(val_temp_temp));

    vector<int> val(n);

    for (int i = 0; i < n; i++) {
        int val_item = stoi(val_temp[i]);

        val[i] = val_item;
    }

    string freq_temp_temp;
    getline(cin, freq_temp_temp);

    vector<string> freq_temp = split(rtrim(freq_temp_temp));

    vector<int> freq(n);

    for (int i = 0; i < n; i++) {
        int freq_item = stoi(freq_temp[i]);

        freq[i] = freq_item;
    }

    interQuartile(val, freq);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
