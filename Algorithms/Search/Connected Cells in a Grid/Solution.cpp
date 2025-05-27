#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'connectedCell' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY matrix as parameter.
 */

int regionSize(int i, int j, vector<vector<int>>& matrix) {
    if (i >= matrix.size() || j >= matrix[0].size() || matrix[i][j] == 0) {
        return 0;
    }
    
    matrix[i][j] = 0;
    int size = 1;
    
    size += regionSize(i - 1, j - 1, matrix);
    size += regionSize(i - 1, j, matrix);
    size += regionSize(i - 1, j + 1, matrix);
    size += regionSize(i, j - 1, matrix);
    size += regionSize(i, j + 1, matrix);
    size += regionSize(i + 1, j - 1, matrix);
    size += regionSize(i + 1, j, matrix);
    size += regionSize(i + 1, j + 1, matrix);
    
    return size;
}

int connectedCell(vector<vector<int>> matrix) {
    int maxRegion = 0;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            maxRegion = max(maxRegion, regionSize(i, j, matrix));
        }
    }
    return maxRegion;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string m_temp;
    getline(cin, m_temp);

    int m = stoi(ltrim(rtrim(m_temp)));

    vector<vector<int>> matrix(n);

    for (int i = 0; i < n; i++) {
        matrix[i].resize(m);

        string matrix_row_temp_temp;
        getline(cin, matrix_row_temp_temp);

        vector<string> matrix_row_temp = split(rtrim(matrix_row_temp_temp));

        for (int j = 0; j < m; j++) {
            int matrix_row_item = stoi(matrix_row_temp[j]);

            matrix[i][j] = matrix_row_item;
        }
    }

    int result = connectedCell(matrix);

    fout << result << "\n";

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
