#include "distance.h"

Distance :: Distance():m_feets(0),m_inches(0){}
Distance :: Distance(int feet,int inch):m_feets(feet),m_inches(inch){}
Distance :: Distance(int feet):m_feets(feet),m_inches(0){}
Distance Distance :: operator+(const Distance& ref){
	int feet,inch;
	bool flag=0;
	if((m_inches+ref.m_inches) > = 12)
	{
		inch=m_inches+ref.m_inches-12;
		flag=1;
	}
	if(flag)
		feet=m_feets+ref.m_feets+1;
	else
		feet=m_feets+ref.m_feets;
	return Distance(feet,inch);
}
Distance Distance :: operator-(const Distance&)
{
	int feet,inch;
	if(m_feets*12+m_inches > ref.m_feets*12+ref.m_inches)
	{
		feet=m_feets-ref.m_feets;
		inch=m_inches-ref.m_inches;
	}
	else
	{
		feet=ref.m_feets-m_feets;
		inch=ref.m_inches-m_inches;
	}
	return Distance(feet,inch);
}
Distance Distance :: operator+(int feet)
{
	int feet=m_feets+feet;
	return Distance(feet,m_inches);
}
Distance Distance :: operator-(int feet)
{
	int feet=abs(m_feets-feet);
	return Distance(feet,m_inches);
}
Distance& Distance :: operator++()
{
	if(m_inches<11) ++m_inches;
	else
	{
		m_inches=0;
		++m_feets;
	}
	return *this;
}
Distance Distance :: operator++(int dummy)
{
	Distance dis(*this);
	if(m_inches<11) ++m_inches;
	else
	{
		m_inches=0;
		++m_feets;
	}
	return dis;
}
bool Distance :: operator==(const Distance& ref)
{
	return (m_feets==ref.m_feets && m_inches==ref.m_inches);
}
bool Distance :: operator<(const Distance& ref)
{
	if(m_feets*12+m_inches < ref.m_feets*12+ref.m_inches) return 1;
	else return 0;
}
bool Distance :: operator>(const Distance& ref)
{
	if(m_feets*12+m_inches > ref.m_feets*12+ref.m_inches) return 1;
	else return 0;
}
void Distance :: dispay() const
{
	cout<<"feets : "<<m_feets<<" inches : "<<m_inches<<endl;
}
friend std::ostream& operator<<(const std::ostream& rout, const Distance& ref)
{
	rout<<ref.m_feets<<":"<<ref.m_inches<<endl;
	return rout;	
} 
