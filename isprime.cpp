#include <iostream>


// test divisors of number, if a divisor other than 1 and number is
// found, then number is not prime.


int main(){

  int number;

  //Asks for the user input
  std::cout << "Enter an integer: ";
  std::cin >> number;

  //initial value
  bool isPrime = true;

  //Base case
  if (number<=1)
    isPrime = false;

  //A prime number is a number that can only be divided by itself 
  //and 1 without remainders. 
  for (int i = 2; i <= number/2; i++)
    if ((number % i)==0)
      isPrime = false;

  //Responds with a valid response if the number is prime.
  if (isPrime)
    std::cout << "Prime\n";
  else
    std::cout << "Not prime\n";
  
  return 0;
}