#include <iostream>
#include <vector>

int binary_search(std::vector<int>& data, int a, int z, int tofound)
{
	if(a>z) return -1;
	int m=(z+a)/2;
	if(data[m]==tofound)
		return m;
	if(data[m]<tofound)
		return binary_search(data,m+1,z,tofound);
	else
		return binary_search(data,a,m-1,tofound);
}

int binary_search(std::vector<int>& data,int tofound)
{
	return binary_search(data,0,data.size()-1,tofound);
}

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