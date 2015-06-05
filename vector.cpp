#include <iomanip>
#include <ostream>
#include "vector.h"
#include "math.h"


std::ostream& operator<< (std::ostream &strm, const Vector &r) {
    return strm /*<< std::setprecision(3)*/ << "(" << r.r_x << ", " << r.r_y << ", " << r.r_z << ")";
}


Vector::Vector(double x, double y, double z) {
    r_x = x;
    r_y = y;
    r_z = z;

    lenght = sqrt((*this) * (*this));
}


double Vector::getX() const {return r_x;}


double Vector::getY() const {return r_y;}


double Vector::getZ() const {return r_z;}


double Vector::getLenght() const {return lenght;}


double Vector::operator* (const Vector& r) {return r_x * r.getX() + r_y * r.getY() + r_z * r.getZ();}


Vector Vector::operator* (double l) {return Vector(l * r_x, l * r_y, l * r_z);}


//


Vector operator* (double l, const Vector& r) {return Vector(l * r.getX(), l * r.getY(), l * r.getZ());}
