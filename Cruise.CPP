#include<fstream.h>
#include<conio.h>
#include<dos.h>
#include<iomanip.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
class personal;
class facilities;
class travel;
int option;
char op;
char famnam[20];
void dela();
void price(facilities,travel,personal);

struct add
{ char hno[4];
  long pin;
  char locality[30];
  char city[20];
};

struct detail
{ char nm[20];
  int age;
  char gen;
  char pp[15];
};

struct date1
{ int da;
  int month;
  int year;
};

class personal
{ add a;
  detail det[20];
  public : void personaldet();
	   void personaldis();
	   void modify();
	   int np;
	   char fn[20];
}p1,p,p2,p3;

class travel
{ int boarding;
  int destin;
  int deck;
  int cabin;
  date1 dod;
  public : void traveld();
	   void traveldis();
	   void travelprice();
	   float tpr ;
	   travel()
	   { tpr=0;}
}t,t1;

class facilities
{ char swim;
  char gym;
  char sports;
  char spa;
  char salon;
  char theatre;
  public : void faci ();
	   void facidis();
	   void faciprice();
	   float fpr;
	   facilities()
	   {fpr=0;}
}fa,fa1;


void personal::personaldet()     //To input personal details
{ cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  cout<<"\t Enter last name ::  ";
  gets(fn);
  cout<<endl<<endl;
  cout<<"\t Enter your address"<<endl<<endl;
  delay(400);
  cout<<"\t Enter house no. ::  ";
  cin>>a.hno;
  cout<<endl;
  cout<<"\t Enter pin ::  ";
  cin>>a.pin;
  cout<<endl;
  cout<<"\t Enter locality ::  ";
  gets(a.locality);
  cout<<endl;
  cout<<"\t Enter city ::  ";
  gets(a.city);
  cout<<endl;
  cout<<"\t Enter the total number of people travelling ::  ";
  cin>>np;
  cout<<endl;
  clrscr();
  cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  cout<<"\t Enter the details of each member :"<<endl<<endl;
  for(int i=0;i<np;i++)
  { cout<<"\t Enter first name ::  ";
    gets(det[i].nm);
    cout<<endl;
    cout<<"\t Enter age ::  ";
    cin>>det[i].age;
    cout<<endl;
    cout<<"\t Enter gender(M/F) ::  ";
    cin>>det[i].gen;
    cout<<endl;
    cout<<"\t Enter passport number ::  ";
    gets(det[i].pp);
    cout<<endl;
  }
}

void personal::personaldis()     //To display personal details
{ clrscr();
  cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  cout<<setw(48)<<"PERSONAL DETAILS"<<endl;
  cout<<endl;
  cout<<"\t Last name  "<<fn<<endl;
  cout<<endl;
  cout<<"\t Address"<<endl<<endl;
  cout<<"\t House number  "<<a.hno<<endl<<endl;
  cout<<"\t Pin code  "<<a.pin<<endl<<endl;
  cout<<"\t Locality  "<<a.locality<<endl<<endl;
  cout<<"\t City  "<<a.city<<endl;
  cout<<endl;
  cout<<"\t Number of people travelling  "<<np;
  cout<<endl<<endl<<endl;
  cout<<"\t Details of each member"<<endl;
  for(int i=0;i<np;i++)
  { cout<<endl;
    cout<<"\t Name:  ";
    puts(det[i].nm);
    cout<<endl;
    cout<<"\t Age:  ";
    cout<<det[i].age<<endl;
    cout<<endl;
    cout<<"\t Gender:  ";
    cout<<det[i].gen<<endl;
    cout<<endl;
    cout<<"\t Passport number:  ";
    cout<<det[i].pp<<endl;
    cout<<endl;
  }
}

void personal::modify()          //To modify personal details
{
  int i=0,c;
  char yn1;
  cout<<endl<<"\t The details of each passenger is as follows:"<<endl<<endl<<endl;
  do
  {  cout<<"\t Passenger "<<i+1<<endl<<endl;
     cout<<"\t Name:  ";
     puts(det[i].nm);
     cout<<endl;
     cout<<"\t Age:  ";
     cout<<det[i].age<<endl;
     cout<<endl;
     cout<<"\t Gender:  ";
     cout<<det[i].gen<<endl;
     cout<<endl;
     cout<<"\t Passport number:  ";
     cout<<det[i].pp<<endl;
     cout<<endl<<endl;
     cout<<"\t Do you want to modify in this record??(y/n)";
     cin>>yn1;
     if(yn1=='y'||yn1=='Y')
     { cout<<endl<<endl<<"\t What do you want to modify in this record??(y/n)"<<endl;
       cout<<endl;
       cout<<"\t 1.Name"<<endl<<endl<<"\t 2.Age"<<endl<<endl<<
       "\t 3.Gender"<<endl<<endl<<"\t 4.Passport number"<<endl;
     a:cout<<"\t ";
       cin>>c;
       cout<<endl<<endl;
       switch(c)
       { case 1 : { cout<<"\t Enter new name ::  ";
		    gets(det[i].nm);
		    cout<<endl;
		    break; }
	 case 2 : { cout<<"\t Enter new age ::  ";
		    cin>>det[i].age;
		    cout<<endl;
		    break; }
	 case 3 : { cout<<"\t Enter new gender ::  ";
		    cin>>det[i].gen;
		    cout<<endl;
		    break; }
	 case 4 : { cout<<"\t Enter new passport number ::  ";
		    cin>>det[i].pp;
		    cout<<endl;
		    break; }
	 default : { cout<<"\t Enter valid number ";
		     goto a; }
       }
     }
     i++;
  } while(i<np);
}

void travel::traveld()           //To input travel details
{ cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  cout<<setw(48)<<"TRAVEL DETAILS"<<endl;
  cout<<endl;
  cout<<"\t Please enter the following details of your journey"<<endl<<endl<<endl;
  cout<<"\t Enter the Boarding Point"<<endl<<endl;
  do
  { cout<<"\t 1.Chennai"<<endl<<endl<<"\t 2.Cochin"<<endl<<endl<<"\t 3.Mumbai"<<endl<<endl;
    cout<<"\t ";
    cin>>boarding;
    if(boarding==0||boarding>3)
    cout<<endl<<"\t Enter valid number "<<endl;
  } while(boarding==0||boarding>3 );
  cout<<endl;
  cout<<endl;
  cout<<"\t Enter the Destination Point"<<endl<<endl;
  do
  { cout<<"\t 1.Malaysia"<<endl<<endl<<"\t 2.Singapore"<<endl<<endl<<
    "\t 3.New York"<<endl<<endl<<"\t 4.Dubai"<<endl<<endl<<"\t 5.Miami"<<endl<<endl;
    cout<<"\t ";
    cin>>destin;
    if(destin==0||destin>5)
    cout<<endl<<"\t Enter valid number "<<endl;
  } while(destin==0||destin>5);
  cout<<endl;
  cout<<"\t Enter the Date of Departure"<<endl<<endl;
  cout<<"\t Date(dd) ::  ";
  cin>>dod.da;
  cout<<endl;
  cout<<"\t Month(mm) ::  ";
  cin>>dod.month;
  cout<<endl;
  cout<<"\t Year(yyyy) ::  ";
  cin>>dod.year;
  cout<<endl;
  cout<<endl;
  do
  { if(dod.year>=2016 && dod.year<=2017)
    { if(dod.month==1||dod.month==3||dod.month==5||dod.month==7||dod.month==8||dod.month==10||dod.month==12)
      { if(dod.da>31)
	{ cout<<"\t Enter valid date ";
	  cin>>dod.da;
	}
      }
      else if(dod.month==4||dod.month==6||dod.month==9||dod.month==11)
      { if(dod.da>30)
	{ cout<<"\t Enter valid date ";
	  cin>>dod.da;
	}
      }
      else if(dod.month==2&&dod.year==2016)
      { if(dod.da>29)
	{ cout<<"\t Enter valid date ";
	  cin>>dod.da;
	}
      }
      else if(dod.month==2&&dod.year==2017)
      { if(dod.da>28)
	{ cout<<"\t Enter valid date ";
	  cin>>dod.da;
	}
      }
      else
      { cout<<"\t Enter valid month ";
	cin>>dod.month;}
      }
    else if(dod.year>2017)
    { cout<<"\t Booking not possible. Enter valid year ";
      cin>>dod.year;
    }
    else if(dod.year<2016)
    { cout<<"\t Enter valid year ";
      cin>>dod.year;
    }
  } while((dod.da<0 || dod.da>31) || (dod.month<0 || dod.month>12));
  cout<<endl;
  cout<<endl;
  cout<<"\t Enter the Deck"<<endl<<endl;
  do
  { cout<<"\t 1.Top"<<endl<<"\t 2.Middle"<<endl<<"\t 3.Bottom"<<endl;
    cout<<"\t ";
    cin>>deck;
    if(deck==0||deck>3)
    { cout<<"\t Enter valid number"<<endl;
      cout<<"\t";
      cin>>deck;
    }
  } while(deck==0||deck>3);
  cout<<endl;
  cout<<endl;
  cout<<"\t Enter choice of Cabin"<<endl<<endl;
  do
  { cout<<"\t 1.AC"<<endl<<"\t 2.Non AC"<<endl;
    cout<<"\t ";
    cin>>cabin;
    if(cabin==0||cabin>2)
    { cout<<"\t Enter valid number"<<endl;
      cout<<"\t ";
      cin>>cabin;
    }
  } while(cabin==0||cabin>2);
}

void travel::traveldis()         //To display travel details
{ clrscr();
  cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  cout<<setw(48)<<"TRAVEL DETAILS"<<endl;     //Displaying Travel details
  cout<<endl;
  cout<<"\t Boarding Point:  ";
  switch(boarding)
  { case 1:{ cout<<"\t Chennai";
	     break; }
    case 2:{ cout<<"\t Cochin";
	     break; }
    case 3:{ cout<<"\t Mumbai";
	     break; }
  }
  cout<<endl<<endl;
  cout<<"\t Destination Point:  ";
  switch(destin)
  { case 1:{ cout<<"\t Malaysia";
	     break; }
   case 2:{ cout<<"\t Singapore";
	     break; }
   case 3:{ cout<<"\t New York";
	    break; }
   case 4:{ cout<<"\t Dubai";
	    break; }
   case 5:{ cout<<"\t Miami";
	    break; }

  }
  cout<<endl<<endl;
  cout<<"\t Date of Departure"<<endl<<endl;
  cout<<"\t Date:  ";
  cout<<"\t "<<dod.da<<endl;
  cout<<"\t Month:  ";
  cout<<"\t "<<dod.month<<endl;
  cout<<"\t Year:  ";
  cout<<"\t "<<dod.year<<endl;
  cout<<endl;
  cout<<"\t Deck:  ";
  switch(deck)
  { case 1:{ cout<<"\t Top";
	     break; }
    case 2:{ cout<<"\t Middle";
	     break; }
    case 3:{ cout<<"\t Bottom";
	     break; }
  }
  cout<<endl<<endl;
  cout<<"\t Cabin:  ";
  switch(cabin)
  { case 1:{ cout<<"\t AC";
	     break; }
    case 2:{ cout<<"\t Non AC";
	    break; }
  }
  cout<<endl<<endl;
}

void travel::travelprice()       //To calculate travel price
{ cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  if(boarding==1 && destin==1)
  { cout<<"\t Your Travel fare is 20000"<<endl<<endl;
    tpr+=20000;
  }
  else if(boarding==1 && destin==2)
  { cout<<"\t Your Travel fare is 18000"<<endl<<endl;
    tpr+=18000;
  }
  else if(boarding==1 && destin==3)
  { cout<<"\t Your Travel fare is 30000"<<endl<<endl;
    tpr+=28000;
  }
  else if(boarding==1 && destin==4)
  { cout<<"\t Your Travel fare is 20000"<<endl<<endl;
    tpr+=28000;
  }
  else if(boarding==1 && destin==5)
  { cout<<"\t Your Travel fare is 28000"<<endl<<endl;
    tpr+=28000;
  }
  else if(boarding==2 && destin==1)
  { cout<<"\t Your Travel fare is 25000"<<endl<<endl;
    tpr+=25000;
  }
  else if(boarding==2 && destin==2)
  { cout<<"\t Your Travel fare is 23000"<<endl<<endl;
    tpr+=23000;
  }
  else if(boarding==2 && destin==3)
  { cout<<"\t Your Travel fare is 26000"<<endl<<endl;
    tpr+=23000;
  }
  else if(boarding==2 && destin==4)
  { cout<<"\t Your Travel fare is 20000"<<endl<<endl;
    tpr+=23000;
  }
  else if(boarding==2 && destin==5)
  { cout<<"\t Your Travel fare is 30000"<<endl<<endl;
    tpr+=23000;
  }
  else if(boarding==3 && destin==1)
  { cout<<"\t Your Travel fare is 30000"<<endl<<endl;
    tpr+=30000;
  }
  else if(boarding==3 && destin==2)
  { cout<<"\t Your Travel fare is 28000"<<endl<<endl;
    tpr+=28000;
  }
  else if(boarding==3 && destin==3)
  { cout<<"\t Your Travel fare is 32000"<<endl<<endl;
    tpr+=28000;
  }
  else if(boarding==3 && destin==4)
  { cout<<"\t Your Travel fare is 25000"<<endl<<endl;
    tpr+=28000;
  }
  else if(boarding==3 && destin==5)
  { cout<<"\t Your Travel fare is 30000"<<endl<<endl;
    tpr+=28000;
  }
  cout<<endl;
  switch(deck)
  { case 1:{ cout<<"\t Deck : 5000";
	     tpr+=5000;
	     cout<<endl;
	     break; }
    case 2:{ cout<<"\t Deck : 4000";
	     tpr+=4000;
	     cout<<endl;
	     break; }
    case 3:{ cout<<"\t Deck : 3000";
	     tpr+=3000;
	     cout<<endl;
	     break; }
  }
  cout<<endl;
  switch(cabin)
  { case 1:{ cout<<"\t Cabin : 4000";
	     tpr+=4000;
	     cout<<endl;
	     break; }
    case 2:{ cout<<"\t Cabin : 2800";
	     tpr+=2800;
	     cout<<endl;
	     break; }
  }
  cout<<endl<<"\t Travel fare "<<tpr<<endl;
}

void facilities::faci()          //To input facilities
{ cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  cout<<"\t Enter 'Y' for Yes and 'N' for No for the following:"<<endl;
  cout<<endl<<endl;
  cout<<"\t Do you want to avail the facility of-"<<endl<<endl;
  cout<<"\t 1.Swimming Pool  ";
  cin>>fa.swim;
  cout<<endl;
  switch(fa.swim)
  { case 'y': goto a;
    case 'Y': goto a;
    case 'n': goto a;
    case 'N': goto a;
    default: { cout<<"\t Enter either 'Y' or 'N'  ";
	       cin>>fa.swim; }
  }
a:cout<<"\t 2.Gym  ";
  cin>>fa.gym;
  cout<<endl;
  switch(fa.gym)
  { case 'y': goto b;
    case 'Y': goto b;
    case 'n': goto b;
    case 'N': goto b;
    default: { cout<<"\t Enter either 'Y' or 'N'  ";
	       cin>>fa.gym; }
  }
b:cout<<"\t 3.Sports  ";
  cin>>fa.sports;
  cout<<endl;
  switch(fa.sports)
  { case 'y': goto c;
    case 'Y': goto c;
    case 'n': goto c;
    case 'N': goto c;
    default: { cout<<"\t Enter either 'Y' or 'N'  ";
	       cin>>fa.sports; }
  }
c:cout<<"\t 4.Spa  ";
  cin>>fa.spa;
  cout<<endl;
  switch(fa.spa)
  { case 'y': goto d;
    case 'Y': goto d;
    case 'n': goto d;
    case 'N': goto d;
    default: { cout<<"\t Enter either 'Y' or 'N'  ";
	       cin>>fa.spa; }
  }
d:cout<<"\t 5.Salon  ";
  cin>>fa.salon;
  cout<<endl;
  switch(fa.salon)
  { case 'y': goto e;
    case 'Y': goto e;
    case 'n': goto e;
    case 'N': goto e;
    default: { cout<<"\t Enter either 'Y' or 'N'  ";
	       cin>>fa.salon; }
  }
e:cout<<"\t 6.Theatre  ";
  cin>>fa.theatre;
  cout<<endl;
  if(fa.theatre!='y'&&fa.theatre!='Y'&&fa.theatre!='n'&&fa.theatre!='N')
  { cout<<"\t Enter either 'Y' or 'N'  ";
    cin>>fa.theatre;
  }
}

void facilities::facidis()       //To display facilities
{ clrscr();
  cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  cout<<"\t Facilities that you availed for are:"<<endl;
  cout<<endl;
  if(swim=='y'||swim=='Y')
  cout<<"\t Swimming pool"<<endl<<endl;
  if(gym=='y'||gym=='Y')
  cout<<"\t Gym"<<endl<<endl;
  if(sports=='y'||sports=='Y')
  cout<<"\t Sports"<<endl<<endl;
  if(spa=='y'||spa=='Y')
  cout<<"\t Spa"<<endl<<endl;
  if(salon=='y'||salon=='Y')
  cout<<"\t Salon"<<endl<<endl;
  if(theatre=='y'||theatre=='Y')
  cout<<"\t Theatre"<<endl<<endl;
}

void facilities::faciprice()     //To calculate facilities price
{ cout<<endl;
  if(swim=='y'||swim=='Y')
  { cout<<"\t Swimming Pool : 2000"<<endl;
    fpr+=2000;
    cout<<endl;
  }
  if(gym=='y'||gym=='Y')
  { cout<<"\t Gym : 1500"<<endl;
    fpr+=1500;
    cout<<endl;
  }
  if(sports=='y'||sports=='Y')
  { cout<<"\t Sports : 1600"<<endl;
    fpr+=1600;
    cout<<endl;
  }
  if(spa=='y'||spa=='Y')
  { cout<<"\t Spa : 2500"<<endl;
    fpr+=2500;
    cout<<endl;
  }
  if(salon=='y'||salon=='Y')
  { cout<<"\t Salon : 2000"<<endl;
    fpr+=2000;
    cout<<endl;
  }
  if(theatre=='y'||theatre=='Y')
  { cout<<"\t Theatre : 3000"<<endl;
    fpr+=3000;
    cout<<endl;
  }
  cout<<"\t Amount for facilities availed "<<fpr<<endl<<endl;
}

void price( facilities fa,travel t,personal p)     //To calculate total price
{ clrscr();
  float tot,total;
  t.travelprice();
  fa.faciprice();
  tot=fa.fpr+t.tpr;
  cout<<"\t Amount per person is "<<tot<<endl<<endl;
  total =p.np*tot;
  cout<<"\t TOTAL FARE: "<<total<<endl;
  cout<<endl;
  getch();
}

void dela()          //Delay function
{ cout<<endl;
  cout<<endl;
  cout<<"Please wait while your request is being processed";
  delay(1500);
  cout<<".";
  delay(1000);
  cout<<".";
  delay(1000);
  cout<<".";
  delay(1000);
  getch();
}

void main()
{ char y1;
  fstream f1;
  fstream zy,yx;

  clrscr();
  cout<<"\n\n\n\n\n";    //Welcome screen
  cout<<" ...         ...  ......  **      :::::::  !!!!!!!!  ...    ...   ......  \n";
  cout<<"  ...   .   ...   ._____  **      ::       !!    !!  .. .  . ..   ._____  \n";
  cout<<"   ... ... ...    .       **      ::       !!    !!  ..  ..  ..   .       \n";
  cout<<"    ...   ...     ......  ******  :::::::  !!!!!!!!  ..   .  ..   ......  \n";
  cout<<"\n\n\n\n\n";
  cout<<"                           ~ __  ~ __  ~                   \n";
  cout<<"                         |==|  |==|  |==|              \n";
  cout<<"                       __|__|__|__|__|__|__               \n";
  cout<<"                    __|____________________|__           \n";
  cout<<"                    __[]__[]__[]__[]__[]__[]__[]__         STAR CRUISES\n";
  cout<<"                    \\.........................o./ \n";
  cout<<"                     \\........................./ \n";
  cout<<"              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout<<"               ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ \n";
  cout<<"                ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~  ~\n";
  cout<<"                  ~    ~     ~    ~    ~    ~    ~    ~    ~  \n";
  cout<<"                   ~    ~      ~    ~     ~    ~    ~      ~\n";
  delay(2000);
  int count =0;
  do
  {clrscr();
  cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  cout<<setw(48)<<"WELCOME TO STAR CRUISES"<<endl;
  int opt,opo;
  char yn,yon,yorn;
  cout<<endl<<endl;

  cout<<"\t Are you a new user or existing user??"<<endl<<endl;
  cout<<"\t Enter the relevant number:"<<endl<<endl<<"\t 1.New user"<<endl<<endl<<"\t 2.Existing user"<<endl<<endl<<"\t 3.Exit"<<endl<<endl;
  cout<<"\t ";
  cin>>opo;
f:clrscr();
  cout<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<endl<<endl;
  switch(opo)
  { case 1: {

	  f1.open("cruise1.dat",ios::in|ios::app);
	  zy.open("cruise3.dat",ios::in|ios::app);
	  yx.open("cruise2.dat",ios::in|ios::app);

	  cout<<"\t What do you want to Enter first??"<<endl<<endl;
	      cout<<"\t Enter relevant number "<<endl<<endl;
	      do
	      { cout<<"\t 1.Personal Details"<<endl<<endl;
		cout<<"\t 2.Travel Details"<<endl<<endl;
		cout<<"\t 3.Facilities"<<endl<<endl;
		cout<<"\t 4.Next"<<endl<<endl;
		cout<<"\t 5.Exit"<<endl<<endl;
	      g:cout<<"\t ";
		cin>>opt;
		switch(opt)
		{ case 1: { clrscr();
			    p.personaldet();
			    f1.write((char*)&p,sizeof(personal));
			    count++;
			    break;}
		  case 2: { clrscr();
			    t.traveld();
			    zy.write((char*)&t,sizeof(travel));
			    count++;
			    break;}
		  case 3: { clrscr();
			    fa.faci();
			    yx.write((char*)&fa,sizeof(facilities));
			    count++;
			    break;}
		  case 4: { if(count<3)
			    { cout<<endl<<endl;
			      cout<<"\t You have not entered all the infomation";
			      delay(2000);
			      f1.close();
			      yx.close();
			      zy.close();
			      goto f;
			    }
			    clrscr();
			    goto n;
			    }
		  case 5: {
			f1.close();
			yx.close();
			zy.close();
			exit(0);}
		  default:{ cout<<endl<<"\t Enter valid number"<<endl;
			    goto g;}
		}
		clrscr();
		cout<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<endl<<endl;
		cout<<"\t What do you want to Enter next?? "<<endl<<endl;
	      } while(opt==1 ||opt==2 ||opt==3||opt==4);


	    n:do
	      { clrscr();
		cout<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<endl<<endl;
		cout<<"\t What do you want to display??"<<endl<<endl;
		cout<<"\t Enter relevant number"<<endl<<endl;
		cout<<endl;
		cout<<"\t 1.Personal Details"<<endl<<endl<<"\t 2.Travel Details"<<endl<<endl
		<<"\t 3.Facilities"<<endl<<endl<<"\t 4.Total Fare"<<endl<<endl<<"\t 5.Exit"<<endl<<endl;
	      h:cout<<"\t ";
		cin>>option;
		switch(option)
		{ case 1: { clrscr();
			    p.personaldis();
			    break;}
		  case 2: { clrscr();
			    t.traveldis();
			    break;}
		  case 3: { clrscr();
			    fa.facidis();
			    break;}
		  case 4: { price(fa,t,p);
			    break;  }
		  case 5: { exit(0);}
		 default: { cout<<"\t Enter valid number"<<endl;
			    goto h;
			  }
		}
		cout<<endl<<endl<<"\t Do you want to display something more??(y/n) "<<endl;
		cout<<"\t ";
		cin>>yon;
	      } while(yon=='y'||yon=='Y');
	      f1.close();
	      yx.close();
	      zy.close();


	      break;}
    case 2:
    { int exi;
      cout<<"\t What do you want to do??"<<endl<<endl;
      cout<<"\t Enter relevant no."<<endl<<endl;
      cout<<"\t 1.View details"<<endl<<endl<<"\t 2.Modify"<<endl<<endl<<"\t 3.Exit"<<endl;
      cout<<"\t ";
    q:cin>>exi;
      switch(exi)
      { case 1:{
      int wrt=0;
      fstream f2;
      fstream rk,ss;
      f2.open("cruise1.dat",ios::in|ios::app);
      rk.open("cruise3.dat",ios::in|ios::app);
      ss.open("cruise2.dat",ios::in|ios::app);
      f2.seekg(0);
      rk.seekg(0);
      ss.seekg(0);
      cout<<"\t Enter your last name "<<endl;
      cout<<"\t ";
      cin>>famnam;
      while(!f2.eof())
      { f2.read((char*)&p2,sizeof(personal)) ;
	wrt++;
	if(strcmpi(famnam,p2.fn)==0)
	{ do
	  { cout<<endl;
	    clrscr();
	    cout<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	    cout<<endl<<endl;
	    cout<<"\t What do you want to display??"<<endl<<endl;
	    cout<<"\t Enter relevant number"<<endl;
	    cout<<endl;
	    cout<<"\t 1.Personal Details"<<endl<<endl<<"\t 2.Travel Details"<<endl<<endl<<
	    "\t 3.Facilities"<<endl<<endl<<"\t 4.Total Fare"<<endl<<endl<<"\t 5.Exit"<<endl;
	    cout<<"\t ";
	  z:cin>>option;
	    switch(option)
	    { case 1: { p2.personaldis();
			break;}
	      case 2: { rk.seekg((wrt-1)*sizeof(travel));
			rk.read((char*)&t1,sizeof(travel));
			t1.traveldis();
			break;}
	      case 3: { ss.seekg((wrt-1)*sizeof(facilities));
			ss.read((char*)&fa1,sizeof(facilities));
			fa1.facidis();
			break;}
	      case 4: { rk.seekg((wrt-1)*sizeof(travel));
			ss.seekg((wrt-1)*sizeof(facilities));
			rk.read((char*)&t1,sizeof(travel));
			ss.read((char*)&fa1,sizeof(facilities));
			price(fa1,t1,p2);
			break;}
	      case 5: { f2.close();
			rk.close();
			ss.close();
			exit(0);}
	     default: { cout<<endl;
			cout<<"\t Enter valid number "<<endl;
			cout<<"\t ";
			goto z;
		      }
	    }
	    cout<<endl<<"\t Do you want to display something more??(y/n) ";
	    cout<<"\t ";
	    cin>>yon;
	  } while(yon=='y'||yon=='Y');
	  clrscr();
	  cprintf("\n\n");
	  cout<<"             _/_/_/_/_/  _/                            _/            \n";
	  cout<<"                _/      _/_/_/      _/_/_/  _/_/_/    _/  _/         \n";
	  cout<<"               _/      _/    _/  _/    _/  _/    _/  _/_/            \n";
	  cout<<"              _/      _/    _/  _/    _/  _/    _/  _/  _/           \n";
	  cout<<"             _/      _/    _/    _/_/_/  _/    _/  _/    _/          \n";
	  cout<<"                                                                  \n";
	  cout<<"                                                                  \n";
	  cout<<"                                                                   \n";
	  cout<<"                 _/     _/                                       \n";
	  cout<<"                  _/  _/    _/_/    _/    _/                     \n";
	  cout<<"                    _/    _/    _/  _/    _/                     \n";
	  cout<<"                    _/    _/    _/  _/    _/                     \n";
	  cout<<"                   _/      _/_/      _/_/_/                     \n\n";
	  cout<<endl<<endl<<endl<<endl<<endl<<endl;
	  cout<<"\t Thank you for choosing to travel with Star Cruises"<<endl;
	  cout<<"\t Hope to see you soon!!";
	  delay(2000);
	  f2.close();
	  rk.close();
	  ss.close();
	  exit(0);
	}


      }
      cout<<"/t Sorry,no user found"<<endl;
      break;}
      case 2:{ clrscr();
	      cout<<endl;
	      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	      cout<<setw(45)<<"STAR CRUISES"<<endl<<endl;
	      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	      cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	      cout<<endl<<endl;
	      fstream f3,z1,z2;
	      cout<<"\t Enter your last name "<<endl;
	      cout<<"\t ";
	      cin>>famnam;

	      cout<<"\t Are you sure you want to modify??(y/n) ";
	    t:cout<<"\t ";
	      cin>>yorn;
	      if(yorn=='y'||yorn=='Y')
	      { f3.open("cruise1.dat",ios::in|ios::out);
		z1.open("cruise3.dat",ios::in|ios::out);
		z2.open("cruise2.dat",ios::in|ios::out);
		f3.seekg(0);
		while(f3)
		{ long pos=f3.tellg();
		  f3.read((char*)&p1,sizeof(personal));
		  if(strcmpi(famnam,p1.fn)==0)
		  { p1.modify();
		    f3.seekp(pos);
		    f3.write((char*)&p1,sizeof(personal));
		  }
		}
		f3.close();
		z1.close();
		z2.close();
		clrscr();
		cprintf("\n\n");
		cout<<"             _/_/_/_/_/  _/                            _/            \n";
		cout<<"                _/      _/_/_/      _/_/_/  _/_/_/    _/  _/         \n";
		cout<<"               _/      _/    _/  _/    _/  _/    _/  _/_/            \n";
		cout<<"              _/      _/    _/  _/    _/  _/    _/  _/  _/           \n";
		cout<<"             _/      _/    _/    _/_/_/  _/    _/  _/    _/          \n";
		cout<<"                                                                  \n";
		cout<<"                                                                  \n";
		cout<<"                                                                  \n";
		cout<<"                 _/     _/                                       \n";
		cout<<"                  _/  _/    _/_/    _/    _/                     \n";
		cout<<"                    _/    _/    _/  _/    _/                     \n";
		cout<<"                    _/    _/    _/  _/    _/                     \n";
		cout<<"                   _/      _/_/      _/_/_/                     \n\n";
		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"\t Thank you for choosing to travel with Star Cruises"<<endl;
		cout<<"\t Hope to see you soon!!";
	      }
	      else if(yorn=='n'||yorn=='N')
	      { clrscr();
		cprintf("\n\n");
		cout<<"             _/_/_/_/_/  _/                            _/            \n";
		cout<<"                _/      _/_/_/      _/_/_/  _/_/_/    _/  _/         \n";
		cout<<"               _/      _/    _/  _/    _/  _/    _/  _/_/            \n";
		cout<<"              _/      _/    _/  _/    _/  _/    _/  _/  _/           \n";
		cout<<"             _/      _/    _/    _/_/_/  _/    _/  _/    _/          \n";
		cout<<"                                                                  \n";
		cout<<"                                                                  \n";
		cout<<"                                                                   \n";
		cout<<"                 _/     _/                                       \n";
		cout<<"                  _/  _/    _/_/    _/    _/                     \n";
		cout<<"                    _/    _/    _/  _/    _/                     \n";
		cout<<"                    _/    _/    _/  _/    _/                     \n";
		cout<<"                   _/      _/_/      _/_/_/                     \n\n";
		cout<<endl<<endl<<endl<<endl<<endl<<endl;
		cout<<"\t Thank you for choosing to travel with Star Cruises"<<endl;
		cout<<"\t Hope to see you soon!!";

	      }
	      else
	      { cout<<"Enter only 'y' or 'n' ";
		goto t;
	      }
	      break;
	      }
	      case 3:{exit(0);}
	      default:{ cout<<"Enter valid no. ";
			goto q;
		      }
	   }

      break;}

    case 3:{ exit(0); }
   default:{ cout<<"\t Enter valid option "<<endl;
	     cout<<"\t ";
	     cin>>opo;
	     goto f;
	   }
  }
  cout<<endl<<endl;
  cout<<"\t Back to Main menu(y/n) ";
  cin>>y1;
 }while(y1=='y'||y1=='Y');
  getch();
}
