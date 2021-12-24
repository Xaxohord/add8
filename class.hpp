#pragma once
#include <iostream>
#include <math.h>


namespace kr {
    struct Point {
        double x;
        double y;
    };
    class Rectangle {
    public:
        Rectangle();
        ~Rectangle();
        Rectangle(Point A, Point B, Point C, Point D);
        double Square();
        double Perimeter();
        void SetA(Point A);
        void SetB(Point B);
        void SetC(Point C);
        void SetD(Point D);




    private:
        Point m_A, m_B, m_C, m_D;
        double m_d1, m_d2, m_d3, m_d4;
        double lengthOfSide(Point p1, Point p2)
        {
            return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
        }


    };
}
