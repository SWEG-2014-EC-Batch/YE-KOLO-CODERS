#include <iostream>
using namespace std;
void a();
 void b();
 int main(){
 	 a(); 
 	 b();
 	
 }
  void a(){
 	cout<<"me "<<endl;
 	
	  b();
 }
 	void b(){
 		cout<<"you "<<endl;
 		 a();
	 }
