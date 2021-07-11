#include "point.h"
#include<iostream>
int main()
{
	Point P;
	Point P2(2,3);
	Point P3(P2);
	cout<<P2.quadrant()<<endl;
	cout<<P2.distanceFromOrigin()<<endl;
	cout<<P2.isOrigin()<<endl;
	cout<<P2.isOnXAxis()<<endl;
	cout<<P2.isOnYAxis()<<endl;
	P2.display();
	return 0;
}
