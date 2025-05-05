#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 
class Rectangle {
    private:
        int width;
        int height;
    public:
        void display() { cout << width << " " << height << endl; }
        void setWidth(int w) { width = w; }
        int getWidth() { return width; }
        void setHeight(int h) { height = h; }
        int getHeight() { return height; }
};

class RectangleArea : public Rectangle {
    public:
        void read_input() {
            int a, b;
            cin >> a >> b;
            setWidth(a);
            setHeight(b);
        }
        void display() {
            cout << getHeight() * getWidth() << endl;
        }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}