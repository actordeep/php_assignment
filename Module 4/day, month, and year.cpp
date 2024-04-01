#include <iostream>

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void setDate(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    int getDay() const
    {
        return day;
    }

    int getMonth() const
    {
        return month;
    }

    int getYear() const
    {
        return year;
    }

    /
        bool isValidDate() const
    {
        if (year < 0 || month < 1 || month > 12 || day < 1)
            return false;

        int maxDays = 31;
        if (month == 4 || month == 6 || month == 9 || month == 11)
            maxDays = 30;
        else if (month == 2)
        {

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                maxDays = 29;
            else
                maxDays = 28;
        }

        return (day <= maxDays);
    }
};

int main()
{

    Date date(31, 12, 2021);

    std::cout << "Initial Date Details:" << std::endl;
    std::cout << "Day: " << date.getDay() << ", Month: " << date.getMonth() << ", Year: " << date.getYear() << std::endl;

        if (date.isValidDate())
        std::cout << "The date is valid." << std::endl;
    else
        std::cout << "The date is not valid." << std::endl;

    return 0;
}
