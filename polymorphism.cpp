#include <iostream>

using namespace std;

class Figure
{
public:
    virtual void calculate_area()=0; // clean virtual function
};

///////////////////////////////////////////////////////////////

class Circle :public Figure
{
    float r;
public:
    Circle(float x)
    {
        r=x;
    }
 virtual void calculate_area()
    {
        cout<<"Area of circle :"<< 3.14*r*r<<endl;
    }
};

////////////////////////////////////////////////////////////

class Square :public Figure
{
    float a;
public:
    Square (float x)
    {
        a=x;
    }
    void calculate_area()
    {
        cout<<"Area of square: "<<a*a<<endl;
    }
};

///////////////////////////////////////////////////////////////

void calc (Figure *x)
{
    x->calculate_area();
}


int main()
{
    Circle c1(2);
    Square s1(5);

    Figure *pt;

    pt= &c1;
    pt->calculate_area();

    pt=&s1;
    pt->calculate_area();

    calc(pt);
    calc(&c1);

return 0;
}
