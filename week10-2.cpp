#include <iostream>

struct CanPrint
{
    virtual void print() = 0;
};

struct Save
{
    virtual void save() = 0;
};

struct Atm : CanPrint
{
    double amount;
    int transactions;

    void print()
    {
        std::cout << "Transactions: " << transactions << std::endl;
        std::cout << "Total Cash: " << amount << std::endl;
    }
};

struct Card : CanPrint
{
    std::string account_number;
    std::string pin;
    void print()
    {
        std::cout << "Account Number: " << account_number << std::endl;
    }
};

struct Printer
{
    static void print(CanPrint *p)
    {
        p->print();
    }
};

int main() 
{
    Card *c = new Card();
    Atm *a = new Atm();

    Printer::print(c);
    Printer::print(a);
}