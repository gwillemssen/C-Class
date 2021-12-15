#include<iostream>

class Hopper
{
    public:
    int beginningBeans;
    int maxBeans;
    Hopper()
    {
        beginningBeans = 0;
        maxBeans = 200;
    }
    void FillBeans()
    {
        std::cout << "Bean level: " << beginningBeans << " grams." << std::endl;
        beginningBeans = maxBeans;
        std::cout << "Filling beans..." << std::endl;
        std::cout << "Bean level: " << maxBeans << " grams." << std::endl;
    }
};

class Heat
{
    public:
    int waterTempStart;
    int waterTempNeeded;
    Heat()
    {
        waterTempStart = 30;
        waterTempNeeded = 100;
    }
    void HeatWater()
    {
        std::cout << "Water temp: " << waterTempStart << " degrees celsius." << std::endl;
        waterTempStart = waterTempNeeded;
        std::cout << "Heating water..." << std::endl;
        std::cout << "Water temp: " << waterTempNeeded << " degrees celsius." << std::endl;
    }
};

class Water
{
    public:
    double maxWater;
    double beginningWater;
    Water()
    {
        beginningWater = 0;
        maxWater = 1;
    }
    void FillWater()
    {
        std::cout << "Water level: " << beginningWater << " liters." << std::endl;
        beginningWater = maxWater;
        std::cout << "Filling water..." << std::endl;
        std::cout << "Water level: " << maxWater << " liters." << std::endl;
    }
};

class Grinder
{
    public:
    void GrindBeans()
    {
        std::cout << "Grinding beans." << std::endl;
        std::cout << "Beans have been ground!" << std::endl;
    }
};

class Cup
{
    public:
    int beanNeed;
    double waterNeed;
        Cup() 
        {
            beanNeed = 50;
            waterNeed = .25;
        }
        void MakeCup(Hopper *_hopper, Water *_water)
        {
            if(_hopper->beginningBeans >= 50 && _water->beginningWater >= .25)
            {
                std::cout << "Brewing..." << std::endl;
                _hopper->beginningBeans -= beanNeed;
                _water->beginningWater -= waterNeed;
                std::cout << "Cup of coffee is ready!" << std::endl;
                std::cout << "Remaining beans: " << _hopper->beginningBeans << " grams." << std::endl;
                std::cout << "Remaining water: " << _water->beginningWater << " liters." << std::endl;
            }
            else
            {
                std::cout << "Not enough beans or water! Please refill." << std::endl;
            }
        }
};

int main() 
{
    Water *water = new Water();
    water->FillWater();
    Hopper *hopper = new Hopper();
    hopper->FillBeans();
    Heat *heat = new Heat();
    heat->HeatWater();
    Grinder *grinder = new Grinder();
    grinder->GrindBeans();
    Cup cup = Cup();
    cup.MakeCup(hopper, water);
    std::cout << "Making second cup..." << std::endl;
    Cup cup2 = Cup();
    cup2.MakeCup(hopper, water);
    std::cout << "Making third cup..." << std::endl;
    Cup cup3 = Cup();
    cup3.MakeCup(hopper, water);
    std::cout << "Making fourth cup..." << std::endl;
    Cup cup4 = Cup();
    cup4.MakeCup(hopper, water);
    std::cout << "Making fifth cup..." << std::endl;
    Cup cup5 = Cup();
    cup5.MakeCup(hopper, water);
}
