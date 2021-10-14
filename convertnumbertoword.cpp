#include<iostream>
#include<cmath>
using namespace std;

int reverse(int v,int lim)  /*Method to reverse the number*/
{
	if(lim==1)          
		return v;
	else
		return (((v%10)*pow(10,lim-1))+reverse(v/10,lim-1)); 
}

void print_c(int digit,int l,int r=12)     /*Method to print word equivalent of a number*/
{
	if(l!=2)                           /*l is the length of number */    
	{                                  /*digit is the digit being processed*/
		switch(digit)                  /*TO print digit at ones place*/    
		{                                   
			case 1: cout<<"one ";
			break;
			case 2: cout<<"two ";
			break;
			case 3: cout<<"three ";
			break;
			case 4: cout<<"four ";
			break;
			case 5: cout<<"five ";
			break;
			case 6: cout<<"six ";
			break;
			case 7: cout<<"seven ";
			break;
			case 8: cout<<"eight ";
			break;
			case 9: cout<<"nine ";
			break;
		}
	}
	else if(l==2)                       /*to print digit at tens place*/      
	{
		switch(digit)                      
		{
			case 1: switch(r)           /*TO print values such as ten,thirteen etc.*/
			{
				case 0: cout<<"ten";
				break;
				case 1: cout<<"eleven";
				break;
				case 2: cout<<"twelve";
				break;
				case 3: cout<<"thirteen";
				break;
				case 4: cout<<"fourteen";
				break;
				case 5: cout<<"fifteen";
				break;
				case 6: cout<<"sixteen";
				break;
				case 7: cout<<"seventeen";
				break;
				case 8: cout<<"eighteen";
				break;
				case 9: cout<<"nineteen";
				break;
			}
			break;
			case 2: cout<<"twenty ";
			break;
			case 3: cout<<"thirty ";
			break;
			case 4: cout<<"fourty ";
			break;
			case 5: cout<<"fifty ";
			break;
			case 6: cout<<"sixty ";
			break;
			case 7: cout<<"seventy ";
			break;
			case 8: cout<<"eighty ";
			break;
			case 9: cout<<"ninty ";
			break;
			case 0: cout<<"";
		    break;
		
		}
	}
}
int main()
{
	int num,temp,length=0,result,n,m=0;  
	cout<<"Enter the number :";
	cin>>num;
	temp=num;	

	for(;num>0;num/=10)
	{
	 length++;
	}	

	result=reverse(temp,length);
	while(result)
	 {
		 n=result%10;
		 m=m*10+n;
		 result/=10;
		 if(length==1)
		 {
			 print_c(n,length);       /*To print the digit at ones place*/
		 }
		 else if(length==2)
		 {
			 if(n==1)
			 {
				 print_c(n,length,result); /*To print the digit at tens place like ten,twelve etc.*/
				 break;
			 }
			 else
			 {
				 print_c(n,length);    /*To print the digit at tens place like twenty,thirty etc.*/
				 length--;
			 }
		 }
		 else if(length==3)
		 {
			 print_c(n,length);    /*To print the digit at hundred place*/
			 length--;
			 if(n!=0)
			 {
				 cout<<"hundred ";
			 }
		 }
		 else if(length==4)             
		 {
			 print_c(n,length);       /*To print the digit at thousand place*/
			 length--;
			 cout<<"thousand ";
		 }
	 } 
	
	return 0; 
}
