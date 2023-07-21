#include <iostream>
using namespace std;

struct cordinate_point{
	int x;
	int y;
};

cordinate_point read(){
	cordinate_point p;
 	cout << "Enter two cordinate points\n";
 	cin >> p.x;
 	cin >> p.y;
    return p;
 }
 void print(cordinate_point p){
 		cout << "Cordinate: "<<"("<< p.x << ", "<< p.y << ")";
 }
 int main (){
 	cordinate_point point = read();
 	print(point);
 	return 0;
 }

