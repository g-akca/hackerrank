#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'countInversions' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

long merge(vector<int>& arr, int begin, int mid, int end) {
    long inversions = 0;
    int N1 = mid - begin + 1;
    int N2 = end - mid;
    
    vector<int> left(N1);
    vector<int> right(N2);
    
    for (int i = 0; i < N1; i++) {
        left[i] = arr[begin + i];
    }
    
    for (int i = 0; i < N2; i++) {
        right[i] = arr[mid + i + 1];
    }
    
    int i = 0, j = 0, k = begin;
    while (i < N1 && j < N2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
            inversions += N1 - i;
        }
        k++;
    }
    
    while (i < N1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    
    while (j < N2) {
        arr[k] = right[j];
        j++;
        k++;
    }
    
    return inversions;
}

long merge_sort(vector<int>& arr, int begin, int end) {
    if (begin >= end) {
        return 0;
    }
    
    int mid = (begin + end) / 2;
    long a = merge_sort(arr, begin, mid);
    long b = merge_sort(arr, mid + 1, end);
    return a + b + merge(arr, begin, mid, end);
}

long countInversions(vector<int> arr) {
    return merge_sort(arr, 0, arr.size() - 1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        long result = countInversions(arr);

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
