/*
Description: priority queue is a type of container adaptors, specifically designed such that its first element is always
	     the greatest of the elements it contains, according to some strict weak ordering criterion.
	     It is very similar with heap, where elements can be inserted at any moment, and only the max heap element can
	     be retrieved (the one at the top in the priority queue)
Author: xiaochong zhang
Time: 2018/02/02
 
*/
#include<iostream>
#include<queue>

using namespace std;

int main()
{
	/* demonstrate empty function of priority queue */
	cout<<"-----demonstrate empty function of priority queue-----"<<endl;
	priority_queue<int> pq1;
	if(pq1.empty())
		cout<<"pq1 is empty"<<endl;
	else
		cout<<"pq1 is not empty"<<endl;
	cout<<"insert integer 1 into pq1..."<<endl;
	pq1.push(1);
	if(pq1.empty())
		cout<<"pq1 is empty"<<endl;
	else
		cout<<"pq1 is not empty, its top element is: "<<pq1.top()<<endl;
	cout<<endl;

	/* demonstrate size function of priority queue */
	cout<<"-----demonstrate size function of priority queue-----"<<endl;
	cout<<"pq1's size is: "<<pq1.size()<<endl;
	cout<<"inserting 5 more elements into pq1..."<<endl;
	for(int i = 2; i < 7; ++i)
		pq1.push(i);
	cout<<"after insertion 5 more elements into pq1"<<endl;
	cout<<"pq1's size is: "<<pq1.size()<<endl;
	cout<<endl;
	
	/* demonstrate top function of priority queue */
	cout<<"-----demonstrate top function of priority queue-----"<<endl;
	cout<<"according to the priority queue's property, in this case, the top value of pq1 should be 6"<<endl;
	cout<<"top value of pq1 is: "<<pq1.top()<<endl;
	cout<<endl;
	
	/* demonstrate the emplace function of priority queue, emplace function adds a new element
	   to the priority queue, the new element is constructed in place, which is the biggest difference with 
	   push function */
	cout<<"-----demonstrate emplace function of priority queue-----"<<endl;
	priority_queue<string> fruitQ;
	fruitQ.push("apple");
	fruitQ.push("grape");
	fruitQ.push("water-melon");
	fruitQ.push("pear");
	cout<<"fruitQ has: ";
	while(!fruitQ.empty())
	{
		cout<<fruitQ.top()<<" ";
		fruitQ.pop();
	}
	cout<<endl;

	return 0;
}
