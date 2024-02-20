#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
	private:
		int					_value;
		static const int	_fractionalBits = 8;
	public:
		Fixed( void );
		Fixed( int const value );
		Fixed( float const value );
		Fixed( Fixed const &copy );
		~Fixed( void );

		int			getRawBits( void ) const;
		void		setRawBits( int const bits );

		float		toFloat( void ) const;
		int			toInt( void ) const;

		Fixed& operator=(const Fixed &scnd);
		Fixed operator+(const Fixed &scnd) const;
		Fixed operator-(const Fixed &scnd) const;
		Fixed operator*(const Fixed &scnd) const;
		Fixed operator/(const Fixed &scnd) const;

		bool operator>(const Fixed &scnd) const;
		bool operator<(const Fixed &scnd) const;
		bool operator==(const Fixed &scnd) const;
		bool operator!=(const Fixed &scnd) const;
		bool operator<=(const Fixed &scnd) const;
		bool operator>=(const Fixed &scnd) const;
		
		Fixed operator++();
		Fixed operator++(int);		
		Fixed operator--();
		Fixed operator--(int);

		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);

		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif