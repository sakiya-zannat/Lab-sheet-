#include<iostream>
#include<cmath>

using namespace std;

class Average{
  
public:
    static void calAverage(float a, float b,float c){
    float avg =(a+b+c)/3;
    cout<< "average = "<< avg<<endl;
}
};

int main()
{
    float n1,n2,n3;
    cin>>n1>>n2>>n3;

    Average::calAverage(n1,n2,n3);

}
