#include<iostream>

int foo()
{
    return 5;
}

int goo()
{
    return 6;
}

int main()
{
    // std::cout<<reinterpret_cast<void*>(foo)<<"\n";
    // std::cout<<foo<<"\n";  //output value is:1

    int (*fcnPtr)(){&foo};
    std::cout<<fcnPtr()<<"\n";

    fcnPtr=&goo;
    std::cout<<fcnPtr()<<"\n";
    return 0;
}