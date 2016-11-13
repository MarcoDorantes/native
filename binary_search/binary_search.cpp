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
