#include <iostream>
#include <vector>

struct MyType
{
    MyType()
    {
        std::cout << "yay i am alive" << std::endl;
    }

    MyType (const MyType &src)
    {
        std::cout << "i am copied" << std::endl;
    }

    // MyType(const MyType &&src)
    // {
    //     std::cout << "i have been moved" << std::endl;
    // }

    ~MyType()
    {
        std::cout << "goodbye" << std::endl;
    }
};

// int get_something(MyType t)
// {
//     std::cout << "hit" << std::endl;
//     return 0;
// }

// MyType &&foo()
// {
//     MyType t = MyType();
//     return std::move(t);
// }
//void foo(MyType *t)
//{
  //  std::cout << t << std::endl;
//}

void foo(std::vector<MyType> t)
{
    
}

int main()
{
    //auto t = foo();
    std::vector<MyType> types = std::vector<MyType>();
    types.push_back(MyType());
    types.push_back(MyType());
    types.push_back(MyType());
}