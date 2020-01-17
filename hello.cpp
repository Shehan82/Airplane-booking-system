#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
using namespace std;
//int main();
	struct details
	{
		char seats[20]={NULL};  //create struct
	};

class flight
{
	public:
		string flight_num,a_airport,d_airport,date_time;

	public:
		int row;
		int i;
		int j;
		string ab;
		int bt;
		int cnt1=0,cnte=0,cntb=0;
		int cnt=0;
		// fstream fin1;
		// string line1;
		// char array1[20];
		// int row1=0;
		// int count1=0;

	

	struct details row_num[60]={NULL}; 

	// public:
	// 	flight()
	// 	{
	// 		while(fin1)
	// 		{
	// 			getline(fin1,line1);
	// 			strcpy(array1,line1.c_str());
				
				
	// 			if(array1[1]==' '|| array1[2]==' ')
	// 			{
	// 				//flight_details[count].set_seat(line,row);
	// 				row1++;
	// 			}

	// 			if (array1[0]=='\0')
	// 			{
	// 				//count1++;
	// 				continue;
	// 			}
	// 		}

	// 	}

	public:
		void set_seat(string shehan,int l)
		{
			ab=shehan;
			row=l;
			strcpy(row_num[row].seats,ab.c_str());
		}
		void b_count()
		{
			
			int j;
			for(i=0;i<row;i++)
			{
				if(row_num[i].seats[2]=='B')
				{
					for(j=4;j<strlen(row_num[i].seats);j++)
					{
						cnt++;
					}
				}
			}

			cout<<"B seats : "<<cnt<<endl;
		}
		void b_count1()
		{
			
			int j;
			for(i=0;i<row;i++)
			{
				if(row_num[i].seats[2]=='B')
				{
					for(j=4;j<strlen(row_num[i].seats);j++)
					{
						cntb++;
					}
				}
			}

			//cout<<"B seats : "<<cnt<<endl;
		}
		void e_count()
		{
			
			int j;
			for(i=0;i<row;i++)
			{
				if(row_num[i].seats[3]=='E')
				{
					for(j=5;j<strlen(row_num[i].seats);j++)
					{
						cnt1++;
					}
				}
			}
			cout<<"E seats : "<<cnt1<<endl;
			//bt=cnt1;

		}
		void e_count1()
		{
			
			int j;
			for(i=0;i<row;i++)
			{
				if(row_num[i].seats[3]=='E')
				{
					for(j=5;j<strlen(row_num[i].seats);j++)
					{
						cnte++;
					}
				}
			}
			//cout<<"E seats : "<<cnt1<<endl;
			//bt=cnt1;

		}
		void set_flight_num(string x)
		{
			flight_num=x;
		}
		void get_flight_num()
		{
			cout<<flight_num<<endl;
		}
		void set_date_time(string y)
		{
			date_time=y;
		}
		void get_date_time()
		{
			cout<<date_time<<endl;
		}
		void set_a_airport(string z)
		{
			a_airport=z;
		}
		void get_a_airport()
		{
			cout<<a_airport<<endl;
		}
		void set_d_airport(string r)
		{
			d_airport=r;
		}
		void get_d_airport()
		{
			cout<<d_airport<<endl;
		}

		// void get_seat()
		// {
			
		// 	for(i=0;i<row;i++)
		// 	{
		// 		for(j=0;j<strlen(row_num[i].seats);j++)
		// 		{
		// 			cout<<row_num[i].seats[j];
		// 			//cout<<endl;
		// 		}

		// 		//cout<<endl;
				
		// 	}
		// }

		void get_seat()
		{
			
			for(i=0;i<row;i++)
			{
				
				
					cout<<row_num[i].seats<<"\n";
					//cout<<endl;
				

				//cout<<endl;
				
			}

			
		}
		

};

int main()
{
	char array[20],array1[20];
	int count=0,row=0,count1=0,i;
	fstream fin,fin1;
	string line,line1;
	int count3=0,count4=0,count5=0;

	string row_number;
	int l,p,n;
	char letter,arr[10];
	
	fin1.open("sample_data_set.txt");
	while(fin1)
	{
		getline(fin1,line1);
		strcpy(array1,line1.c_str());

		if (array1[0]=='\0')
		{
			count1++;
			continue;
		}

	}

	flight flight_details[count1];
	fin.open("sample_data_set.txt");
	int count2=0;
	while(fin)
	{
		getline(fin,line);
		strcpy(array,line.c_str());
		
		if(count2==0)
		{
			flight_details[count].set_flight_num(line);
			count2++;
		}
		else if(count2==1)
		{
			flight_details[count].set_date_time(line);
			count2++;
		}
		else if(count2==2)
		{
			flight_details[count].set_a_airport(line);
			count2++;
		}
		else if(count2==3)
		{
			flight_details[count].set_d_airport(line);
			count2++;
		}

		else if(array[1]==' '|| array[2]==' ')
		{
			flight_details[count].set_seat(line,row);
			row++;
		}


		if (array[0]=='\0')
		{
			count++;
			count2=0;
			row=0;
			continue;
		}


		


	}
	int x,s;
	string name;
	cout<<"MENU"<<endl<<endl;
	cout<<"1.Available flights"<<endl;
	cout<<"2.View flights"<<endl;
	cout<<"3.Seat availability"<<endl;
	cout<<"4.Seat booking"<<endl;
	cout<<"5.Exit"<<endl;
	cout<<endl;
	cout<<"Enter your choice : ";
	cin>>x;

	switch (x) 
	   { 
	        case 1:
			    for(i=0;i<count;i++)
				{
					flight_details[i].get_flight_num();
					flight_details[i].get_a_airport();
					flight_details[i].get_d_airport();
					flight_details[i].get_date_time();
					flight_details[i].b_count();
					flight_details[i].e_count();
					cout<<endl;
				}
				break;
			case 2:
				cout<<"Enter the flight number : ";
				cin>>name;
				
				for(i=0;i<count;i++)
				{
					count3++;
					if(flight_details[i].flight_num==name)
					{
						count3++;
						cout<<endl;
						flight_details[i].get_flight_num();
						flight_details[i].get_a_airport();
						flight_details[i].get_d_airport();
						flight_details[i].get_date_time();
						cout<<endl;
						flight_details[i].get_seat();
						cout<<endl;
						flight_details[i].b_count();
						flight_details[i].e_count();
						cout<<endl;

						break;
					}
					else if(count3==count)
					{
						
						cout<<"Invalid flight number!"<<endl;
						
						break;
					}
					// else if(flight_details[i].flight_num!=name)
					// {
					// 	cout<<"Invalid flight number!"<<endl;
					// 	break;
					// }


				}
				break;
			case 3:
				cout<<"Enter the flight number : ";
				cin>>name;
				
				
				for(i=0;i<count;i++)
				{
					count4++;

					if(flight_details[i].flight_num==name)
					{
						cout<<"Enter seat count : ";
						cin>>s;
						flight_details[i].e_count1();
						flight_details[i].b_count1();
						if((flight_details[i].cnte+flight_details[i].cntb)>=s)
							{cout<<"flight is present"<<endl;}
						else
						{
							cout<<"There is only "<<flight_details[i].cnte+flight_details[i].cntb<<" seats available"<<endl;
						}
						break;
					}
					else if(count4==count)
					{
						cout<<"Invalid flight number!"<<endl;
						break;
					}
				} 
				break;
			case 4:
				//cout<<"helloo";
				cin>>name;

				for(i=0;i<count;i++)
				{
					count5++;
					if(flight_details[i].flight_num==name)
					{
						count5++;
							cin>>row_number;
							strcpy(arr,row_number.c_str());

							//cout<<arr[0];
							for(l=0;l<60;l++)
							{
								//cout<<"hello";
									if(flight_details[i].row_num[l].seats[0]==arr[0] &&  flight_details[i].row_num[l].seats[1]==' ')
									{
										cin>>letter;
										for(p=4;p<strlen(flight_details[i].row_num[l].seats);p++)
										{
											if(flight_details[i].row_num[l].seats[p]==letter)
											{
												for(n=p;n<strlen(flight_details[i].row_num[l].seats);n++)
												{
													flight_details[i].row_num[l].seats[p]=flight_details[i].row_num[l].seats[p+1];
													p++;
												}
												
											}
										}
										flight_details[i].get_seat();
										
									}
									else if(flight_details[i].row_num[l].seats[0]==arr[0] && flight_details[i].row_num[l].seats[1]==arr[1])
									{
										cin>>letter;
										for(p=5;p<strlen(flight_details[i].row_num[l].seats);p++)
										{
											//cout<<"wjwejh";
											if(flight_details[i].row_num[l].seats[p]==letter)
											{
												for(n=p;n<strlen(flight_details[i].row_num[l].seats);n++)
												{
													flight_details[i].row_num[l].seats[p]=flight_details[i].row_num[l].seats[p+1];
													p++;
													//cout<<"blk";
												}
												//cout<<strlen(flight_details[i].row_num[l].seats);
												break;
											}

										}
										flight_details[i].get_seat();

									}
							}
							

						break;
					}
					else if(count5==count)
					{
						
						cout<<"Invalid flight number!"<<endl;
						
						break;
					}
					


				}
				//break;
			



	   } 


	
		//flight_details[3].get_seat();
	

}