#include <iostream>
#include <string>
#include <vector>
#include <memory>

//lambda functions
//smart pointers - unique, shared and weak - dont worry about weak
//unique can only be owned by one process. deleted when process falls out of scope
//shared can share references out. only when all references fall out of scope will the pointer be deleted
//live in the memory header

struct T 
{
    ~T()
    {
        std::cout << "destroy it" << std::endl;
    }
};

struct B
{
    private:
    std::shared_ptr<T> m_s;

    public:
    B(std::shared_ptr<T> s)
    {
        m_s = s;
    }
};

int main()
{
    std::shared_ptr<T> t = std::make_shared<T>();

    B * b = new B(t);
    delete b;
}