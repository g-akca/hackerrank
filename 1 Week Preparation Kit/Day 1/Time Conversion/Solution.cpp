#include <bits/stdc++.h>
#include <string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if (s.substr(s.size() - 2, 2) == "PM") {
        if (s.substr(0, 2) == "12") {
            return s.substr(0, s.size() - 2);
        }
        else {
            int hour = stoi(s.substr(0, 2));
            hour += 12;
            string hour_s = to_string(hour);
            s.replace(0, 2, hour_s);
            return s.substr(0, s.size() - 2);
        }
    }
    else {
        if (s.substr(0, 2) == "12") {
            s.replace(0, 2, "00");
            return s.substr(0, s.size() - 2);
        }
        else {
            return s.substr(0, s.size() - 2);
        }
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
