#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	
double base,height,area,a,b,c,perimeter,side;
int i=0;
int count=0, count1=0, count2=0,countA=0,countP=0;
char C, conti, type, shape;

do

	{

cout<<setw(55)<<setfill('=')<<""<<endl;
cout<<"\t WELCOME TO SHAPE CALCULATION SYSTEM"<<endl;
cout<<setw(55)<<setfill('=')<<""<<endl;


cout<<"Choose the shape below by entering the shape code [1/2]:"<<endl;
cout<<"1 \t TRIANGLE"<<endl;
cout<<"2 \t SQUARE"<<endl;
cout<<"Please enter your choice : ";
cin>>shape;

cout<<endl;
cout<<endl;

cout<<"Please select type of calculation[1/2] :"<<endl;
cout<<"1 \t AREA"<<endl;
cout<<"2 \t PERIMETER"<<endl;
cout<<"Enter the type of calculation [1/2]: ";
cin>>type;
cout<<endl;
cout<<endl;
cout<<fixed<<showpoint<<setprecision(2);

{
if(shape=='1')
	{
	
	if(type=='1')
	{
		cout<<"++++++++++TRIANGLE AREA++++++++++"<<endl;
		cout<<"Please enter your base (cm): ";
		cin>>base;
		cout<<endl<<"Please enter your height (cm): ";
		cin>>height;
		area= 0.5*(base*height);
		cout<<endl;
		cout<<"++++++++++Result of Calculation++++++++++ "<<endl;
		cout<<"Area: "<<area;
		count1++;
		countA++;
	}
	else if(type=='2')
	{
		cout<<"++++++++++TRIANGLE PERIMETER++++++++++"<<endl;
		cout<<"enter your side a: ";
		cin>>a;
		cout<<endl<<"enter your side b: ";
		cin>>b;
		cout<<endl<<"enter your side c: ";
		cin>>c;
		perimeter= a+b+c;
		cout<<"++++++++++Result of Calculation++++++++++ "<<endl;
		cout<<"perimeter: "<<perimeter;
		count1++;
		countP++;
	}
	else
	{
		cout<<"Inavlid Code !!";
	}
}
else if (shape=='2')
	{
	
	if(type=='1')
	{
		cout<<"++++++++++SQUARE AREA++++++++++"<<endl;
		cout<<"Please enter the side (cm): ";
		cin>>side;
		area=side*side;
		cout<<"++++++++++Result of Calculation++++++++++ "<<endl;
		cout<<endl<<"your area: "<<area;
		count2++;
		countA++;
	}
	else if(type=='2')
	{
		cout<<"++++++++++SQUARE PERIMETER++++++++++"<<endl;
		cout<<"Please enter your side (cm): ";
		cin>>side;
		perimeter=4*side;
		cout<<"++++++++++Result of Calculation++++++++++ "<<endl;
		cout<<endl<<"your perimeter: "<<perimeter;
		count2++;
		countP++;
	}
	else
	{
		cout<<"Invalid Code !!";
	}
}
else
{
	cout<<"Invalid Code !!"<<endl;
}
}

cout<<"\n\n"<<"Do you want to continue? (Press Y or N) : ";   
	cin>>conti;
	
	if (conti == 'Y')
	{
		system("CLS");
		count++;
	}
	
	}while (conti!='N');
	
	count++;
	
	cout<<endl;
	cout<<"***************SHAPE CALCULATION REPORT*****************"<<endl;
	cout<<"\tNumber of triangle: "<<count1<<endl;
	cout<<"\tNumber of square: "<<count2<<endl;
	cout<<"\tNumber of the area calculated: "<<countA<<endl;
	cout<<"\tNumber of the perimeter calculated: "<<countP<<endl;
return 0;
}
