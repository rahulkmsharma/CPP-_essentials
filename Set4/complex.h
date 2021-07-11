#ifndef __COMPLEX_H
#define __COMPLEX_H
template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  Complex(T,T);
  void display();
};
template <typename T> Complex :: Complex():m_real(0),m_image(0){}
template <typename T> Complex :: Complex(T x , T y):,m_real(x),m_image(y){}
template <typename T> void Complex :: Complex()
{
	cout<<m_real<<"i + "<<m_image<<endl;
}
