#include <iostream>
// IDK WHY BUT IT DOSENT SHOW THE FIRST CIN , BUT IF YOU COPY-PASTE IN ONLINE COMPILER IT WORK PEREFECTLY

using namespace std;
int main() 
{
	int type;
	//here we are going to ask the user what type is the array
	cout<<"*******************creating your array*******************";
	cout<<"what type is you array ?"<<endl;
	cout<<"type 1 for int\ntype 2 for string\ntype 3 for double\ntype 4 for char";
	cin>>type;
	int a,b;
	string name;
	cout<<"chose a name for your array: ";
	cin>>name;
	cout<<"how big you want your array: ";
	cin>>a;
	
	//here we are going to set what type is the array
	if( type = 1 )
	{
		int array[a];
		//this for let us input all the elements to the array 
		for(int i = 0 ; i<a ; i++)
		{
			cout<<"print your array element "<<name<<"["<<i<<"]: ";
			cin>>b;
			array[i]=b;
		}
		
		//this for let us output all the elements of the arrau
		for(int j=0 ; j<a ; j++)
		{	
			cout<<name<<"["<<j<<"]: "<<array[j]<<endl;
			
		}
	
	}
	else if ( type = 2)
	{
		string array[a];
		//this for let us input all the elements to the array 
		for(int i = 0 ; i<a ; i++)
		{
			cout<<"print your array element "<<name<<"["<<i<<"]: ";
			cin>>b;
			array[i]=b;
		}
		
		//this for let us output all the elements of the arrau
		for(int j=0 ; j<a ; j++)
		{	
			cout<<name<<"["<<j<<"]: "<<array[j]<<endl;
		
		}
	}
	else if (type = 3)
	{
		double array[a];
		//this for let us input all the elements to the array 
	for(int i = 0 ; i<a ; i++)
		{
			cout<<"print your array element "<<name<<"["<<i<<"]: ";
			cin>>b;
			array[i]=b;
		}
		
		//this for let us output all the elements of the arrau
		for(int j=0 ; j<a ; j++)
		{	
			cout<<name<<"["<<j<<"]: "<<array[j]<<endl;
		
		}
	
	}
	else if (type = 4)
	{
		char array[a];
		//this for let us input all the elements to the array 
		for(int i = 0 ; i<a ; i++)
		{
			cout<<"print your array element "<<name<<"["<<i<<"]: ";
			cin>>b;
			array[i]=b;
		}
		
		//this for let us output all the elements of the arrau
		for(int j=0 ; j<a ; j++)
		{	
			cout<<name<<"["<<j<<"]: "<<array[j]<<endl;
		
	}
	
	}
	else {
		cout<<"please entre a valid number";
	}
	
	return 0;
	   }
	
	
	
	
	
	
	
	
	
	
	
	
	

