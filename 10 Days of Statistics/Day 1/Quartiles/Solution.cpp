#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'quartiles' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

vector<int> quartiles(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int N = arr.size();
    int q1 = 0;
    int q2 = 0;
    int q3 = 0;
    if (N % 2 == 0) {
        if (N % 4 == 0) {
            q1 += (arr[(N / 4) - 1] + arr[N / 4]) / 2;
            q3 += (arr[(3 * N / 4) - 1] + arr[3 * N / 4]) / 2;
        }
        else {
            q1 = arr[((N / 2) - 1) / 2];
            q3 = arr[(N / 2) + ((N - 2) / 4)];
        }
        q2 += (arr[(N / 2) - 1] + arr[N / 2]) / 2;
    }
    else {
        if ((N - 1) % 4 == 0) {
            q1 += (arr[((N - 1) / 4) - 1] + arr[(N - 1) / 4]) / 2;
            q3 += (arr[3 * (N - 1) / 4] + arr[(3 * (N - 1) / 4) + 1]) / 2;
        }
        else {
            q1 = arr[(((N - 1) / 2) - 1) / 2];
            q3 = arr[((N - 1) / 2) + ((N + 1) / 4)];
        }
        q2 += arr[(N - 1) / 2];
    }
    
    return {q1, q2, q3};
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string data_temp_temp;
    getline(cin, data_temp_temp);

    vector<string> data_temp = split(rtrim(data_temp_temp));

    vector<int> data(n);

    for (int i = 0; i < n; i++) {
        int data_item = stoi(data_temp[i]);

        data[i] = data_item;
    }

    vector<int> res = quartiles(data);

    for (size_t i = 0; i < res.size(); i++) {
        fout << res[i];

        if (i != res.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

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
