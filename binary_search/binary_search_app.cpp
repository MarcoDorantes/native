#include <iostream>
#include <vector>

#include "binary_search.h"

void main()
{
	try
	{
		std::vector<int> data;
		data.push_back(0);
		data.push_back(1);
		data.push_back(2);
		data.push_back(3);
		data.push_back(4);
		int tofound = 4;
		int index = binary_search(data,tofound);
		if(index >= 0)
		{
			std::cout << tofound << " found at " << index << std::endl;
		}
		else
		{
			std::cout << tofound << " not found.\n";
		}

	}
	catch(std::exception& e){std::cout << e.what() << std::endl;}
}