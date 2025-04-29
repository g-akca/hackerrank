#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'prims' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY edges
 *  3. INTEGER start
 */

int prims(int n, vector<vector<int>> edges, int start) {
    vector<bool> unvisited(n + 1, true);
    vector<int> keys(n + 1, 100001);
    keys[start] = 0;
    int total_weight = 0;
    
    for (int j = 0; j < n; j++) {
        int current_min = 100001;
        int current_node;
        for (int i = 1; i <= n; i++) {
            if (keys[i] < current_min && unvisited[i]) {
                current_min = keys[i];
                current_node = i;
            }
        }
        
        for (int i = 0; i < edges.size(); i++) {
            if (edges[i][0] == current_node && unvisited[edges[i][1]]) {
                keys[edges[i][1]] = min(edges[i][2], keys[edges[i][1]]);
            }
            else if (edges[i][1] == current_node && unvisited[edges[i][0]]) {
                keys[edges[i][0]] = min(edges[i][2], keys[edges[i][0]]);
            }
        }
        total_weight += keys[current_node];
        unvisited[current_node] = false;
    }
    
    return total_weight;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int m = stoi(first_multiple_input[1]);

    vector<vector<int>> edges(m);

    for (int i = 0; i < m; i++) {
        edges[i].resize(3);

        string edges_row_temp_temp;
        getline(cin, edges_row_temp_temp);

        vector<string> edges_row_temp = split(rtrim(edges_row_temp_temp));

        for (int j = 0; j < 3; j++) {
            int edges_row_item = stoi(edges_row_temp[j]);

            edges[i][j] = edges_row_item;
        }
    }

    string start_temp;
    getline(cin, start_temp);

    int start = stoi(ltrim(rtrim(start_temp)));

    int result = prims(n, edges, start);

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
