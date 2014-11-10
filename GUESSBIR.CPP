#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int answer,date=0;
 cout<<"Is ur birthday in Set1??\n\n";
 cout<<"====SET1====\n\n";
 cout<<" 1  3  5  7\n 9 11 13 15\n17 19 21 23\n25 27 29 31\n\n";
 cout<<"Enter 0 for NO and 1 for YES::";
 cin>>answer;
 cout<<"You enter :"<<answer;
 if(answer==1)
    date=date+1;

 cout<<"\n\n\n\nIs ur birthday in Set2??\n\n";
 cout<<"====SET2====\n\n";
 cout<<" 2  3  6  7\n10 11 14 15\n18 19 22 23\n26 27 30 31\n\n";
 cout<<"Enter 0 for NO and 1 for YES::";
 cin>>answer;
 cout<<"You enter :"<<answer;
  if(answer==1)
    date=date+2;


     cout<<"\n\n\n\nIs ur birthday in Set3??\n\n";
 cout<<"====SET3====\n\n";
 cout<<" 4  5  6  7\n12 13 14 15\n20 21 22 23\n28 29 30 31\n\n";
 cout<<"Enter 0 for NO and 1 for YES::";
 cin>>answer;
 cout<<"You enter :"<<answer;
  if(answer==1)
    date=date+4;



     cout<<"\n\n\n\nIs ur birthday in Set4??\n\n";
 cout<<"====SET4====\n\n";
 cout<<" 8  9 10 11\n12 13 14 15\n24 25 26 27\n28 29 30 31\n\n";
 cout<<"Enter 0 for NO and 1 for YES::";
 cin>>answer;
 cout<<"You enter :"<<answer;
  if(answer==1)
    date=date+8;

     cout<<"\n\n\n\nIs ur birthday in Set5??\n\n";
 cout<<"====SET5====\n\n";
 cout<<"16 17 18 19\n20 21 22 23\n24 25 26 27\n28 29 30 31\n\n";
 cout<<"Enter 0 for NO and 1 for YES::";
 cin>>answer;
 cout<<"You enter :"<<answer;
  if(answer==1)
    date=date+16;
 cout<<"\n\n\nYour 'BIRTH DATE' is ::"<<date;
 getch();
}