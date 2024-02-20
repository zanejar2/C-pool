#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) 
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	_value = value << _fractionalBits;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _fractionalBits));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) 
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void) 
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &scnd) 
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &scnd)
		_value = scnd.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const 
{
	// std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const bits) 
{
	_value = bits;
}

float Fixed::toFloat(void) const 
{
	return (float)_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const 
{
	return _value >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
	out << fixed.toFloat();
	return out;
}

Fixed Fixed::operator+(const Fixed &scnd) const 
{
	return Fixed(toFloat() + scnd.toFloat());
}

Fixed Fixed::operator-(const Fixed &scnd) const 
{
	return Fixed(toFloat() - scnd.toFloat());
}

Fixed Fixed::operator*(const Fixed &scnd) const 
{
	return Fixed(toFloat() * scnd.toFloat());
}

Fixed Fixed::operator/(const Fixed &scnd) const 
{
	return Fixed(toFloat() / scnd.toFloat());
}

bool Fixed::operator>(const Fixed &scnd) const 
{
	return _value > scnd._value;
}

bool Fixed::operator<(const Fixed &scnd) const 
{
	return _value < scnd._value;
}

bool Fixed::operator==(const Fixed &scnd) const 
{
	return _value == scnd._value;
}

bool Fixed::operator!=(const Fixed &scnd) const 
{
	return _value != scnd._value;
}

bool Fixed::operator<=(const Fixed &scnd) const 
{
	return _value <= scnd._value;
}

bool Fixed::operator>=(const Fixed &scnd) const 
{
	return _value >= scnd._value;
}

Fixed Fixed::operator++() 
{
	++_value;
	return *this;
}

Fixed Fixed::operator++(int) 
{
	Fixed tmp(*this);
	++_value;
	return tmp;
}

Fixed Fixed::operator--() 
{
	--_value;
	return *this;
}

Fixed Fixed::operator--(int) 
{
	Fixed tmp(*this);
	--_value;
	return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	else 
		return (a);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
 
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	else 
		return (a);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (b);
	else 
		return (a);
}