#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
int Math()
     {char n[20];
     int ca; //ca means number of correct answers
     int r, i; // r will be used to randomize the questions, i is used to determine the number of questions that was answered, right or wrong
     int nq[5] = {}; //this is an array. 5 means 5 questions will be asked per game. This means number of questions
     int a[6] = {}; //array for the answers user gave.
     int w, score;
     char c;
     home:
     system ("cls");
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t **PLEASE ENTER YOUR NAME***";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t *******ONE WORD ONLY ******\n\n\t\t\t          ";
    cin>>n;
    system ("cls");
    ca=0;
    i=1;
    start: //this is like a flag where the program will go here again when a whole question is finished.
    srand (time(NULL));
    r=rand()%6+1; // to randomize the questions.
    nq[i]=r; //After each question, 1 will be added so the operation will end once 6 is reached.
    for (w=0; w<i; w++) //it will always loop unless the array nq reaches 6, because as said above, it's only until 5. :)
    if (nq[w]==r) goto start;
          switch(r)
          {
                   case 1:
                        cout<<"What is 8x12? ";
                        cin>>a[1];
                        if (a[1]==96)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 2:
                        cout<<"What is 120/3? ";
                        cin>>a[2];
                        if (a[2]==40)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 3:
                        cout<<"What is 23+81? ";
                        cin>>a[3];
                        if (a[3]==104)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 4:
                        cout<<"What is 47-18? ";
                        cin>>a[0];
                        if (a[0]==29)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 5:
                        cout<<"What is the square root of 121? ";
                        cin>>a[4];
                        if (a[4]==11)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 6:
                        cout<<"What is the cube root of 8? ";
                        cin>>a[5];
                        if (a[5]==2)
                        {
                        ca++;
                        break;}
                        else
                        {break;}         
          }
          i++;
          if (i<=5) goto start;
          if (ca==5)
          cout<<"\n\nPerfect Score! Great job! "<<endl<<"You got "<<ca<<" out of 5 questions!";
          else if (ca>=4 && ca<5) 
          cout<<"\n\nNot Perfect but still very good! "<<endl<<"You got "<<ca<<" out of 5questions!";
          else if (ca>=3 && ca<4) 
          cout<<"\n\nSatisfactory. "<<endl<<"You got "<<ca<<" out of 5 questions!";
          else
          cout<<"\n\nYou need to read. :( You can do it! "<<"You got "<<ca<<" out of 5 questions!";
          cout<<"\n\nWanna play again? (Y/N)";
          c=toupper(getch());
          if (c=='Y') {goto home;}
          else if (c=='N') {exit(1);}
          else
          {cout<<"Wrong Selection!";getch();}
          
}

void Science()
     {char n[20];
     system ("cls");
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t **PLEASE ENTER YOUR NAME***";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t *******ONE WORD ONLY ******\n\n\t\t\t          ";
    cin>>n;}
    
void English()
     {char n[20];
     system ("cls");
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t **PLEASE ENTER YOUR NAME***";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t *******ONE WORD ONLY ******\n\n\t\t\t          ";
    cin>>n;}
    
void Quit()
     {exit(1);}
    
    
int main()
{   mainhome: 
    
    char c;
    cout<<"\n\t\t\t  WELCOME TO I.Q TEST GAME \n";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t * Please Select Category  *";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t * Press [A] for  MATH     *";
    cout<<"\n\t\t\t * Press [B] for SCIENCE   *";
    cout<<"\n\t\t\t * Press [C] for ENGLISH   *";
    cout<<"\n\t\t\t ***************************\n\n\n";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t *    Press [Q] to exit    *";
    cout<<"\n\t\t\t ***************************\n\n\t\t\t   ";
    c=toupper(getch());
    if (c=='A'){Math();}
    else if (c=='B'){Science();}
    else if (c=='C'){English();}
    else if (c=='Q'){Quit();}
    else
    {cout<<"!!!!WRONG SELECTION!!!!";getch();}
    
    getch();
}
