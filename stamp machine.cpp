 /*
 Name:Gautam Aryal
 Date: 2021/09/06
 Project Name:Stamp Machine
 Statement: I am asked to stimulate a postage stamp vending machine .A customer inserts dollar bills in to 
 the vending machine and then pushes a "purchase"button .Then vending machine gives out as many first class stamps 
 as the customer paid for,and return the change in penny (one cent)stamps.A first -class stamp cost is 44 cents 
 */

#include<iostream>
using namespace std;
// Global Declaration 

int main()
{
	int dollar;
	//Dollar is integer so ,we use int  
	
	cout<<" Enter the  amount of dollar to stamp "<<endl;
	cin>>dollar;
	// asking amount of dollar 
	
	dollar=dollar*100;
	// converting the dollar in to cents
	cout<<" Dispensed\n"<< dollar/44
	// dividing the total cents to get the first class stamp 
	<<"\n First Class Stamp"<<"\n Dispensed\n"
	<< dollar%44<<"\n Penny Stamp\n ";
	// to get the reminder 
	return 0;	
}
