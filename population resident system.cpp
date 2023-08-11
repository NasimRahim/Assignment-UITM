#include <iostream>
using namespace std;
int main()
{
		int Pmale , Pfemale, TotalP, ID[100], noFon[100], Male=0, Female=0;
		char Gender[100], system= 'Y';
		string name[100];
		
		int arai=0;
		
		cout<<"RESIDENT OF DAMANSARA";
		cout<<endl<<endl;
		
		while(system != 'N')
			{
			cout<<"Please enter your name: ";
			getline(cin,name[arai]);
			cout<<endl;
		
			cout<<"Please enter your identity card number: ";
			cin>>ID[arai];
			cout<<endl;
		
			cout<<"Please enter your phone number: ";
			cin>>noFon[arai];
			cout<<endl;
		
			cout<<"Please enter your gender (Male = 1/Female = 2): ";
			cin>>Gender[arai];
			cout<<endl;
				
				if(Gender[arai]=='1')
				{
					Male++;
				}
				else
				{
					Female++;	
				}
			arai++;
			cout<<"Do you want to enter information for another employee? Y- Yes N- No: ";
			cin>>system;
			cout<<endl;
			cin.ignore();
				TotalP = Male+Female;
		
		     } 
		
		for(int nasim=0;nasim<arai;nasim++){
			cout<<endl<<endl<<"client No "<<nasim+1<<".\n";
			cout<<"Name: "<<name[nasim]<<endl;
			cout<<"IdentityCardNumber: "<<ID[nasim]<<endl;
			cout<<"Gender(1 - Male 2- Female): "<<Gender[nasim]<<endl;
			cout<<"phone number: "<<noFon[nasim]<<endl;
		}
		
		
		cout<<endl;
		cout<<"Number of population Female: "<<Female<<endl;
		cout<<"Number of population Male: "<<Male<<endl;
		cout<<"Total Population Male and Female: "<<TotalP<<endl;


return 0;
}
