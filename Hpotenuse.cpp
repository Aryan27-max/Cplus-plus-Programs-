#include <iostream>
#include <cmath>

int main ()
{
    double a ;
    double b ;
    double c ;

    std::cout << "Enter side A : ";
    std::cin >> a ;

    std::cout << "Enter the side B : ";
    std::cin >> b ;
    
    c = sqrt(pow (a , 2) + pow (b , 2 ));

    std::cout << "the hypotenuse is : " << c ;

    return 0 ;

}