/*Just a trial of putting questions..
Finished making trial and error.
One problem is, if you want to repeat the game, I can't put return it to the int main() :(*/
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
    {cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t **PLEASE ENTER YOUR NAME***";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t *******ONE WORD ONLY ******\n\n\t\t\t          ";
    cin>>n;
    system ("cls");
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\t\t\t ************* INSTRUCTIONS ***********";
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\t\t         * THIS WILL COVER BASIC MATHEMATICS  *";
    cout<<"\n\t\t         *** JUST ENTER THE CORRECT ANSWERS ***";
    cout<<"\n\t\t\t **************************************"<<endl;
    cout<<"\n\n\t\t\t ************** EXAMPLE ***************";
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\n\t\t\t\t      What is 2+37?"<<endl;
    cout<<"\n\t\t\t\t Correct answer is: 39"<<endl;
    cout<<"\n\t\t         *******Press ENTER to continue********";
    getch();}
    system ("cls");
    ca=0;
    i=1;
    start: //this is like a flag where the program will go here again when a whole question is finished.
    srand (time(NULL));
    r=rand()%6+1; // this is a trial so there's only 5 questions. This will be revised once more questions are encoded.
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
     int ca;
     int r, i;
     int nq[5] = {};
     char a[6] = {}; // letter
     int w, score;
     char c;
     home:
     system ("cls");
    {cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t **PLEASE ENTER YOUR NAME***";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t *******ONE WORD ONLY ******\n\n\t\t\t          ";
    cin>>n;
    system ("cls");
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\t\t\t ************* INSTRUCTIONS ***********";
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\t\t         *** PLEASE CHOOSE A LETTER FOR THE ***";
    cout<<"\n\t\t         ********** CORRECT ANSWER. ***********";
    cout<<"\n\t\t         ***** USE UPPERCASE LETTERS ONLY *****";
    cout<<"\n\t\t\t **************************************"<<endl;
    cout<<"\n\n\t\t\t ************** EXAMPLE ***************";
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\n\t\t\tWhat is the innermost layer of the Earth?"<<endl;
    cout<<"\n\t\t\t A. Crust \t\t B. Inner Core"<<endl;
    cout<<"\n\t\t\t C. Outer Core \t\t D. Mantle"<<endl;
    cout<<"\n\t\t\t\t Correct answer is: B"<<endl;
    cout<<"\n\t\t         *******Press ENTER to continue********";
    getch();}
    system("cls");
    ca=0;
    i=1;
    start:
    srand (time(NULL));
    r=rand()%6+1;
    nq[i]=r;
    for (w=0; w<i; w++)
    if (nq[w]==r) goto start;
          switch(r)
          {

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
    
void English()
     {char n[20];
     int ca;
     int r, i;
     int nq[5] = {};
     string a[6] = {}; // word
     int w, score;
     char c;
     home:
     system ("cls");
    {cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t **PLEASE ENTER YOUR NAME***";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t *******ONE WORD ONLY ******\n\n\t\t\t          ";
    cin>>n;
    system ("cls");
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\t\t\t ************* INSTRUCTIONS ***********";
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\t\t         ** PLEASE ENTER THE CORRECT ANSWERS **";
    cout<<"\n\t\t         * WITH THE FIRST LETTER IN UPPERCASE *";
    cout<<"\n\t\t         *** AND THE FOLLOWING IN LOWERCASE ***";
    cout<<"\n\t\t\t **************************************"<<endl;
    cout<<"\n\n\t\t\t ************** EXAMPLE ***************";
    cout<<"\n\t\t\t **************************************";
    cout<<"\n\n\t\t\t What is the past tense of the word EAT?"<<endl;
    cout<<"\n\t\t\t Correct answer: Ate"<<endl;
    cout<<"\n\t\t         *******Press ENTER to continue********";
    getch();}
    system("cls");
    ca=0;
    i=1;
    start:
    srand (time(NULL));
    r=rand()%6+1;
    nq[i]=r;
    for (w=0; w<i; w++)
    if (nq[w]==r) goto start;
          switch(r)
          {
                        case 1:
                        cout<<"What is the past tense of the word GO? ";
                        cin>>a[0];
                        if (a[0]=="Went")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 2:
                        cout<<"What is the plural form of SHEEP? ";
                        cin>>a[1];
                        if (a[1]=="Sheep")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 3:
                        cout<<"What do you call a verb that can function as a noun? ";
                        cin>>a[2];
                        if (a[2]=="Gerund")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 4:
                        cout<<"In a broad sense, verbs can either be an action verb or a/an? ";
                        cin>>a[3];
                        if (a[3]=="Linking")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 5:
                        cout<<"What is longer than a short story but shorter than a novel? ";
                        cin>>a[4];
                        if (a[4]=="Novelette")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 6:
                        cout<<"Who is the author of the classics Romeo and Juliet, and Macbeth?(Surname only) ";
                        cin>>a[5];
                        if (a[5]=="Shakespeare")
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
