/*
 * main.cpp
 *
 *  Created on: Jan 4, 2023
 *      Author: user5
 */
#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
	//int my_array[] = {1,5,2,7,3,9,4,10,15,11};
	//std::vector<int> Narray(my_array,my_array+10);
	std::vector<int> Narray{19,5,2,7,30,22,11,9,4,10,15,11};
	std::sort(Narray.begin(), Narray.end());
	std::cout << "Sorted array: \n";
	for (auto data = Narray.begin(); data != Narray.end(); data++)
		std::cout << *data << std::endl;
	return 0;
}



