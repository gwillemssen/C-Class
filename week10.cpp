#include <iostream>

struct A
{
    virtual void foo() = 0;
};

struct B : A
{
    void foo()
    {
        std::cout << "foo" << std::endl;
    }
};

struct C : A
{
    void foo()
    {
        std::cout << "bar" << std::endl;
    }
};

struct D : B, C 
{
    void baz()
    {
        this->foo(); //error here - diamond of death problem. fix by replacing this->foo() with C::foo()
    }
};

int main()
{
    
}