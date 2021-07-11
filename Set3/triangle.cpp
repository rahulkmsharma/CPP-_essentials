#include "triangle.h"
#include<iostream>
#include<cmath>
Triangle :: Triangle(int x,int y,int z):m_a(x),m_b(y),m_c(z){}
double Triangle :: area () 
{
	int s=(m_a+m_b+m_c)/2;
	return sqrt(s*(s-m_a)*(s-m_b)*(s-m_c));
}
double Triangle :: circumference(){return (m_a+m_b+m_c);}
