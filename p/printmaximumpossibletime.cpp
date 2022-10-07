#include<iostream>
using namespace std;

//Applying the concept of count Array
int count[10]={0};        

//This function will return the maximum value from count array upto the given index n
int MAX(int n)            
{ 
	int i;
	for(i=n;i>=0;i--)
	{  
		if(count[i]!=0)
		{
			count[i]--;
			return i;
		}
	}
	return -1;
}

//main program
int main()
{ 
	int x,i,y=0;
	char A[8];
	for(i=0;i<9;i++)
	{
		cin>>x;
		if(x>=0 && x<=9)
			count[x]++;
		else
		{
			cout<<"Wrong Input!Please Enter Again"<<endl;
			i--; 
		}
	}

	if(count[2]>=1 && count[1]>=1 && count[0]>=4)
		cout<<"12:00:00"<<endl;
	else
	{
		//All works for char array A[]
		for(i=0;i<8 && y!=1;i++)
		{
			if(i%3==2)
			{
				A[i]=':';
			}
			else if(i%3==0 && i>0)
			{
				//Adding '0' to convert the value into its character format
				A[i]=MAX(5)+'0';
			}   
			else if(i%3==1)
			{
				if(A[0]==0+'0' || i>1)
				{
					A[i]=MAX(9)+'0';
				}
				else
				{
					A[i]=MAX(1)+'0';
				}
			}
			else if(i==0)
				A[i]=MAX(1)+'0';
			if(A[i]==-1+'0')
				y=1;
		}
		if(y==1)
		{ 
			cout<<"Impossible Operation!"<<endl;
		}
		else
		{
			for(i=0;i<8;i++)
				if(i%3==2)
					cout<<A[i];
				else
					cout<<A[i]-'0';
			cout<<endl;
		}
	}
	return 0;
}
