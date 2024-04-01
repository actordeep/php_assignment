#include <iostream>
#include <string>

class Cricketer
{
protected:
    std::string name;
    int age;

public:
    void inputData(const std::string &playerName, int playerAge)
    {
        name = playerName;
        age = playerAge;
    }

    virtual void displayData() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Batsman : public Cricketer
{
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputData(const std::string &playerName, int playerAge, int runs, double avgRuns, int best)
    {
        Cricketer::inputData(playerName, playerAge);
        totalRuns = runs;
        averageRuns = avgRuns;
        bestPerformance = best;
    }

    void calculateAverageRuns()
    {
    }

    void displayData() const override
    {
        Cricketer::displayData();
        std::cout << "Total Runs: " << totalRuns << std::endl;
        std::cout << "Average Runs: " << averageRuns << std::endl;
        std::cout << "Best Performance: " << bestPerformance << std::endl;
    }
};

int main()
{

    Batsman batsman;

    batsman.inputData("Virat Kohli", 33, 12000, 55.6, 254);

    std::cout << "Batsman Information:" << std::endl;
    batsman.displayData();

    return 0;
}
