#include <iostream>
using namespace std;

//fnction to get previous date
void getPrevDate(int *day,int *month, int *year)
{
	//if there is first day of month
	if(*day==1)
	{
		//months which have 30 days in previous month
		if(*month==4|| *month==6|| *month==9|| *month==11)
		{
			*day=31;
			*month = *month -1;	
		}
		//for MARCH, to define february last day
		else if(*month==3)
		{
			if(*year%4==0)	
				*day=29;
			else
				*day=28;
			
			*month = *month -1;
		}
		//for January, to define December last day
		else if(*month==1)
		{
			*day=31;
			*month = 12;
			*year = *year - 1 ;
		}
		//for Feb, to define January last day
		else if(*month==2)
		{
			*day=31;
			*month = *month -1;
		}
		//for other months
		else
		{
			*day=30;
			*month = *month -1;
		}
	}
	//other days of month
	else
	{
		*day = *day-1;
	}	

}

int main()
{
	//date, assigning day, month and year
	int dd=1,mm=1,yy=2017;
	//printing given date
	cout<<endl<<"Date : "<<dd<<"/"<<mm<<"/"<<yy;
	//function call to get previous date
	getPrevDate(&dd,&mm, &yy);
	//printing previous date
	cout<<endl<<"Previous date : "<<dd<<"/"<<mm<<"/"<<yy;
	
	return 0;    
}
