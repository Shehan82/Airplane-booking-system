#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;

// typedef struct flights
// {
// 	char flightnum[5];
// 	char datetime[20];
// 	char D_airport[20];
// 	char A_airport[20];
// 	char seats[20];
// }details;

class flight
{
	int count=0,i; //available_flight variables
	int count1=0;
	char array[20];
	fstream fin;
	string line;

	string data;

	public:
		void available_flights();
		void view_flights();
};

void flight::available_flights()
{
	fin.open("sample_data_set.txt");
	while(fin)
	{
		getline(fin,line);
		strcpy(array,line.c_str());
		
		if(array[0] == 'V')
		{
			cout<<line<<endl;
		}
		else if(array[1]!=' ' && array[2]!=' ')
		{
			cout<<line<<endl;
		}
		
		if((array[1]==' ')&&(array[2]=='B')) //count B seats
		{
			for(i=4;i<strlen(array);i++)
			{
				count++;
			
			}	
		}
		else if((array[2]==' ')&&(array[3]=='B')) //count B seats
		{
			for(i=5;i<strlen(array);i++)
			{
				count++;
			
			}	
		}

		if((array[1]==' ')&&(array[2]=='E')) //count E seats
		{
			for(i=4;i<strlen(array);i++)
			{
				count1++;
			
			}	
		}
		else if((array[2]==' ')&&(array[3]=='E')) //count E seats
		{
			for(i=5;i<strlen(array);i++)
			{
				count1++;
			
			}	
		}



		
		if (array[0]=='\0')
		{
			cout<<"B class seats : "<<count<<endl;
			cout<<"E class seats : "<<count1<<endl;
			count=0;
			count1=0;
			cout<<endl;
			continue;
		}
		
		

	}
}

void flight::view_flights()
{
	int count2=0;
	getline(cin,data);
	fin.open("sample_data_set.txt");
	while(fin)
	{
		getline(fin,line);
		strcpy(array,line.c_str());
		if(data==line)
		{
			count2++;
			while(fin)
			{
				getline(fin,line);
				strcpy(array,line.c_str());
				
				if(array[0] == 'V')
				{
					cout<<line<<endl;
				}
				else if(array[1]!=' ' && array[2]!=' ')
				{
					cout<<line<<endl;
				}
				
				if((array[1]==' ')&&(array[2]=='B')) //count B seats
				{
					for(i=4;i<strlen(array);i++)
					{
						count++;
					
					}	
				}
				else if((array[2]==' ')&&(array[3]=='B')) //count B seats
				{
					for(i=5;i<strlen(array);i++)
					{
						count++;
					
					}	
				}

				if((array[1]==' ')&&(array[2]=='E')) //count E seats
				{
					for(i=4;i<strlen(array);i++)
					{
						count1++;
					
					}	
				}
				else if((array[2]==' ')&&(array[3]=='E')) //count E seats
				{
					for(i=5;i<strlen(array);i++)
					{
						count1++;
					
					}	
				}



				
				if (array[0]=='\0')
				{
					cout<<"B class seats : "<<count<<endl;
					cout<<"E class seats : "<<count1<<endl;
					count=0;
					count1=0;
					cout<<endl;
					break;
				}
			}
		}


		
	}
	if(count2<1)
	{
		cout<<"This flight is not present!"<<endl;
	}	
}	

int main()
{
	flight a;
	//a.available_flights();
	a.view_flights();

	return 0;
}