#include <string>

class Card 
{
    public:
    std::string AccountNumber;
    std::string Pin;
};

class Input
{
    public:
    Card card;
};

class AbstractUserChoice
{
    public:
    std::string AccountNumber;
};

class Deposit : public AbstractUserChoice
{
    public:
    double amount;
};

class Withdrawl : public AbstractUserChoice
{
    public:
    double amount;
};

class CheckBalance : public AbstractUserChoice
{
    
};

class Output
{
    public:
    std::string AccountNumber;
};

class Money : public Output
{
    double amount;
};

class Receipt : public Output
{
    std::string message;
};

class Atm
{
    public:
    Money accept(Withdrawl w);
    Receipt accept(Deposit d);
    Receipt accept(CheckBalance c);
};