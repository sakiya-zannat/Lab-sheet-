#include<iostream>
#include<cmath>

using namespace std;

class complex{
  private:
    float real,imaginary;

public:
    complex(float r=0, float i=0)
    {
    float real=r;
        imaginary = i;
}
    void setinput()
    {
        cout<<"enter real part ";
        cin>>real;
        cout<<"enter imaginary part ";
        cin>>imaginary;
    }

 void sum(complex c1, complex c2) {
        real = c1.real + c2.real;
        imaginary = c1.imaginary + c2.imaginary;
}
 void difference(complex c1, complex c2) {
        real = c1.real - c2.real;
        imaginary = c1.imaginary - c2.imaginary;
    }

    // Function to multiply
    void product(complex c1, complex c2) {
        real = (c1.real * c2.real) - (c1.imaginary * c2.imaginary);
        imaginary = (c1.real * c2.imaginary) + (c1.imaginary * c2.real);
    }

    // Function to display result
    void display() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};

int main() {
    complex c1, c2, sum, diff, prod;

    cout << "Enter first complex number:\n";
    c1.setinput();
    cout << "Enter second complex number:\n";
    c2.setinput();

    cout << "\nSum: ";
    sum.sum(c1, c2);
    sum.display();

    cout << "Difference: ";
    diff.difference(c1, c2);
    diff.display();

    cout << "Product: ";
    prod.product(c1, c2);
    prod.display();

    return 0;
}