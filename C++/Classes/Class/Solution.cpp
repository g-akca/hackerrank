#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        int get_age() { return age; }
        void set_age(int a) { age = a; }
        string get_first_name() { return first_name; }
        void set_first_name(string fn) { first_name = fn; }
        string get_last_name() { return last_name; }
        void set_last_name(string ln) { last_name = ln; }
        int get_standard() { return standard; }
        void set_standard(int s) { standard = s; }
        string to_string();
};

string Student::to_string() {
    stringstream ss;
    ss << age << "," << first_name << "," << last_name << "," << standard;
    
    string fullstr;
    ss >> fullstr;
    return fullstr;
}

int main() {
    Student s;
    int a, d;
    string b, c;
    
    cin >> a >> b >> c >> d;
    
    s.set_age(a);
    s.set_first_name(b);
    s.set_last_name(c);
    s.set_standard(d);
    
    cout << s.get_age() << "\n";
    cout << s.get_last_name() << ", " << s.get_first_name() << "\n";
    cout << s.get_standard() << "\n";
    cout << "\n";
    cout << s.to_string();
    
    return 0;
}
