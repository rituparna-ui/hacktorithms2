#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//function to set date and time
void setDateTime(int date, int month, int year,int hour, int min, int sec)
{
	//buffer to format command
	unsigned char buff[32]={0};
	//formatting command with the given parameters
	sprintf((char*)buff,(const char *)"date -s \"%02d/%02d/%04d %02d:%02d:%02d\"",month,date,year,hour,min,sec);
	//execute formatted command using system()
	system((const char *)buff);
}

//main funcion
int main()
{
	//calling function by passing date and time
	setDateTime(25,6 , 2017,10, 10,10);
	cout<<endl;
	return 0;
}
