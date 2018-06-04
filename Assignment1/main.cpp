#include <iostream>

int main(){
	int number;
	bool isPrime = false;

	std::cout << "Enter a number: " << std::endl;
	std::cin >> number;

	if(number % 2 = 0){ // is prime
		isPrime = true;
	}

	if(isPrime){
		std::cout << "Number is prime." << std::endl;
	}
}