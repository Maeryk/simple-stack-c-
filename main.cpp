/// @author Gordon Bittner
/// This program will take a binary number (entered by the user
/// and calculate the decimal equivalent using a stack.
/// It will also check to make sure the number entered
/// is a valid binary number (no numbers besides 1 or 0)
/// 

#include <iostream>
#include <cmath>
#include <stack>


using namespace std;


int main()
{

	
	//creating stack, and other variables that will be used
	stack <int> bintodec;
	bool check = false;
	string binaryNumber;
	string loopcheck = "";
	

	//Loop that will run until the user enters "exit" 
	while(loopcheck !="exit")
	{
		int total = 0;
		//asking user to enter a binary number
		cout << "Enter number in binary: ";
		cin >> binaryNumber;
		int x = 0;
		//loop that continues until x = the length of the input
		while(x < binaryNumber.length())
		{
			//if/else statements that check the value of each number
			if(binaryNumber.at(x) == '0')
			{
				bintodec.push(0);
				x++;
			}
			else if(binaryNumber.at(x) == '1')
			{
				bintodec.push(1);
				x++;
			}
			else
			{
				check = true;
				x = binaryNumber.length();
			}
		}
		
		//if else conditions that depend on the values found in the input
		if(check == true){
			cout<<"Invalid number."<<endl;
			cout<<"Enter any number to continue, or type exit to quit."<<endl;
			cin>>loopcheck;
		}
		else {
			//if the binary number is acceptable, this will display
			// the decimal equivalent.
			for(int i = 0; i < binaryNumber.length(); i++)
			{
				total = total + bintodec.top() *pow(2.0, i);
				bintodec.pop();
			}
			
			cout<<"Binary: "<<binaryNumber<<"\nDecimal: "<<total<<endl;
				
			cout<<"Enter any number to continue, or type exit to quit."<<endl;
			cin>>loopcheck;
		}
	}
}
				





