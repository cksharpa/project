#include <iostream>
#include <string>
#include <stdio.h>
 #include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
	int aeroplane[13][6];
	char seatresrv[13][6];
	string ticket;
	int row[2];
	char seat;
 
	
for(int i = 0; i < 13; i++)
{
   for(int j = 0; j < 6; j++)
   {
   	   seatresrv[i][j] = '*';
   	 aeroplane[i][j] = 0;
   	   
   }
}

for(;;)
{
cout<<"#########################################"<<endl;
cout<<"Rows 1 and 2 are first class (FC)"<<endl;
cout<<"Rows 3 through 7 are business class (BC)"<<endl;
cout<<"Rows 8 through 13 are economy class (EC)"<<endl;
cout<<endl;
cout<<"* - Available"<<endl;
cout<<"X - Occupied"<<endl;
cout<<endl;
cout<<"#########################################"<<endl;
cout<<"\n\n";

//Display seat arrangements in aeroplane	
cout<<"     \tA\tB\tC\tD\tE\tF"<<endl;
cout<<"Row 1\t"<<seatresrv[0][0]<<"\t"<<seatresrv[0][1]<<"\t"
<<seatresrv[0][2]<<"\t"<<seatresrv[0][3]<<"\t"<<seatresrv[0][4]<<"\t"
<<seatresrv[0][5]<<endl;
 
cout<<"Row 2\t"<<seatresrv[1][0]<<"\t"<<seatresrv[1][1]<<"\t"
<<seatresrv[1][2]<<"\t"<<seatresrv[1][3]<<"\t"<<seatresrv[1][4]<<"\t"
<<seatresrv[1][5]<<endl;
 
cout<<"Row 3\t"<<seatresrv[2][0]<<"\t"<<seatresrv[2][1]<<"\t"
<<seatresrv[2][2]<<"\t"<<seatresrv[2][3]<<"\t"<<seatresrv[2][4]<<"\t"
<<seatresrv[2][5]<<endl;
 
cout<<"Row 4\t"<<seatresrv[3][0]<<"\t"<<seatresrv[3][1]<<"\t"
<<seatresrv[3][2]<<"\t"<<seatresrv[3][3]<<"\t"<<seatresrv[3][4]<<"\t"
<<seatresrv[3][5]<<endl;
 
cout<<"Row 5\t"<<seatresrv[4][0]<<"\t"<<seatresrv[4][1]<<"\t"
<<seatresrv[4][2]<<"\t"<<seatresrv[4][3]<<"\t"<<seatresrv[4][4]<<"\t"
<<seatresrv[4][5]<<endl;
 
cout<<"Row 6\t"<<seatresrv[5][0]<<"\t"<<seatresrv[5][1]<<"\t"
<<seatresrv[5][2]<<"\t"<<seatresrv[5][3]<<"\t"<<seatresrv[5][4]<<"\t"
<<seatresrv[5][5]<<endl;
 
cout<<"Row 7\t"<<seatresrv[6][0]<<"\t"<<seatresrv[6][1]<<"\t"
<<seatresrv[6][2]<<"\t"<<seatresrv[6][3]<<"\t"<<seatresrv[6][4]<<"\t"
<<seatresrv[6][5]<<endl;
 
cout<<"Row 8\t"<<seatresrv[7][0]<<"\t"<<seatresrv[7][1]<<"\t"
<<seatresrv[7][2]<<"\t"<<seatresrv[7][3]<<"\t"<<seatresrv[7][4]<<"\t"
<<seatresrv[7][5]<<endl;
 
cout<<"Row 9\t"<<seatresrv[8][0]<<"\t"<<seatresrv[8][1]<<"\t"
<<seatresrv[8][2]<<"\t"<<seatresrv[8][3]<<"\t"<<seatresrv[8][4]<<"\t"
<<seatresrv[8][5]<<endl;
 
cout<<"Row 10\t"<<seatresrv[9][0]<<"\t"<<seatresrv[9][1]<<"\t"
<<seatresrv[9][2]<<"\t"<<seatresrv[9][3]<<"\t"<<seatresrv[9][4]<<"\t"
<<seatresrv[9][5]<<endl;
 
cout<<"Row 11\t"<<seatresrv[10][0]<<"\t"<<seatresrv[10][1]<<"\t"
<<seatresrv[10][2]<<"\t"<<seatresrv[10][3]<<"\t"<<seatresrv[10][4]<<"\t"
<<seatresrv[10][5]<<endl;
 
cout<<"Row 12\t"<<seatresrv[11][0]<<"\t"<<seatresrv[11][1]<<"\t"
<<seatresrv[11][2]<<"\t"<<seatresrv[11][3]<<"\t"<<seatresrv[11][4]<<"\t"
<<seatresrv[11][5]<<endl;
 
cout<<"Row 13\t"<<seatresrv[12][0]<<"\t"<<seatresrv[12][1]<<"\t"
<<seatresrv[12][2]<<"\t"<<seatresrv[12][3]<<"\t"<<seatresrv[12][4]<<"\t"
<<seatresrv[12][5]<<endl;
 
cout<<endl;
		
cout<<"Please enter ticket type (FC, BC, or EC) OR Press 'X' to exit : ";
cin>>ticket;
 
if(ticket == "FC" || ticket == "fc" || ticket == "BC" ||ticket == "bc" ||ticket == "EC" ||ticket == "ec")
{	
	cout<<"Desired Row: ";  //select your desired row
	cin>>row[0];
	
	cout<<"Desired seat (A,B,C,D,E or F): "; //select your desired seat
	cin>>seat;
		
	switch(seat)
	{
		case 'A':
		case 'a':
			row[0] = row[0] - 1;
	        row[1] = 1;
	        row[1] = row[1] - 1;
		break;
		
		case 'B':
		case 'b':
		    row[0] = row[0] - 1;
	       row[1] = 2;
	        row[1] = row[1] - 1;
		break;
		
		case 'C':
		case 'c':
		    row[0] = row[0] - 1;
	       row[1] = 3;
	        row[1] = row[1] - 1;
		break;
		
		case 'D':
		case 'd':
		    row[0] = row[0] - 1;
	       row[1] = 4;
	        row[1] = row[1] - 1;
		break;
		
		case 'E':
		case 'e':
		    row[0] = row[0] - 1;
	     row[1] = 5;
	        row[1] = row[1] - 1;
		break;
		
		case 'F':
		case 'f':
		    row[0] = row[0] - 1;
	        row[1] = 6;
	        row[1] = row[1] - 1;
		break;
		
	}
	
 }
	// If ticket type is first class
	if(ticket == "FC" || ticket == "fc")
	{
		if(row[0]+1 == 1 || row[0]+1 == 2)
		{
		
		if(aeroplane[row[0]][row[1]] == 0)
		{
		   aeroplane[row[0]][row[1]] = 1;
		   seatresrv[row[0]][row[1]] = 'X';
		   system("clear");	
		   cout<<"Message: Seat "<<row[0] + 1<<seat<<" booked"<<endl;
		   cout<<"\n\n";		
		}
		else if(aeroplane[row[0]][row[1]] == 1)  //error handling, if booking already occupied seat
		{
			cout<<"\n\n";
			system("clear");	
			cout<<"Message: Seat "<<row[0] + 1<<seat<<" is already occupied"<<endl;
			cout<<"\n\n";
			
		}
		
		}
		else
		{
			cout<<"\n\n";
		  	cout<<"Incorrect Class"<<endl; //error handling, if booking incorrect class
			system("clear");
			continue;	
		}
		
	}
	else if(ticket == "BC" || ticket == "bc")
	{
		if(row[0]+1 == 3 || row[0]+1 == 4 || row[0]+1 == 5 
                || row[0]+1 == 6|| row[0]+1 == 7)
		{
		if(aeroplane[row[0]][row[1]] == 0)
		{
		   aeroplane[row[0]][row[1]] = 1;
		   seatresrv[row[0]][row[1]] = 'X';
		   system("clear");	
		   cout<<"Message: Seat "<<row[0] + 1<<seat<<" booked"<<endl;
		   cout<<"\n\n";	 	
		}
		else if(aeroplane[row[0]][row[1]] == 1) //error handling, if booking already occupied seat
		{
			cout<<"\n\n";
			cout<<"Message: Seat "<<row[0] + 1<<seat<<" is already occupied"<<endl;
			cout<<"\n\n";	
			
		}
		}
		else
		{
		  	cout<<"Incorrect Class"<<endl; //error handling, if booking incorrect class
			system("clear");
			continue;	
		}
	}
	else if(ticket == "EC" || ticket == "ec")
	{
		if(row[0]+1 == 8 || row[0]+1 == 9 || row[0]+1 == 10 
                 || row[0]+1 == 11|| row[0]+1 == 12|| row[0]+1 == 13)
		{
		if(aeroplane[row[0]][row[1]] == 0)
		{
		   aeroplane[row[0]][row[1]] = 1;
		   seatresrv[row[0]][row[1]] = 'X';
		   system("clear");	
		   cout<<"Message: Seat "<<row[0] + 1<<seat<<" booked"<<endl;
		   cout<<"\n\n";	
		}
		else if(aeroplane[row[0]][row[1]] == 1) //error handling, if booking already occupied seat
		{
			cout<<"\n\n";
			cout<<"Message: Seat "<<row[0] + 1<<seat<<" is already occupied"<<endl;
			cout<<"\n\n";
			
		}
		}
			else
		{
		  	cout<<"Incorrect Class"<<endl; //error handling, if booking incorrect class
			system("clear");
			continue;	
		}
}
	else if (ticket == "X" || ticket == "x")
	{
		exit(0);
	}
	
	  row[0] = 0;
      row[1] = 0;
	
}
	
	
	return 0; 
}
