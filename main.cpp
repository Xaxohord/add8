#include <iostream>
#include <class.hpp>


int main() {
    kr::Point A, B, C, D;
    std::cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
    kr:: Rectangle rect(A, B, C, D);
    rect.SetA(A);
    rect.SetB(B);
    rect.SetC(C);
    rect.SetD(D);


    std::cout << std :: endl << "S = " << rect.Square()<< std::endl  << "P = " << rect.Perimeter() << std::endl;


    return 0;
}