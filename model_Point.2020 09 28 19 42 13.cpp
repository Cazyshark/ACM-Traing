#include<iostream>
using namespace std;

template<T> struct Point{
			T x,y;
			Point(T x=0,T y=0):x(x),y(y){
			}
};

template <typename T>
Point<T> operator + (const Point<T> &A,const Point <T> &B){
	return Point<T>(A.x+B.x,A.y+B.y);
}

template <typename T>
ostr
