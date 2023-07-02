#include <iostream>
using namespace std;

void calcQuotient(double n1, double n2, double& answer)
{
	answer = n1 / n2;
	answer++;
	
}


int main(){
      double num1 = 16, num2 = 8, quotient;
      
    cout <<"Before, main \n" << num1 <<endl << num2 <<endl;
    
      calcQuotient(num1, num2, quotient);
    
    cout <<"After, main \n"<< num1 <<endl << num2 <<endl << quotient;
    return 0;
}
