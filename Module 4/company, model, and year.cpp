#include <iostream>
#include <string>

class Car
{
private:
    std::string company;
    std::string model;
    int year;

public:
    Car(const std::string &comp, const std::string &mod, int yr) : company(comp), model(mod), year(yr) {}

    void setCompany(const std::string &comp)
    {
        company = comp;
    }

    std::string getCompany() const
    {
        return company;
    }

    void setModel(const std::string &mod)
    {
        model = mod;
    }

    std::string getModel() const
    {
        return model;
    }

    void setYear(int yr)
    {
        year = yr;
    }

    int getYear() const
    {
        return year;
    }
};

int main()
{

    Car myCar("Toyota", "Corolla", 2022);

    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    myCar.setCompany("Honda");
    myCar.setModel("Civic");
    myCar.setYear(2023);

    std::cout << "\nModified Details:" << std::endl;
    std::cout << "Company: " << myCar.getCompany() << std::endl;
    std::cout << "Model: " << myCar.getModel() << std::endl;
    std::cout << "Year: " << myCar.getYear() << std::endl;

    return 0;
}
