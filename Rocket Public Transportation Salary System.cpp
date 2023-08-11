1 // header file
2 #include <iostream>
3 #include <string>
4 #include <cstdio>
5 #include <iomanip>
6
7 using namespace std;
8
9 // user-defined function
10 void showFront();
11 void showMiddle();
12 void showLast();
13 int showYear ();
14 float calcAverageCompany (float totalCompany, int count);
15 int calcBonus (int seats, float rating, int& bonus);
16 float calcValue (int typeofpetrol, float& value);
17 void displayInfo(char[], char[], float, float, int, float,
float);
18 void getInformation(int&, int&, float&, float&, float&);
19
20 // main function
21 int main ()
22 {
23 char name [99], car[20], conti;
24 int seats, typeofpetrol, count=0, newBonus, bonus;
25 float fare, rating, distance, value, newValue, salary, company,
bonus_pe
14
26
27 // call function
28 showFront();
29 showYear();
30
31 // main do while loop
32
33 // nested loops
34 do
35
36 {
37 // display the questions for user to insert data
38
39 // pre-defined function
40 cin.ignore();
41 cout<<"\n\t\tEnter driver's name ";
42 cin.getline(name,99);
43 cout<<"\n\t\t"<<"Enter type of car (Compact, Sedan, MPV, etc)
";
44 cin.getline(car, 20);
45 getInformation(seats, typeofpetrol, fare, rating, distance);
46
47
48
49 cout<<fixed<<showpoint<<setprecision(2);
50
51 // call functions in main function
52 calcBonus (seats, rating, bonus);
53 newBonus=calcBonus (seats, rating, bonus);
15
54 calcValue (typeofpetrol, value);
55 newValue=calcValue (typeofpetrol, value); //CALL MODUL
56
57 // calculation
58 salary=fare*0.7;
59 company=fare*0.3;
60 bonus_per_month=rating*newBonus;
61 petrol=distance*newValue;
62 total_salary=salary+bonus_per_month+petrol;
63
64
65 //display
66
67
68 displayInfo(name, car, salary, bonus_per_month, petrol, company,
total_s
69
70
71 // selection to continue the system or not
72 cout<<"\n\n\t"<<"Do you want to continue? (Press Y or N) ";
//
73 cin>>conti;
74
75 if (conti == 'Y')
76 {
77 system("CLS");
78 showMiddle();
79 }
80
16
81 totalCompany=totalCompany+company;
82 count++; //CO
83
84 cout<<"\n\n";
85
86 }while (conti!='N'); //LO
87
88 // display total and average calculation
89 cout<<"\n";
90 cout<<"\tTotal number of drivers "<<count;
91 cout<<"\n\tTotal company income from drivers
RM"<<totalCompany;
92 totalAverageIncome=calcAverageCompany (totalCompany, count);
93 cout<<"\n\tAverage income from one driver
RM"<<totalAverageIncome;
94
95 // call function
96 showLast();
97
98 return 0;
99 }
100
101 // function prototype
102
103
104 // to display the starting of the system
105 void showFront() //
106 {
107 cout<<"\n\t\tWelcome To Public Transportation Salary System";
17
108 cout<<"\n\t\t Please Enter Section Below\n";
109 }
110
111 // to display the title of the system
112 void showMiddle() /
113 {
114 cout<<"\n\t\tWelcome To Public Transportation Salary System";
115 cout<<"\n\t\t Please Enter Section Below\n";
116 }
117
118 // to display the ending of the system
119 void showLast() //
120 {
121 cout<<"\n\n\t\tThank you for using our service";
122 cout<<"\n\t\t Have a nice day\n\n";
123 }
124
125 // to calculate the company's income
126 float calcAverageCompany (float totalCompany, int count) //
127 {
128 float averageCompany;
129 averageCompany=totalCompany/count;
130 return averageCompany;
131 }
132
133 // to display current year
134 int showYear () //
135 {
18
136 int year;
137 cout<<"\n\n\t\t\tYear ";
138 cin>>year;
139 return year;
140 }
141
142 //to calculate bonus gained by the user
143 int calcBonus (int seats, float rating, int& bonus) //
144 {
145 // nested if
146 if (seats==4)
147 if (rating>0 && rating<=2.5)
148 bonus=10;
149 else if (rating>=2.6 && rating<=4.8)
150 bonus=20;
151 else if (rating>=4.9 && rating<=5.0)
152 bonus=50;
153 else
154 bonus=0;
155
156 else
157 if (rating>0 && rating<=2.5)
158 bonus=12;
159 else if (rating>=2.6 && rating<=4.8)
160 bonus=24;
161 else if (rating>=4.9 && rating<=5.0)
162 bonus=56;
163 else
19
164 bonus=0;
165 return bonus;
166 }
167
168 // to calculate the value of petrol
169 float calcValue (int typeofpetrol, float& value)
170 {
171 if (typeofpetrol==97)
172 value=2.5;
173 else if (typeofpetrol==95)
174 value=2.2;
175 else
176 value=0;
177 return value;
178 }
179
180 //to display output
181 void displayInfo(char name[], char car[], float salary, float
bonus_per_mont
182 {
183 cout<<"\n\t\t"<<"Driver's name "<<name;
184 cout<<"\n\t\t"<<"Type of car "<<car;
185 cout<<"\n\t\t"<<"Salary RM"<<salary;
186 cout<<"\n\t\t"<<"Bonus per month RM"<<bonus_per_month;
187 cout<<"\n\t\t"<<"Petrol cost RM"<<petrol;
188 cout<<"\n\t\t"<<"Total for company RM"<<company;
189 cout<<"\n\t\t"<<"Total salary RM"<<total_salary;
190 }
191
20
192 //get details information
193 void getInformation(int&seats, int&typeofpetrol, float&fare,
float&rating, f
194 {
195 cout<<"\n\t\t"<<"Enter number of seats (4 seats/6 seats) ";
196 cin>>seats;
197 cout<<"\n\t\t"<<"Enter type of petrol (95/97) ";
198 cin>>typeofpetrol;
199 cout<<"\n\t\t"<<"Enter fare RM";
200 cin>>fare;
201 cout<<"\n\t\t"<<"Enter rating (0.0-5.0) ";
202 cin>>rating;
203 cout<<"\n\t\t"<<"Enter distance (km) ";
204 cin>>distance;
205 }
