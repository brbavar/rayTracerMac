#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include "ray.h"

struct Shape {
    std::string type = "";
    Matrix center;
    Color clr;
    Ray normal;
    double radius;

    Shape();
    Shape(const Shape&);
    Shape(Matrix c, double r, Color color);     // Sphere
    Shape(Ray, Matrix);         // Plane
    Shape(Ray, Matrix, Color);  // Plane
    ~Shape();

    double intersects(Ray);
    
    bool operator==(Shape);
    bool operator!=(Shape);
    void operator=(const Shape&);
};

/* struct Sphere : Shape {
    Sphere();
    Sphere(const Sphere&);
    Sphere(Matrix, double, Color);
    ~Sphere();
};

struct Plane : Shape {
    Plane();
    Plane(const Plane&);
    Plane(Ray, Matrix, double, double);
    Plane(Ray, Matrix, double, double, Color);
    ~Plane();
}; */

#endif