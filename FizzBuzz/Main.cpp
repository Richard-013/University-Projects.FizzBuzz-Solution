// Richard Horton 2018

#include <iostream>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)  // Prints FizzBuzz when number is divisible by both 3 and 5
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (i % 3 == 0)  // Prints Fizz when number is divisible by 3
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (i % 5 == 0)  // Prints Buzz when number is divisible by 5
		{
			std::cout << "Buzz" << std::endl;
		}
		else  // Prints the number when it is not divisible by 3 or 5
		{
			std::cout << i << std::endl;
		}
	}

	std::cin.ignore();  // Used to keep the terminal window open

	return 0;
}