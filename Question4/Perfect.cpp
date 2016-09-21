/*
 * Perfect.cpp
 *
 *  Created on: Sep 13, 2016
 *      Author: Kimberly
 */
#include <stdlib.h>
#include <iostream>
using namespace std;

bool isPerfect(int number);
int sumOfDivisors(int number);

int main() {
	int i;
	for (int i; 3 <= i < 30; i++){
		isPerfect(i);
		cout<<"The original number is: "<< i;//prints out original number and boolean value
		cout<<"The boolean for the number is: "<<isPerfect(i);
	}
}
bool isPerfect(int number){
	//positive number equal to sum of divisors
	if (sumOfDivisors==number){
		return true;
	}
	else{
		return false;
	}

}

int sumOfDivisors(int number){ //Finds the sum of divisors of a number based off of mathematical equation and sum using prime factorization
	int sumOfDivisors = 1;

		for(int k = 2; k * k <= number; ++k)
		{
			int p = 1;
			while(number % k == 0)
			{
				p = p * k + 1;
				number /= k;
			}

			sumOfDivisors *= p;
		}

		if(number > 1)
			sumOfDivisors *= 1 + number;

		return sumOfDivisors;
	}

