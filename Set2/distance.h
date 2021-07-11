#ifndef _DISTANCE_H
#define _DISTANCE_H
#include<iostream>
#include<cmath>
class Distance {
  int m_feets;
  int m_inches;
  public:
  Distance();
  Distance(int,int);
  Distance(int);
  Distance operator+(const Distance&);
  Distance operator-(const Distance&);
  Distance operator+(int);
  Distance operator-(int);
  Distance& operator++();
  Distance operator++(int);
  bool operator==(const Distance&);
  bool operator<(const Distance&);
  bool operator>(const Distance&);
  void dispay() const;
  friend std::ostream& operator<<(const std::ostream&, const Distance&);
};
