#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vect; //make a vector

    vect.reserve(52); //preallocate 52 slots in vector
    vect.push_back(10); //add to vect
    vect.clear(); //clears

    std::cout << vect.size() << std::endl; //size of vector
    std::cout << vect.max_size() << std::endl; //max size of vector

    //vect.at(1); //what is index of 1

    //for(std::vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
    //{

    //}
}

int main() 
{
    std::vector<int> vect;

    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);

    for(auto it = vect.begin(); it != vect.end(); it++) //above but shorter, auto means compiler do it for me
    {
        std::cout << *it << std::endl;
    }
}

//below if fibbonacci homework
int fib(const int n)
{
    if(n == 0 || n == 1)
    return n;
    return fib(n - 1) + fib(n - 2);
}

int main() 
{
    std::cout << fib(10) << std::endl;
}