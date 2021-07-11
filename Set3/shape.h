#ifndef _SHAPE_H
#define _SHAPE_H
#include<iostream>
#include<cmath>
class IShape {
  public:
  virtual double area()=0;
  virtual double circumference()=0;
};
class Polygon:public IShape {
  int m_sides;
  public:
  Polygon(int n);   //no.of sides
};
class Circle : public IShape {
  double m_radius;

public:
  const static double PI = 22.0/7.0;
  Circle(int r);
  double area();
  double circumference();
};
Polygon
class Rectangle : public Polygon {
  int  m_length;
  int  m_breadth;

public:
  Rectangle(int l,int b);
  double area();
  double circumference();
};
class Triangle : public Polygon {
  int  m_a;
  int  m_b;
  int  m_c;

public:
  Triangle(int x,int y,int z);
  double area() ;
  double circumference();
};
