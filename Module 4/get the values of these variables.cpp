#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;
    std::string country;

public:
    Person(const std::string &n, int a, const std::string &c) : name(n), age(a), country(c) {}

    void setName(const std::string &n)
    {
        name = n;
    }

    std::string getName() const
    {
        return name;
    }

    void setAge(int a)
    {
        age = a;
    }

    int getAge() const
    {
        return age;
    }

    void setCountry(const std::string &c)
    {
        country = c;
    }

    std::string getCountry() const
    {
        return country;
    }
};

int main()
{

    Person person("John Doe", 30, "USA");

    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    person.setName("Jane Smith");
    person.setAge(25);
    person.setCountry("Canada");

    std::cout << "\nModified Details:" << std::endl;
    std::cout << "Name: " << person.getName() << std::endl;
    std::cout << "Age: " << person.getAge() << std::endl;
    std::cout << "Country: " << person.getCountry() << std::endl;

    return 0;
}