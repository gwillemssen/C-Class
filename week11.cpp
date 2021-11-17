#include <iostream>
#include <string>

struct Test
{
    Test()
    {
        std::cout << "Initialized" << std::endl;
    }
    ~Test()
    {
        std::cout << "Deinitialized" << std::endl;
    }
};

Test *create_test()
{
    return new Test();
}

int main()
{
    Test *t = create_test();

    std::string *i = new std::string{"hello world"};
    delete (t);
    return 0;
}