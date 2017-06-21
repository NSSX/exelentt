#include <iostream>

template<typename T>
void swap(T & x, T & y){
    T z = x;
    x = y;
    y = z;
}

template<typename T>
T &min(T & x, T & y){
    if( x == y )
        return y;
    else if(x < y)
        return x;
    else
        return y;
}

template<typename T>
T &max(T & x, T & y){
    if( x == y )
        return y;
    else if(x > y)
        return x;
    else
        return y;
}

int main( void ) {
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

    std::cout << "OTHER TEST---------------------" << std::endl;

    double f = 2.0;
    double e = 4.0;

    ::swap( f, e );
    std::cout << "f = " << f << ", e = " << e << std::endl;
    std::cout << "min( f, e ) = " << ::min( f, e ) << std::endl;
    std::cout << "max( f, e ) = " << ::max( f, e ) << std::endl;

	return 0;
}
