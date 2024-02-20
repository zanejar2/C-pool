#include "BitcoinExchange.hpp"

void errorManager(int n)
{
    if (n == 1)
        std::cerr << "Error: Wrong number of arguments" << std::endl;
    else if (n == 2)
        std::cerr << "Error: Wrong file format" << std::endl;
    exit(1);
}

int valueChecker(std::string value)
{
    bool point = false;
    for (int i = 0; value[i]; i++)
    {
        if (!isdigit(value[i]))
        {
            if (value[i] == '.' && i != 0 && value[i + 1] && isdigit(value[i + 1]))
            {
                if (point)
                    return (0);
                point = true;
                continue;
            }
            else if ((value[i] == '-' || value[i] == '+') && i == 0)
                continue;
            return (0);
        }
    }
    return (1);
}

int checkDate(int year, int month, int day, std::string date)
{
    if (year < 2009 || year > 2023 || month < 1 || month > 12 || day < 1 || day > 31)
    {
        std::cerr << "Error: Bad input " << date <<  std::endl;
        return (0);
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
    {
        std::cerr << "Error: Bad input " << date <<  std::endl;
        return (0);
    }
    if ((year == 2012 || year == 2016 || year == 2020) && month == 02 && day > 29)
    {
        std::cerr << "Error: Bad input " << date <<  std::endl;
        return (0);
    }
    if ((year != 2012 || year != 2016 || year != 2020) && month == 02 && day > 28)
    {
        std::cerr << "Error: Bad input " << date <<  std::endl;
        return (0);
    }
    return (1);
}

void inputFileManager(char *inputFile)
{
    BitcoinExchange bitcoin;
    std::ifstream File;
    File.open(inputFile);
    if (!File.is_open())
    {
        std::cerr << "Error: File not found" << std::endl;
        exit(1);
    }
    std::string line;
    std::getline(File, line);
    if (line != "date | value")
        errorManager(2);
    while (std::getline(File, line))
    {
        if (line.empty())
            continue;
        if (line.size() < 14)
        {   
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (line[10] != ' ' || line[11] != '|' || line[12] != ' ')
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string date = line.substr(0, 10);
        std::string value = line.substr(13);
        if (date[4] != '-' || date[7] != '-')
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (!valueChecker(value))
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        int year = std::atoi(date.substr(0, 4).c_str());
        int month = std::atoi(date.substr(5, 2).c_str());
        int day = std::atoi(date.substr(8, 2).c_str());
        if (!checkDate(year, month, day, date))
            continue;
        double val = strtod(value.c_str(), NULL);
        if (val < 0)
        {
            std::cerr << "Error: not a positive number." <<  std::endl;
            continue;
        }
        else if (val > 1000)
        {
            std::cerr << "Error: too large number." <<  std::endl;
            continue;
        }
        std::cout << date << " => " << val << " = " << bitcoin.dateFinder(date, val) << std::endl;
    }
    File.close();
}

int main(int ac, char **av)
{
    if (ac != 2)
        errorManager(1);
    inputFileManager(av[1]);
}