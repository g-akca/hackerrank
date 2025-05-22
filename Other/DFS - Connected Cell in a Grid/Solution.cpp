#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maxRegion' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY grid as parameter.
 */

int regionSize(int i, int j, vector<vector<int>>& grid) {
    if (i < 0 || j < 0 || grid.size() <= i || grid[0].size() <= j || grid[i][j] == 0) {
        return 0;
    }
    
    int size = 1;
    grid[i][j] = 0;
    
    size += regionSize(i - 1, j - 1, grid);
    size += regionSize(i - 1, j, grid);
    size += regionSize(i - 1, j + 1, grid);
    size += regionSize(i, j - 1, grid);
    size += regionSize(i, j + 1, grid);
    size += regionSize(i + 1, j - 1, grid);
    size += regionSize(i + 1, j, grid);
    size += regionSize(i + 1, j + 1, grid);
    
    return size;
}

int maxRegion(vector<vector<int>> grid) {
    int max = 0;
    
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            int size = regionSize(i, j, grid);
            if (size > max) {
                max = size;
            }
        }
    }
    
    return max;
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

    vector<vector<int>> grid(n);

    for (int i = 0; i < n; i++) {
        grid[i].resize(m);

        string grid_row_temp_temp;
        getline(cin, grid_row_temp_temp);

        vector<string> grid_row_temp = split(rtrim(grid_row_temp_temp));

        for (int j = 0; j < m; j++) {
            int grid_row_item = stoi(grid_row_temp[j]);

            grid[i][j] = grid_row_item;
        }
    }

    int res = maxRegion(grid);

    fout << res << "\n";

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
