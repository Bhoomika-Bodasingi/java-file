#include<iostream>
using namespace std;

class SuperClass
{
    public:
        int pubVar=1;

    private:
        int priVar=2;

    protected:
        int proVar=3;

    public:
        int gValprivate()
        {
            return priVar;
        }
        int gValprotected()
        {
            return proVar;
        }
        int gValpublic()
        {
            return pubVar;
        }
};

class SubClass1: public SuperClass
{
    public:
        int var1=pubVar;
        int var2=proVar;
        int var3=gValprivate();
};

class SubClass2: private SuperClass
{
    public:
        int var01=pubVar;
        int var02=proVar;
        int var03=gValprivate();

};

class SubClass3: protected SuperClass
{
    public:
        int var001=pubVar;
        int var002=proVar;
        int var003=gValprivate();

};

int main()
{
    SuperClass obj;
    SubClass1 obj1;
    SubClass2 obj2;
    SubClass3 obj3;
    cout<<"SubClass01\n";
    cout<<"Public : "<<obj1.var1<<endl;
    cout<<"Protected : "<<obj1.var2<<endl;
    cout<<"Private : "<<obj1.var3<<endl;
    cout<<"SubClass02\n";
    /*cout<<"Public : "<<obj.publicVar<<endl;
    cout<<"Protected : "<<obj.privateVar<<endl;
    cout<<"Private : "<<obj.protectedVar<<endl;*/
    cout<<"Public : "<<obj2.var01<<endl;
    cout<<"Protected : "<<obj2.var02<<endl;
    cout<<"Private : "<<obj2.var03<<endl;
    cout<<"SubClass03\n";
    cout<<"Public : "<<obj3.var001<<endl;
    cout<<"Protected : "<<obj3.var002<<endl;
    cout<<"Private : "<<obj3.var003<<endl;
    return 0;
}
