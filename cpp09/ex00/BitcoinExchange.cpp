#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::ifstream Data;
    Data.open("data.csv");
    if (!Data.is_open())
    {
        std::cerr << "Error: File not found" << std::endl;
        exit(1);
    }
    std::string line;
    std::getline(Data, line);
    while (std::getline(Data, line))
    {
        std::string key = line.substr(0, 10);
        std::string value = line.substr(11);
        _map[key] = strtod(value.c_str(), NULL);
    }
    Data.close();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy)
{
    _map = copy._map;
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &copy)
{
    _map = copy._map;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {} 

double BitcoinExchange::dateFinder(std::string date, double value)
{
    std::map<std::string, double>::iterator it = _map.upper_bound(date);
    if (it != _map.begin())
        it--;
    return (it->second * value);
}