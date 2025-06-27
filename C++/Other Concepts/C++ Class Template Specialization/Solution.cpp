#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
template <>
struct Traits<Fruit> {
    public:
        static string name(int index) {
            auto fruit = static_cast<Fruit>(index);
            
            if (fruit == Fruit::apple) return "apple";
            else if (fruit == Fruit::orange) return "orange";
            else if (fruit == Fruit::pear) return "pear";
            else return "unknown";
        }
};

template <>
struct Traits<Color> {
    public:
        static string name(int index) {
            auto color = static_cast<Color>(index);
            
            if (color == Color::red) return "red";
            else if (color == Color::green) return "green";
            else if (color == Color::orange) return "orange";
            else return "unknown";
        }
};

int main()
{
	int t = 0; std::cin >> t;

    for (int i=0; i!=t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
