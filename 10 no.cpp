#include<iostream>
#include<cmath>

using namespace std;

class Volume{
    private:
    float length, breadth, height;

public:
       Volume(float l, float b, float h) : length(l), breadth(b), height(h) {}
            float getVolume() {
        return length * breadth * height;
    }
};

int main() {
    float l, b, h;

        cin >> l>>b>>h;

    Volume box(l, b, h);

    cout << "The volume of the box is: " << box.getVolume() << endl;

    return 0;
}