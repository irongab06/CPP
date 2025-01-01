#include <iostream>
#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
// std::cout << Fixed::max( a, b ) << std::endl;

std::cout <<"\nIncrement operation and Decrement operation\n "<< std::endl;
std::cout<<"a = "<<a<<std::endl;
std::cout<<"a-- = "<<a--<<std::endl;
std::cout<<"a = "<<a<<std::endl;
std::cout<<"--a = "<<--a<<std::endl;
std::cout<<"a = "<<a<<std::endl;

std::cout<<"\n-------------------------------------------------------"<<std::endl;
std::cout <<"\nAddition Subtraction Division and Mutiplication \n "<< std::endl;

Fixed e(5);
Fixed d(8);

std::cout<<"e = "<<e<<std::endl;
std::cout<<"d = "<<d<<std::endl;

std::cout << "e + d = "<< (e + d) <<std::endl;
std::cout << "d - e = "<< (d - e) <<std::endl;
std::cout << "d / e = "<< (e / d) <<std::endl;
std::cout << "d * e = "<< (d * e) <<std::endl;

return 0;
}
