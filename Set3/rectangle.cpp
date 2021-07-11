#include "rectangle.h"
#include<iostream>
#include<cmath>
Rectangle :: Rectangle(int l,int b):m_length(l),m_breadth(b){}
double Rectangle :: area(){return m_length*m_breadth;}
double Rectangle :: circumference(){return 2*m_length*m_breadth;}
