#include <bits/stdc++.h>

using namespace std;



int main()
{
    string S;
    getline(cin, S);
    
    try {
        int a = stoi(S);
        cout << a << endl;
    }
    catch (invalid_argument) {
        cout << "Bad String" << endl;
    }

    return 0;
}
