#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;
void Math()
    
    {float age;
    system ("cls");
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t ***PLEASE ENTER YOUR AGE***";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t ***********  ***********\n\n\t\t\t          ";
    cin>>age;}
    
void Science()
     {char g[6];
     system ("cls");
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t *PLEASE ENTER YOUR GENDER**";
    cout<<"\n\t\t\t ***************************";
    cout<<"\n\t\t\t ***********  ***********\n\n\t\t\t          ";
    cin>>g;}
    
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
