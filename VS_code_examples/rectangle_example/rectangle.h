#ifndef RECTANGLE_H
#define RECTANGLE_H

class rectangle {
private:
    double Area;
    double length;
    double width;

    void resetAreaToZero(void);

protected:
    void setArea(double Area);

public:
    double getArea(void);
    void calcArea(double length, double width);
    void calcArea(void);
};

#endif // RECTANGLE_H
