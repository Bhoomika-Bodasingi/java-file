#include<iostream>
using namespace std;
class ClassA
{
    public:
    void aClass()
    {
        cout<<"I Am a ClassA\n";
    }
};
class ClassB: public ClassA
{
    public:
    void bClass()
    {
        cout<<"I Am a ClassB\n";
    }
};
class ClassC: public ClassA
{
    public:
    void cClass(){
    cout<<"I Am a ClassC\n";
    }

};
class ClassD: public ClassC,public ClassB
{
    public:
    void dClass()
    {
    cout<<"I Am a ClassD\n";
    }
};
int main()
{
    ClassD obj1;
//obj1.aClass();
//aClass() method becomes ambiguous here
    obj1.bClass();
    obj1.cClass();
    obj1.dClass();
return 0;
}
