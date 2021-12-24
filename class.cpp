#include <class.hpp>
#include <math.h>


namespace kr {
    Rectangle::Rectangle() {
        std::cout << "Empty constructor" << std::endl;
    }
    Rectangle::Rectangle(Point A, Point B, Point C, Point D) {
        m_A = A;
        m_B = B;
        m_C = C;
        m_D = D;
        m_d1 = lengthOfSide(m_B, m_A);
        m_d2 = lengthOfSide(m_C, m_B);
        m_d3 = lengthOfSide(m_A, m_D);
        m_d4 = lengthOfSide(m_D, m_C);




        if (m_d1 < 0 || m_d2 < 0 || m_d3 < 0 || m_d4 < 0)
        {
            std::cout << "Error,try again" << std::endl;
            m_A = { 1, 2 };
            m_B = { 1,4 };
            m_C = { 5, 4 };
            m_D = { 5, 2 };


        }
       // std::cout << "Constructor works!" << std::endl;
    }
    Rectangle::~Rectangle() {
       // std::cout << "Destructor works!" << std::endl;
    }
    double Rectangle::Perimeter() {
        m_d1 = lengthOfSide(m_B, m_A);
        m_d2 = lengthOfSide(m_C, m_B);
        m_d3 = lengthOfSide(m_A, m_D);
        m_d4 = lengthOfSide(m_D, m_C);


        return m_d1 + m_d2 + m_d3 + m_d4;
    }
    double Rectangle::Square() {
        m_d1 = lengthOfSide(m_B, m_A);
        m_d2 = lengthOfSide(m_C, m_B);
        m_d3 = lengthOfSide(m_A, m_C);
        m_d4 = lengthOfSide(m_D, m_C);


        return m_d1 * m_d2;
    }
    void Rectangle::SetA(Point A) {
        m_A.x = A.x;
        m_A.y = A.y;
    }
    void Rectangle::SetB(Point B) {
        m_B.x = B.x;
        m_B.y = B.y;
    }
    void Rectangle::SetC(Point C) {
        m_C.x = C.x;
        m_C.y = C.y;
    }
    void Rectangle::SetD(Point D) {
        m_D.x = D.x;
        m_D.y = D.y;
    }


}
