#inlcude "polygon.h"
Polygon :: Polygon():m_sides(0){}
Polygon :: Polygon(int x):m_sides(x){}
virtual double Polygon :: area()
{
	return 0;
}
virtual double Polygon :: circumference()
{
	return 0;
}
