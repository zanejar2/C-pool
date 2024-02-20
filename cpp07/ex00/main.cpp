#include "Template.hpp"

int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

// class Awsome
// {
//     public:
//         Awsome( int n ) : _n( n ) {}
//         bool operator==( Awsome const & rhs ) const { return (this->_n == rhs._n); }
//         bool operator!=( Awsome const & rhs ) const { return (this->_n != rhs._n); }
//         bool operator>( Awsome const & rhs ) const { return (this->_n > rhs._n); }
//         bool operator<( Awsome const & rhs ) const { return (this->_n < rhs._n); }
//         bool operator>=( Awsome const & rhs ) const { return (this->_n >= rhs._n); }
//         bool operator<=( Awsome const & rhs ) const { return (this->_n <= rhs._n); }
//         int getN() const { return this->_n; }
//     private:
//         int _n;
// };
// std::ostream & operator<<(std::ostream & o, Awsome const & rhs) { o << rhs.getN(); return o; }

// int main()
// {
//     Awsome a(2), b(5);
//     ::swap(a, b);
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     return 0;
// }