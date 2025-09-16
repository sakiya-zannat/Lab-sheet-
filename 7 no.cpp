#include<iostream>
#include<conio.h>

using namespace std;

class Area
{
    private:
    double length,breadth;

    public:
    Area(double a, double b)
    {
        length = a;
        breadth = b;
    }
    double returnArea()
    { return length * breadth;
    }
};

int main()
{
    double length,breadth;

    cout<< "length= ";
    cin>> length;
    cout<<"breadth= ";
    cin>> breadth;

    Area rectangle( length, breadth);
    
    cout<< "Area= "<<rectangle.returnArea()<<endl;

    getch();

}
