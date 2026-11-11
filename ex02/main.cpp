#include <iostream>
#include <cstdlib>
#include <string>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << "Subject provided tests:\n\n";
	{
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];

		srand(time(NULL));

		for (int i = 0; i < MAX_VAL; i++){
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}

	//SCOPE
		
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		try{
			Array<std::string> empty;
			Array<std::string> words(3);
			std::cout << words[0];
			words[2] = "Hello";
			std::cout << words[2] << '\n';
			empty = words;
			std::cout << empty[0] << " and " << empty[2] << '\n';
		}
		catch(const std::exception& e){
			std::cout << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++){
			if (mirror[i] != numbers[i]){
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}

		try{
			numbers[-2] = 0;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << '\n';
		}

		try{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++){
			numbers[i] = rand();
		}

		delete [] mirror;
	}
	std::cout << "TESTING COPY CONSTRUCTOR AND COPY ASSIGNMENT\n\n";
	{
		Array<char> original(5);
		for (int i = 0; i < 5; ++i){
			original[i] = 'a' + i;
		}

		Array<char> ccopy(original);
		Array<char> acopy(original);

		std::cout << "Original array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << original[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Copy Constructed array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << ccopy[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Copy Assigned array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << acopy[i] << " ";
		}
		std::cout << "\n";

		std::cout << "\nINCREMENTING ORIGINAL ARRAY\n\n";
		for (int i = 0; i < 5; ++i){
			++original[i];
		}

		std::cout << "Updated original array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << original[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Copy Constructed array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << ccopy[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Copy Assigned array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << acopy[i] << " ";
		}
		std::cout << "\n";

		std::cout << "\nDECREMENTING COPY CONSTRUCTED ARRAY\n\n";
		for (int i = 0; i < 5; ++i){
			--ccopy[i];
		}

		std::cout << "Updated original array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << original[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Updated Copy Constructed array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << ccopy[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Copy Assigned array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << acopy[i] << " ";
		}
		std::cout << "\n";

		std::cout << "\nCHANGING COPY ASSIGNED ARRAY\n\n";
		for (int i = 0; i < 5; ++i){
			acopy[i] = '0' + i;
		}

		std::cout << "Updated original array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << original[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Updated Copy Constructed array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << ccopy[i] << " ";
		}
		std::cout << "\n";

		std::cout << "Updated Copy Assigned array:\n";
		for (int i = 0; i < 5; ++i){
			std::cout << acopy[i] << " ";
		}
		std::cout << "\n";

	}
	return 0;
}