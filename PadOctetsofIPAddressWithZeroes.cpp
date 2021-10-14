#include<iostream>
using namespace std;

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void padZeroIP(char *str)
{
	int oct1=0;
	int oct2=0;
	int oct3=0;
	int oct4=0;

	int CIDR = 0;

	int i = 0;

	const char s[2] = ".";
	char *token;
	
	/* get the first token */
    	token = strtok(str, s);

	oct1 = atoi(token);
	
	/* walk through other tokens */
    	while( token != NULL ) 
    	{
			token = strtok(NULL, s);
			
			if(i==0)
				oct2 = atoi(token);
			else if(i==1)
				oct3 = atoi(token);
			else if(i==2)
				oct4 = atoi(token);
			i++;
    	}
    
    	sprintf(str,"%03d.%03d.%03d.%03d",oct1,oct2,oct3,oct4);
}

//main program
int main()
{
	char ip[]="192.168.10.43";
	

	cout<<endl<<"IP  before padding:  "<<ip;

	padZeroIP(ip); 

	cout<<endl<<"IP  after padding:  "<<ip;
	cout<<endl;
	
	return 0;
}
