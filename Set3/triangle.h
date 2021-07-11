#include "polygon.h"
#ifndef _TRIANGLE_H
#define _TRIANGLE_H
#include<iostream>
#include<cmath>
class Triangle : public Polygon {
  int  m_a;
  int  m_b;
  int  m_c;

public:
  Triangle(int x,int y,int z);
  double area() ;
  double circumference();
};
