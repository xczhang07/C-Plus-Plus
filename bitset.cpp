/* A bitset stores bits(elements only possible with two values: 0 or 1, true or false...) 
   Its memeber function as following:
	count
	size
	test
	any
	none
	all
	set
	reset
	flip
Author: Xiaochong Zhang
Time: 2018/02/11 
*/

#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	/* create a bitset */
	cout<<"========create a bitset========"<<endl;
	bitset<6> bset1;
	bset1[0] = 1;
	cout<<"bset1 is: "<<bset1<<endl;
	cout<<endl;
	/* create second bitset */
	cout<<"========demo for bitset count function========"<<endl;
	bitset<8> bset2(string("10110011")); // we can use string to initialize bitset
	cout<<"bset2 is: "<<bset2<<endl;
	cout<<"bset2 has 1's number is: "<<bset2.count()<<endl;
	cout<<"bset2 has 0's number is: "<<bset2.size()-bset2.count()<<endl;
        cout<<endl;
	
	/* demo test function of bitset, the test function is used to check whether or not a bit is set or not in the bitset */
	cout<<"========demo for test function of bitset========"<<endl;
	for(int i = 0; i < bset2.size(); ++i)
	{
		cout<<bset2.test(i)<<endl;
	}
	cout<<endl;
	
	/* demo any function of bitset, the any function is used to check whether or not the bitset is set */
	cout<<"========demo for any function of bitset========"<<endl;
	bitset<4> bset3(string("1000"));
	if(bset3.any())
		cout<<"bset3 has been set, and it has 1's number is: "<<bset3.count()<<endl;
	else
		cout<<"bset3 has not been set"<<endl;
	cout<<endl;
	
	/* demo for set function of bitset */
	cout<<"========demo for set function of bitset========"<<endl;
	cout<<"before calling set(), bset3 is: "<<bset3<<endl;
	bset3.set(1); // set the index 1 of bset3 from 0 to 1
	cout<<"after set the pos 1 from 0 to 1, bset3 is: "<<bset3<<endl;
	cout<<endl;
	
	/* demo reset function of bitset */
	cout<<"========demo for reset function of bitset========"<<endl;
	cout<<"before calling reset(), bset3 is: "<<bset3<<endl;
	bset3.reset();
	cout<<"after calling reset(), bset3 is: "<<bset3<<endl;
	cout<<endl;

	/* demo flip function of bitset */
	cout<<"========demo for flip function of bitset========"<<endl;
	cout<<"before calling flip(), bset2 is: "<<bset2<<endl;
	bset2.flip();
	cout<<"after calling flip(), bset2 is: "<<bset2<<endl;
	cout<<endl;

	return 0;
}
