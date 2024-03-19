#include<iostream>

using namespace std;

class MethodOverloading
{
    public:
        void Multiplication(float a,float b)
        {
            float result = a*b;
            cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<result<<endl;
        }
        void Multiplication(float a,float b,float c)
        {
            float result = a*b*c;
            cout<<"Multiplication of "<<a<<","<<b<<" and "<<c<<" is "<<result<<endl;
        }
};

int main()
{
    MethodOverloading obj;
    obj.Multiplication(4,7);
    obj.Multiplication(2,3,8);
    return 0;
}
