#include "shape.h"
#ifndef _POLYGON_H
#define _POLYGON_H
#include<iostream>
class Polygon:public IShape {
  int m_sides;
  public:
  Polygon(int n):m_x(n){}   //no.of sides
  virtual double area(){return 0;}
  virtual double circumference(){return 0;}
};


