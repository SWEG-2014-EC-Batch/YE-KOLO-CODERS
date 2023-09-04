#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
T eucliDistance(T& x1, T& x2, T& y1, T& y2){
	
	T dx = (x2 - x1);
	T dy = (y2 - y1);
	T result = (pow(dx, 2)) + (pow (dy, 2));
	return sqrt(result);
}
int main(){
	//distance (double)
	
	double x1 = 2.34, x2 = 4.33;
	double y1 = 3.44, y2 = 5.67;
	double distance1 = eucliDistance <double> (x1, x2, y1, y2);
	cout << "Euclidean distance for double "  << distance1 << endl;
	
	// distance (int)
	int x3 = 3, x4 = 6;
	int y3 = 7, y4 = 11;
	int distance2 = eucliDistance <int> (x3, x4 , y3, y4);
	cout << "Euclidean distance for int " << distance2 << endl;
	return 0;
}
