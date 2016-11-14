#include <iostream>
#include <vector>

#include "binary_search.h"

void on_vector()
{
	std::vector<int> data;
	data.push_back(10);
	data.push_back(11);
	data.push_back(12);
	data.push_back(13);
	data.push_back(14);
	int tofound = 11;
	int index = binary_search(data,tofound);

	const int expected = 1;
	if(index != expected) std::cout << "on_vector fail: expected " << expected << " actual " << index << std::endl;
}

void main()
{
	try
	{
		on_vector();
	}
	catch(std::exception& e){std::cout << e.what() << std::endl;}
}