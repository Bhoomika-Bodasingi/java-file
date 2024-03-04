#include<iostream>
using namespace std;
class Lion
{
public:
void displayBreed()
{
    cout<<"I belong to the carnivore type\n";
}
void eat()
{
    cout<<"I eat meat\n";
}
};
class Cub: public Lion
{
public:
void play()
{
    cout<<"I play a chess\n";
}
void skills()
{
    cout<<"develop games\n";
}
};
int main()
{
    Cub obj;
    obj.displayBreed();
    obj.eat();
    obj.play();
    obj.skills();
    return 0;
}
