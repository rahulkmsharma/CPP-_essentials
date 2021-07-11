#include "point.h"
Point :: Point():m_x(0),m_y(0) {}
Point :: Point(int x,int y) :m_x(x),m_y(y){}
Point :: Point(const Point& ref) :m_x(ref.m_x),m_y(ref.m_y){}
double Point :: distanceFromOrigin()  const {
	return sqrt(m_x*m_x+m_y*m_y);
}
Quadrant Point :: quadrant() const{
	enum Quadrant Q;
	if(m_x>0 && m_y>0)
	{
		Q=Q1;
		return Q;
	}
	else if(m_x<0 && m_y>0)
	{
		Q=Q2;
		return Q;
	}
	else if(m_x<0 && m_y<0)
	{
		Q=Q3;
		return Q;
	}
	else if(m_x>0 && m_y<0)
	{
		Q=Q4;
		return Q;
	}
}
bool Point :: isOrigin() const{
	return (m_x==0 && m_y==0);
}
bool Point :: isOnXAxis() const{
	return (m_x==0 && 1);
}
bool Point :: isOnYAxis() const{
	return (1&& m_y==0);
}
void Point :: display() const{
	cout<<"("<<m_x<<","<<m_y<<")"<<endl;
}
