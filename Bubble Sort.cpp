#include <iostream>
using namespace std;
int main()
{
    int array[5];
    char choice;
    for(int a=0;a<5;a++)
    {
    	cout<<"Enter element "<<a+1<<": ";            // Input array elements
    	cin>>array[a];
	}
	cout<<"\nPress 'a' to sort in ascending order "<<endl;
	cout<<"Press 'd' to sort in descending order "<<endl;
	cout<<"Enter your choice: ";
	cin>>choice;
	
	cout<<"\n------- Before Sorting -------"<<endl;
	for(int a=0;a<5;a++)
    {
    	cout<<array[a]<<" ";                   // display unsorted array
	}
	if(choice=='a')
	{
		//  ASCENDING SORTING
	    for(int a=0;a<5-1;a++)               
	    {
	       for(int b=0;b<5-1-a;b++) 
	       {
	           if(array[b]>array[b+1])
	           {
	               int temp=array[b];              // swap the elements
	               array[b]=array[b+1];
	               array[b+1]=temp;
	           }
	       }
	    }
	}
	else if(choice=='d')
	{
		//  DESCENDING SORTING
	    for(int a=0;a<5-1;a++)               
	    {
	       for(int b=0;b<5-1-a;b++) 
	       {
	           if(array[b]<array[b+1])
	           {
	               int temp=array[b];              // swap the elements
	               array[b]=array[b+1];
	               array[b+1]=temp;
	           }
	       }
	    }
	}
	else
	{
		cout<<"Invalid Input"<<endl;
		return 0;                            // end the program if invalid choice
	}
	cout<<"\n\n------- After Sorting -------"<<endl;
	for(int a=0;a<5;a++)
    {
    	cout<<array[a]<<" ";                 // display sorted array
	}
    return 0;
}
