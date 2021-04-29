#include <iostream>
#include "whatever.hpp"

// int main()
// {
//     int a = 2;
//     int b = 3;
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "call swap" << std::endl;
//     swap( a, b );
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    
    
//     std::string c = "chaine1";
//     std::string d = "chaine2";
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "call swap" << std::endl;
//     swap(c, d);
//     std::cout << "c = " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << max( c, d ) << std::endl;

//     float e = 2.71828;
//     float pie = 3.14159;
//     std::cout << "e = " << e << ", pie = " << pie << std::endl;
//     std::cout << "call swap" << std::endl;
//     swap(e, pie);
//     std::cout << "e = " << e << ", pie = " << pie << std::endl;
//     std::cout << "min( e, pie ) = " << min( e, pie ) << std::endl;
//     std::cout << "max( e, pie ) = " << max( e, pie ) << std::endl;
//     return 0;
// }

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