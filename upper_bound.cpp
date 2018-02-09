/* c++ upper_bound function returns an iterator point to the first element in the input range [first, last), which 
compares greater than val */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> vec = {1,2,3,4,5,7};
	vector<int>::iterator upper1 = upper_bound(vec.begin(), vec.end(), 6);
	vector<int>::iterator upper2 = upper_bound(vec.begin(), vec.end(), 8);
	
	if (upper1 == vec.end())
		cout<<"there is no element greater than 6 in the input array"<<endl;
	else
		cout<<"the upper bound of 6 is: "<<*upper1<<endl;

	if(upper2 == vec.end())
		cout<<"there is no element greater than 8 in the input array"<<endl;
	else
		cout<<"the upper bound of 8 is: "<<*upper2<<endl;
	return 0;
}
