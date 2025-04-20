#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double prices[4];
	//array values
	prices[0] = 10.00;
	prices[1] = 20.00;
	prices[2] = 30.00;
	prices[3] = 40.00;
	// array printed
	if(prices[2] <= 40){	
		cout << prices[2] << " is less than or equal to " << 40 << endl;
	}else{
		cout << prices[2] << " is greater than " << 40 << endl;
	}
	return 0;
}
