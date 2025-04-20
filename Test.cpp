#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double prices[3];
	//array values
	prices[0] = 10.00;
	prices[1] = 20.00;
	prices[2] = 30.00;
	
	// array printed
	if(prices <= 30){
		cout << prices[0] << endl;
	}else{
		cout << prices[1] << endl;
	}

}
