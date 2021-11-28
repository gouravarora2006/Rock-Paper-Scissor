#include <iostream> 
#include <cstring> 
#include <bits/stdc++.h>  
#include <windows.h> 
using namespace std;  
int human=0,computer=0; 
int sec=0,seconds=0; 
void timer(); 
void timers(); 
void loading(); 
void scoreboard(string str1,string str2); 
int randomNoGenerator(int limit)  
{ 
 random_device rd;  
 mt19937 gen(rd());  
 uniform_int_distribution<> dis(1, limit);  
 return dis(gen);  
} 
int random() 
{  
 int limit = 100,a;  
 a=randomNoGenerator(limit); 
 return a; 
}  
void structure() 
{ 
cout<<"----------------------------------------------- \n\t STONE PAPER SCISSOR\n------------------------------- ----------------"; 
cout<<"\n\t Use Given Symbols\n-------------------- ---------------------------"; 
cout<<"\n\t R | \tROCK\n\t P |  \tPAPER\n\t S | \tSCISSOR\n"; 
}  
void game(char opt) 
{ 
int b; 
b = random(); 
cout<<endl; 
if(opt=='r' or opt=='R') 
{ 
if(b%2==0) 
{ 
cout<<"\nYou Choose : ROCK";
cout<<"\n\nComputer Choose : PAPER"; 
cout<<"\n\nResult : Computer Win"; computer++; 
} 
else 
{ 
cout<<"\nYou Choose : ROCK"; 
cout<<"\n\nComputer Choose : SCISSOR"; 
cout<<"\n\nResult : You Win"; 
human++; 
} 
} 
else if(opt=='p' or opt=='P') 
{ 
if(b%2==0) 
{ 
cout<<"\nYou Choose : PAPER"; 
cout<<"\n\nComputer Choose : SCISSOR"; 
cout<<"\n\nResult : Computer Win"; computer++; 
} 
else 
{ 
human++; 
cout<<"\nYou Choose : PAPER"; 
cout<<"\n\nComputer Choose : ROCK"; 
cout<<"\n\nResult : You Win"; 
} 
} 
else if(opt=='s' or opt=='S') 
{ 
if(b%2==0) 
{ 
cout<<"\nYou Choose : SCISSOR"; 
cout<<"\n\nComputer Choose : ROCK"; 
cout<<"\n\nResult : Computer Win"; computer++; 
} 
else 
{ 
human++; 
cout<<"\nYou Choose : SCISSOR"; 
cout<<"\n\nComputer Choose : PAPER"; 
cout<<"\n\nResult : You Win"; 
} 
} 
else  
{
cout<<"\n\t\tWrong Option"; 
} 
} 
int main() 
{ 
system("color 5f"); 
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t Welcome To  Rock Paper Scissor\n"; 
cout<<"\n\n\n\n\n\n\n\n\n\t\t\t Made By : Gourav  Arora\n\n"; 
timer(); 
system("cls"); 
char opt,done; 
string name; 
structure(); 
cout<<"\n\nEnter Your Name : "; 
getline(cin,name); 
system("cls"); 
int t=1; 
while(t>0) 
{ 
timers(); 
system("cls"); 
structure(); 
cout<<"--------------------------------------------- --"<<endl; 
cout<<"Enter Your Choice : "; 
 cin>>opt; 
 system("cls"); 
  
 game(opt); 
 scoreboard(name,"Computer"); 
 cout<<"\n\n\nWant To Play Again(Y/N) : "; 
 cin>>done; 
 cout<<endl<<endl; 
 system("cls"); 
 if(done=='n' or done=='N') 
 { 
break; 
} 
} 
return 0; 
} 
void scoreboard(string str1,string str2) 
{ 
cout<<endl<<"\n\n\n\t\t\t S C O R E B O A R D\n"; cout<<endl<<endl<<"\t\t\t "<<str1<<" vs "<<str2; cout<<endl<<endl<<endl<<"\t\t"<<str1<<"'s Scores :  "<<human<<"\t Computer's Score : "<<computer<<"\n\n\n"; 
}
void timer()  
{ 
 while (sec<3) {  
 sleep(1);  
 sec++; 
 }  
} 
void timers()  
{ 
 while (seconds<=500) {  
 //sleep(1); 
 loading();  
 seconds++; 
 }  
 seconds=0; 
} 
void loading() 
{ 
system("cls"); 
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t  LOADING................."<<seconds/5<<"%"; }

