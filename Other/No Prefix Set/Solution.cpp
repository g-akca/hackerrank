#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'noPrefix' function below.
 *
 * The function accepts STRING_ARRAY words as parameter.
 */

void noPrefix(vector<string> words) {
    set<string> needed_prefixes;
    set<string> prev_words;
    
    for (int i = 0; i < words.size(); i++) {
        string s = words[i];
        if (needed_prefixes.find(s) != needed_prefixes.end()) {
            cout << "BAD SET" << endl << s;
            return;
        }
        
        while (!s.empty()) {
            needed_prefixes.insert(s);
            if (prev_words.find(s) != prev_words.end()) {
                cout << "BAD SET" << endl << words[i];
                return;
            }   
            
            s.pop_back();
        }
        
        prev_words.insert(words[i]);
    }
    
    cout << "GOOD SET";
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> words(n);

    for (int i = 0; i < n; i++) {
        string words_item;
        getline(cin, words_item);

        words[i] = words_item;
    }

    noPrefix(words);

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
