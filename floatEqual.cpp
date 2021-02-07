#include<float.h>
#include<iostream>
const double EPSION=1e-6;

bool floatEqual(float x,float y)
{
    if(((x-EPSION)<y) &&(x+EPSION)>y)
        return true;

    return false;
}

int main()
{
    float x=1.999999999999,y=2.0;
    std::cout<<"x==y?"<<floatEqual(x,y)<<"\n";
    return 0;
}