#ifndef _POINT_H
#define _POINT_H
#include<iostream>
#include<cmath>
using namespace std;
enum Quadrant {
  Q1=1,
  Q2=2,
  Q3=3,
  Q4=4
};
class Point {
  int m_x;
  int m_y;
  public:
  Point();
  Point(int,int);
  Point(const Point&);
  double distanceFromOrigin()  const;
  Quadrant quadrant() const;
  bool isOrigin() const;
  bool isOnXAxis() const;
  bool isOnYAxis() const;
  void display() const;
};
#endif
