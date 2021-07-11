#include "shape.h"
#ifndef _CIRCLE_H
#define _CIRCLE_H
#include<iostream>
#include<cmath>
class Circle : public IShape {
  double m_radius;

public:
  const static double PI = 22.0/7.0;
  Circle(int r);
  double area();
  double circumference();
};

