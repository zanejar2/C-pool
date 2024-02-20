#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <ctype.h>

class BitcoinExchange
{
    private :
        std::map<std::string, double> _map;
    public :
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange const &copy);
        BitcoinExchange &operator=(BitcoinExchange const &copy);
        ~BitcoinExchange();
        double dateFinder(std::string date, double value);
};
#endif