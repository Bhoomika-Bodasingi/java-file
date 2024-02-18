
Program:(areaBox.h)
#include<iostream>
using namespace std;
#define AREA
void area(float l,float w,float h)
{
    float area=2*((l*w)+(w*h)+(h*l));
    cout<<"The area of the box : "<<area<<endl;
}





Program:(volumeBox.h)
#include<iostream>
using namespace std;
#define VOLUME
void volume(float l,float w,float h)
{
    float volume=l*w*h;
    cout<<"The volume of the box : "<<volume<<endl;
}





Program:(areaVolume.cpp)
#include<iostream>
#include "areaBox.h"
#include "volumeBox.h"
using namespace std;
int main()
{
float length,width,height;
cout<<"Enter the length, width, and height : ";
cin>>length>>width>>height;
#ifdef AREA
{
area(length,width,height);
}
#endif
#ifndef AREA
{
cout<<"You have not included areaBox.h file"<<endl;
}
#endif
#ifdef VOLUME
{
volume(length,width,height);
}
#endif
#ifndef VOLUME
{
cout<<"You have not included volume.h file"<<endl;
}
#endif
return 0;
}








