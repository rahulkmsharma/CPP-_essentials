#include "polygon.h"
#ifndef _RECTANGLE_H
#define _RECTANGLE_H
#include<iostream>
#include<cmath>
class Rectangle : public Polygon {
  int  m_length;
  int  m_breadth;

public:
  Rectangle(int l,int b);
  double area();
  double circumference();
};
