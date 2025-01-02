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
std::cout << Fixed::max( a, b ) << std::endl;

std::cout<<"------------------------TEST-----------------------------\n"<<std::endl;

Fixed e(5);
Fixed d(8);
Fixed f(5);

std::cout <<"\nIncrement operation and Decrement operation\n "<< std::endl;
std::cout<<"e = "<<e<<std::endl;
std::cout<<"e-- = "<<e--<<std::endl;
std::cout<<"e = "<<e<<std::endl;
std::cout<<"--e = "<<--e<<std::endl;
std::cout<<"e = "<<e<<std::endl;
std::cout<<"e++ = "<<e++<<std::endl;
std::cout<<"e = "<<e<<std::endl;
std::cout<<"++e = "<<++e<<std::endl;
std::cout<<"e = "<<e<<std::endl;

std::cout<<"\n-------------------------------------------------------"<<std::endl;
std::cout <<"\nAddition Subtraction Division and Mutiplication \n "<< std::endl;


std::cout<<"e = "<<e<<std::endl;
std::cout<<"d = "<<d<<std::endl;

std::cout << "e + d = "<< (e + d) <<std::endl;
std::cout << "d - e = "<< (d - e) <<std::endl;
std::cout << "d / e = "<< (e / d) <<std::endl;
std::cout << "d * e = "<< (d * e) <<std::endl;

std::cout<<"\n-------------------------------------------------------"<<std::endl;
std::cout<<"Comparison\n"<<std::endl;


std::cout<<"e = "<<e<<std::endl;
std::cout<<"f = "<<f<<std::endl;
std::cout<<"d = "<<d<<std::endl;

std::cout<<"is 1 (true)"<<std::endl;
std::cout<<"is 0 (false)\n"<<std::endl;

std::cout<<"5 > 8 "<<(e > d)<<std::endl;
std::cout<<"5 < 8 "<<(e < d)<<std::endl;
std::cout<<"8 <= 8 "<<(d <= d)<<std::endl;
std::cout<<"8 >= 8 "<<(d >= d)<<std::endl;
std::cout<<"5 >= 8 "<<(e >= d)<<std::endl;
std::cout<<"5 <= 8 "<<(e <= d)<<std::endl;
std::cout<<"5 != 8 "<<(e != d)<<std::endl;
std::cout<<"5 != 5 "<<(e != e)<<std::endl;
std::cout<<"5 == 5 "<<(e == e)<<std::endl;
std::cout<<"5 == 8 "<<(e == d)<<std::endl;

std::cout<<"\n-------------------------------------------------------"<<std::endl;
std::cout<<"\nMin Max\n"<<std::endl;

std::cout<<"e = "<<e<<std::endl;
std::cout<<"f = "<<f<<std::endl;

std::cout<<"min (5, 8) = "<<Fixed::min(e, d)<<std::endl;
std::cout<<"max (5, 8) = "<<Fixed::max(e, d)<<std::endl;

return 0;
}
