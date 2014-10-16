#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;

int main();

int Math(){
    char n[20]; //name
    int i, ca;
    int a[6]; //array for answers
    int num[6]={0,1,2,3,4,5}; //array for question number
    char c;
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
    i=0;
    ca=0;
    srand (time(0));
    random_shuffle(num, num+6);
    do {
          switch(num[i])
          {
                   case 0:
                        cout<<"What is 8x12? ";
                        cin>>a[1];
                        if (a[1]==96)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 1:
                        cout<<"What is 120/3? ";
                        cin>>a[2];
                        if (a[2]==40)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 2:
                        cout<<"What is 23+81? ";
                        cin>>a[3];
                        if (a[3]==104)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 3:
                        cout<<"What is 47-18? ";
                        cin>>a[0];
                        if (a[0]==29)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 4:
                        cout<<"What is the square root of 121? ";
                        cin>>a[4];
                        if (a[4]==11)
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                   case 5:
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
          }while (i<5);
          system("cls");
          if (ca==5)
          cout<<"Perfect Score! Great job! "<<endl<<"You got "<<ca<<" out of 5 questions!";
          else if (ca>=4 && ca<5) 
          cout<<"Not Perfect but still very good! "<<endl<<"You got "<<ca<<" out of 5questions!";
          else if (ca>=3 && ca<4) 
          cout<<"Satisfactory. "<<endl<<"You got "<<ca<<" out of 5 questions!";
          else
          cout<<"You need to read.  You can do it! "<<"You got "<<ca<<" out of 5 questions!";
          cout<<"\n\nWanna play again? (Y/N)";
          c=toupper(getch());
          if (c=='Y') {main();}
          else if (c=='N') {exit(1);}
          else
          {cout<<"Wrong Selection!";getch();}
          
}
int Science(){
    char n[20];
    int i, ca, r;
    char a[6];
    int num[6]={0,1,2,3,4,5};
    char c;
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
    i=0;
    ca=0;
    srand (time(0));
    random_shuffle(num, num+6);
    do {
          switch(num[i])
          {
                        case 0:
                        system("cls");
                        cout<<"\n\n\t\tWhat is the innermost layer of the Earth? "<<endl;
                        cout<<"\n\t\t A. Crust \t\t B. Inner Core"<<endl;
                        cout<<"\n\t\t C. Outer Core \t\t D. Mantle"<<endl;
                        cout<<"\n\t\t\t Your answer is: ";
                        cin>>a[0];
                        if (a[0]=='B')
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 1:
                        system("cls");
                        cout<<"\n\n\t\t Which organelle is known as 'the cell's brain'?"<<endl;
                        cout<<"\n\t\t A.Ribosome  \t\t\t B.Nucleus "<<endl;
                        cout<<"\n\t\t C.Mitochondrion  \t\t D.Funny bone "<<endl;
                        cout<<"\n\t\t\t Your answer is: ";
                        cin>>a[1];
                        if (a[1]=='B')
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 2:
                        system("cls");
                        cout<<"\n\n\t\t Which of the following is not part of a bacterial cell"<<endl;
                        cout<<"\n\t\t A.Nucleus \t\t B.Ribosome "<<endl;
                        cout<<"\n\t\t C.Protein \t\t D.Cytoplasm "<<endl;
                        cout<<"\n\t\t\t Your answer is: ";
                        cin>>a[2];
                        if (a[2]=='A')
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 3:
                        system("cls");
                        cout<<"\n\n\t\t The mitochondrion plays an important role as the cell’s ...."<<endl;
                        cout<<"\n\t\t A. GateKeeper \t\t B. Infection Fighter"<<endl;
                        cout<<"\n\t\t C. Power Plant \t D. Molecular tether"<<endl;
                        cout<<"\n\t\t\t Your answer is: ";
                        cin>>a[3];
                        if (a[3]=='C')
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 4:
                        system("cls");
                        cout<<"\n\n\t\t Compared to felsic igneous rocks, mafic igneous\n\t\t\trocks contain greater amounts of"<<endl;
                        cout<<"\n\t\t A. white quartz \t\t B. Aluminum"<<endl;
                        cout<<"\n\t\t C. pink feldspar\t\t D. Iron"<<endl;
                        cout<<"\n\t\t\t Your answer is: ";
                        cin>>a[4];
                        if (a[4]=='D')
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        case 5:
                        system("cls");cout<<"\n\n\t\t\t What causes night and day?"<<endl;
                        cout<<"\n   A. The earth spins on its axis.      B. The earth moves around the sun."<<endl;
                        cout<<"\n   C. Clouds block out the sun's light. D. The sun goes around the earth."<<endl;
                        cout<<"\n\t\t\t Your answer is: ";
                        cin>>a[5];
                        if (a[5]=='A')
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
          }
          i++;
          }while (i<5);
    system("cls");
    if (ca==5)
    cout<<"Perfect Score! Great job! "<<endl<<"You got "<<ca<<" out of 5 questions!";
    else if (ca>=4 && ca<5) 
    cout<<"Not Perfect but still very good! "<<endl<<"You got "<<ca<<" out of 5questions!";
    else if (ca>=3 && ca<4) 
    cout<<"Satisfactory. "<<endl<<"You got "<<ca<<" out of 5 questions!";
    else
    cout<<"You need to read.  You can do it! "<<"You got "<<ca<<" out of 5 questions!";
    cout<<"\n\nWanna play again? (Y/N)";
    c=toupper(getch());
    if (c=='Y') {main();}
    else if (c=='N') {exit(1);}
    else
    {cout<<"Wrong Selection!";getch();}
    }
    
int English(){
    char n[20];
    int i, ca, r;
    string a[6];
    int num[6]={0,1,2,3,4,5};
    char c;
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
    i=0;
    ca=0;
    srand (time(0));
    random_shuffle(num, num+6);
    do {
          switch(num[i])
          {
                        case 0:
                        cout<<"What is the past tense of the word GO? ";
                        cin>>a[0];
                        if (a[0]=="Went")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 1:
                        cout<<"What is the plural form of SHEEP? ";
                        cin>>a[1];
                        if (a[1]=="Sheep")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 2:
                        cout<<"What do you call a verb that can function as a noun? ";
                        cin>>a[2];
                        if (a[2]=="Gerund")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 3:
                        cout<<"In a broad sense, verbs can either be an action verb or a/an? ";
                        cin>>a[3];
                        if (a[3]=="Linking")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 4:
                        cout<<"What is longer than a short story but shorter than a novel? ";
                        cin>>a[4];
                        if (a[4]=="Novelette")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
                        
                        case 5:
                        cout<<"Who is the author of the classics Romeo and Juliet, and Macbeth?(Surname only)\n";
                        cin>>a[5];
                        if (a[5]=="Shakespeare")
                        {
                        ca++;
                        break;}
                        else
                        {break;}
              }
    i++;
    }while (i<5);
    {
    system("cls");
    if (ca==5)
    cout<<"Perfect Score! Great job! "<<endl<<"You got "<<ca<<" out of 5 questions!";
    else if (ca>=4 && ca<5) 
    cout<<"Not Perfect but still very good! "<<endl<<"You got "<<ca<<" out of 5questions!";
    else if (ca>=3 && ca<4) 
    cout<<"Satisfactory. "<<endl<<"You got "<<ca<<" out of 5 questions!";
    else
    cout<<"You need to read.  You can do it! "<<"You got "<<ca<<" out of 5 questions!";
    cout<<"\n\nWanna play again? (Y/N)";
    c=toupper(getch());
    if (c=='Y') {main();}
    else if (c=='N') {exit(1);}
    else
    {cout<<"Wrong Selection!";getch();}
    }
          }
void Quit()
     {exit(1);}
    
    
int main()
{   mainhome: 
    
    char c;
    system("cls");
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
