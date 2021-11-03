#include <string>
#include <vector>
#include <iostream>

//for an int, generate every possible combo of parenthesis. 2 would be (()), ()(), )()(, etc. the int refers to the number of open so there will be double the int.

void gen(char curr[], int index, int l, int r, std::vector<std::string> *result)
{
    if(r == 0)
    {
        std::string str(curr);
        result->push_back(str);
    }
    if(l > 0)
    {
        curr[index] = '(';
        gen(curr, index + 1, l - 1, r, result);
    }
    if(r > 0)
    {
        curr[index] = ')';
        gen(curr, index + 1, l, r - 1, result);
    }
}

std::vector<std::string> *gen(const int n)
{
    std::vector<std::string> *vect = new std::vector<std::string>();
    char input[n * 2];
    gen(input, 0, n, n, vect);
    return vect;
}

int main()
{
    std::vector<std::string> *ret = gen(4);

    for(auto r : *ret)
    {
        std::cout << r << std::endl;
    }

    delete (ret);
}