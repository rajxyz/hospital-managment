#include<fstream>
#include<iostream>
using namespace std;

#include <conio.h>
#include<windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
char ans=0,ans1;
int ok,b,valid=0,c=0;
void Welcomescreen(void);
 void Title(void);
 void Mainmenu(void );
 void Loginscreen(void);
 void gotoxy( short c1,short b1)
 {
  COORD pos = {c1,b1};
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
 }
 void Welcomescreen(void)
{ 
      for(int i=0;i<127;i++)
    { cout<<"_";}
     cout<<"\n                         \t \t   \t          WELCOME TO                  \n";
     cout<<"  \t\t \t\t          \t \t CITY HOSPITAL                "<<"\n";
     
for(int j=0;j<127;j++)
    { cout<<"_";}
     cout<<"\n\npress any key ";
                 getch();

             system("cls");
    
}
void Title()
 {  

     
     for(int j=0;j<127;j++)
    { cout<<"_";}
     cout<<"\n                         \t \t   \t          WELCOME TO                  \n";
     cout<<"  \t\t \t\t          \t \t CITY HOSPITAL                "<<"\n";
    
      for(int i=0;i<127;i++)
    { cout<<"_";}
 }
class Patient
 {  public:
    char First_name[20];
    char Last_name[20];
    char Gender;
    int Age;
    char Address[40] ;
    char contact_no[20];
    char E_mail[30];
    char Problem[40];
    char Doctor[20];
    void in()
    {  system("cls");
         A: Title();
        cout<<"\n";
        
        cout<<"\t\t\t\tFIRST NAME:";
        cin>>First_name;
        if(strlen(First_name)<3||strlen(First_name)>30)
        {cout<<"ENTER NAME IS RANGE OF 3 TO 30";
      
        goto A;}
         for(int i=0;i<strlen(First_name);i++)
        {
          if(isalpha(First_name[i]))
          { continue;
          }
          else
          {
            cout<<" FIRST NAME CONTANIN INVALID CHARCATER : PLEASE ENTER THE FIRST NAME ";
          
            goto A;
          }
        }
        cout<<"\n\n";
        B:
         cout<<"\t\t\t\tLAST NAME:";
        cin>>Last_name;
        if(strlen(Last_name)<3||strlen(Last_name)>30)
        {cout<<"ENTER NAME IS RANGE OF 3 TO 30";
        goto B;}
         for(int i=0;i<strlen(Last_name);i++)
        {
          if(isalpha(Last_name[i]))
          { continue;
          }
          else
          {
            cout<<" FIRST NAME CONTANIN INVALID CHARCATER : PLEASE ENTER THE Last NAME "; 
            goto B;
          }
        } cout<<"\n\n";
        C:
        cout<<"\t\t\t\tGENDER[M/F]:";
        cin>>Gender;
        if(toupper(Gender)=='M'||toupper(Gender)=='F')
        ok=1;
        else 
        ok=0;
        if(!ok)
        {
          cout<<" invalid charcter emter correct charcter";
          goto C;
        } cout<<"\n\n";
     
     cout<<"\t\t\t\tAGE:";
     cin>>Age;cout<<"\n\n";
     D:
     cout<<"\t\t\t\tDISTRICT:";
     cin>>Address;
if(strlen(Address)<3||strlen(Address)>50)
        {cout<<"ENTER NAME IS RANGE OF 3 TO 50";
        goto D;} cout<<"\n\n";
        E:
        cout<<"\t\t\t\tCONTACT NO:";
        for(int i=0;i<10;i++)
        cin>>contact_no[i];

         for(int i=0;i<10;i++)
         {if(isdigit(contact_no[i]))
         ok=1;
         else
         ok=0;
         if(!ok)
         {
          cout<<" invalid chacter";
          goto E;}} cout<<"\n\n";

          F:
          cout<<"\t\t\t\tE-MAIL ID:";
          cin>>E_mail;
          for(int i=0;i<20;i++)
          if(E_mail[i]=='@'||E_mail==".")
          c++;
          if(c==0)
          { cout<<" enter valid id ";
          goto F;} cout<<"\n\n";
          G:
          cout<<"\t\t\t\tPROBLEM:";
          cin>>Problem;
          if(strlen(Problem)<3||strlen(Problem)>40)
        {cout<<"ENTER NAME IS RANGE OF 3 TO 30";
        goto G;}
         for(int i=0;i<strlen(Problem);i++)
        {
          if(isalpha(Problem[i]))
          { continue;
          }
          else
          {
            cout<<" PROBLEM CONTANIN INVALID CHARCATER : PLEASE ENTER THE  AGAIN "; 
            goto G;
          }
        } cout<<"\n\n";
        H:
        cout<<"\t\t\t\tDOCTOR NAME:";
        cin>>Doctor;
         if(strlen(Doctor)<3||strlen(Doctor)>20)
        {cout<<"ENTER NAME IS RANGE OF 3 TO 20";
        goto H;}
         for(int i=0;i<strlen(Doctor);i++)
        {
          if(isalpha(Doctor[i]))
          { continue;
          }
          else
          {
            cout<<" DOCTOR NAME CONTANIN INVALID CHARCATER : PLEASE ENTER THE  AGAIN "; 
            goto H;
          }
        }
 
    }
void out()
{
gotoxy(0,7);
cout<<"NAME";
gotoxy(25,7);
cout<<"GENDER";
gotoxy(32,7);
cout<<"AGE";
gotoxy(36,7);
cout<<"DISTRICT";
gotoxy(52,7);
cout<<"CONTACT";
gotoxy(64,7);
cout<<" EMAIL";
gotoxy(90,7);
cout<<"PROBLEM";
gotoxy(115,7);
cout<<"DOCTOR NAME";
cout<<"\n";



}


}
  p,temp_c;



void Add_rec(void)
{  

   cout<<" ADD RECORD ";  
    ofstream x("RAJA.txt",ios::app|ios::binary);
p.in();
x.write((char *)&p,sizeof(p));
x.close();

Mainmenu();
 

}

 void Funct_list(void){ int r=10;
  system("cls");
 Title();
  cout<<" \t\t\t\t\t\0\tDETAILS OF PATIENT\t\t";
  gotoxy(0,5);
   for(int j=0;j<64;j++)
    { cout<<"_ ";}
  p.out();
  gotoxy(0,8);
   for(int j=0;j<64;j++)
    { cout<<"_ ";}
    ifstream x("RAJA.txt",ios::binary);
    while(x.read((char*)&p,sizeof(p)))
    {gotoxy(0,r);
cout<<p.First_name<<"  "<<p.Last_name;
gotoxy(25,r);
cout<<p.Gender;
gotoxy(32,r);
cout<<p.Age;
gotoxy(36,r);
cout<<p.Address;
gotoxy(52,r);
cout<<p.contact_no;
gotoxy(64,r);
cout<<p.E_mail;
gotoxy(90,r);
cout<<p.Problem;
gotoxy(115,r);
cout<<p.Doctor;
r++;}
    x.close();
getch();
 }
 
 void Search_rec(void){
     char c[40];
     system("cls");
      int r=10; 
      Title(); 
      gotoxy(50,13);
 cout<<" ENTER THE  NAME OF PATIENT\n";
  gotoxy(50,16);
  cin>>c;
 system("cls");
     ifstream x("RAJA.txt",ios::binary);
    while(x.read((char*)&p,sizeof(p)))
    {
      if(strcmp(p.First_name,c)==0)
      {Title();
  cout<<" \t\t\t\t\t\0\tDETAILS OF PATIENT\t\t";
  gotoxy(0,5);
   for(int j=0;j<64;j++)
    { cout<<"_ ";}
  p.out();
  gotoxy(0,8);
   for(int j=0;j<64;j++)
    { cout<<"_ ";}
gotoxy(0,r);
cout<<p.First_name<<"  "<<p.Last_name;
gotoxy(25,r);
cout<<p.Gender;
gotoxy(32,r);
cout<<p.Age;
gotoxy(36,r);
cout<<p.Address;
gotoxy(52,r);
cout<<p.contact_no;
gotoxy(64,r);
cout<<p.E_mail;
gotoxy(90,r);
cout<<p.Problem;
gotoxy(115,r);
cout<<p.Doctor;
r++;

getch();
system("cls");
 Title();
  gotoxy(40,13);
cout<<" IF YOU WANT TO CONTINUE PRESS Y FOR YES OR N FOR NO\n";
 gotoxy(40,16);
 cin>>ans1;
 if( ans1=='y'||ans1=='Y')
 Search_rec();
 else 
 Mainmenu();
}
    } 
      
    
       if (strcmp(p.First_name,c)!=0)
    {
      system("cls");
      Title();
      gotoxy(15,15);
      cout<<"\t\t\t\tFILE DOES NOT EXIT PLEASE ENTER A VALID FILE NAME\n\n\n\n "; 
      getch();
      system("cls");
 Title();
  gotoxy(40,13);
cout<<" IF YOU WANT TO CONTINUE PRESS Y FOR YES OR N FOR NO\n";
 gotoxy(40,16);
 cin>>ans1;
 if( ans1=='y'||ans1=='Y')
 Search_rec();
 else 
 Mainmenu();
    
    }
    x.close();
   Mainmenu();  

 }
void Edit_rec(void){  int valid=0;
     char c[40]; 
     system("cls");
      int r=10; 
      Title(); 
      gotoxy(50,13);
 cout<<"ENTER THE  NAME OF PATIENT\n";
  gotoxy(50,16);
  cin>>c;
 system("cls");
      ofstream y("temp",ios::app|ios::binary);
      ifstream x("RAJA.txt",ios::binary);
    while(x.read((char*)&p,sizeof(p)))
    {
      if(strcmp(p.First_name,c)==0)
      { Title(); valid=1;
  cout<<" \t\t\t\t\t\t\tEXISTIN DETAILS OF PATIENT\t\t";
  gotoxy(0,5);
   for(int j=0;j<64;j++)
    { cout<<"_ ";}
  p.out();
  gotoxy(0,8);
   for(int j=0;j<64;j++)
    { cout<<"_ ";}
gotoxy(0,r);
cout<<p.First_name<<"  "<<p.Last_name;
gotoxy(25,r);
cout<<p.Gender;
gotoxy(32,r);
cout<<p.Age;
gotoxy(36,r);
cout<<p.Address;
gotoxy(52,r);
cout<<p.contact_no;
gotoxy(64,r);
cout<<p.E_mail;
gotoxy(90,r);
cout<<p.Problem;
gotoxy(115,r);
cout<<p.Doctor;
r++;
getch();
cout<<"\n\n\n\nENTER NEW DATA OF GIVEN PATIENT\n\n\n";
p.in();}


 y.write((char*)&p,sizeof(p));
    }
    
    if(valid==0)
    { 
      system("cls");
      Title();  gotoxy(50,13);

      cout<<" FILE NOT FOUND";
      getch();
      Mainmenu();

    }
y.close();
x.close();
remove("RAJA.txt");
rename("temp","RAJA.txt");
getch();
Mainmenu();
}

void Del_rec(void)
{
 int valid=0;
     char c[40]; 
     system("cls");
      int r=10; 
      Title(); 
      gotoxy(50,13);
 cout<<"ENTER THE  NAME OF PATIENT\n";
  gotoxy(50,16);
  cin>>c;
 system("cls");
     ifstream x("RAJA.txt",ios::binary);
      ofstream y("temp",ios::app|ios::binary);
      
    while(x.read((char*)&p,sizeof(p)))
    {
      if(strcmp(p.First_name,c)!=0)
      { valid++;
        y.write((char*)&p,sizeof(p));
}}
 if(valid==0)
    { 
      system("cls");
      Title();  gotoxy(50,13);

      cout<<" FILE NOT FOUND";
      getch();
      Mainmenu();

    }
    else{
x.close();
y.close();

remove("RAJA.txt");
rename("temp","RAJA.txt");
getch();
Mainmenu();}

}
void Mainmenu()
{ 
  int s;
do{ system("cls");
Title();
 cout<<" Enter choice 1 to 6 \n 1. Add record \n 2. List patient record\n 3. Search record\n 4. Edit record \n 5. Delete record\n 6. exit \n";
 cin>>s;
 
 switch(s)
 { case 1:Add_rec();cout<<"\n\n";
 break;
 case 2:Funct_list(); cout<<"\n\n";
 break;
 case 3:Search_rec(); cout<<"\n\n";
 break;
 case 4:Edit_rec(); cout<<"\n\n";
 break;
 case 5:Del_rec(); cout<<"\n\n";
 break;
 case 6:
 default: cout<<" INVALID INPUT";
 getch();}
 
} while(s!=6);

}
void Loginscreen()
{ char Username[35];
char Password[10];
char Fp[10];
int c=0;

do{  
 cout<<"\t\t\t\n\nENTER USERNAME OR PASSWORD \n\n\n";
  cout<<"\t\tUSERNAME\t";
  cin>>Username;
   cout<<"\n\n\t\t PASSWORD\t";
   cin>>Password;
  
 
 if(strcmp(Username,"abc")==0&&strcmp(Password,"123")==0)
{system("cls");
Title();
   gotoxy(50,13);
   cout<<" LOGIN SUCCESSFULL\n\n";
  gotoxy(50,16);
 cout<<" PRESS ANY KEY\n\n";gotoxy(50,19);
 getch();
 system("cls");
 Mainmenu();
 break;
}

 else
 {  system("cls"); Title();
     cout<<"\n\nINVALID USERNAME OR PASSWORD \n\n";
 c++;
      
 } 
} while(c<=2);
if(c>2)
{cout<<"SESSION IS OVER YOU CANNOT PROCEED FURTHER\n\n ";

cout<<"\n\n\t\t\t\tFORGET PASSWORD \n\n\n";
  cout<<"TYPE YES IF YOU WANT FORGET PASSWORD OTHER WISE TYPE NO\n";
  cin>>Fp;
  if(strcmp(Fp,"yes")==0||strcmp(Fp,"YES")==0)
  {system("cls");
  cout<<" \n\n\n\n\n\n\n\n\n \t\t\t\t\t\t HINT        =            COLLEGE ID\n\n\n\n\n\n";
  cout<<" \t\tPRESS   ANY   KEY\n";
  getch();
  system("cls");
 Title();
  Loginscreen();
  } 
   
   }
   getch();
 
}
 
int main()
 {system("cls");
     Welcomescreen(); 
    Title();
    Loginscreen();
    return 0;
     
 }










