// Pythagoras Theorem 

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{
    float hypo,base,perp;
    char choice,repeat,checker;
    while(1)
    {
    cout<<"Welcome User !\nChoose a number from below to start calculation ...\n\n";
    cout<<"1 for Hypotenuse .\n2 for Base .\n3 for Perpendicular .\n\n";
    cout<<"Your Choice : ";
    choice=getche();
    cout<<"\n\n";
    system("pause");
    system("cls");
    if(choice=='1')
    {
        cout<<"Enter value of Base : ";
        cin>>base;
        cout<<"Enter value of Perpendicular : ";
        cin>>perp;
        system("cls");
        cout<<"Base : "<<base<<"\nPerpendicular : "<<perp;
        hypo=sqrt((base*base)+(perp*perp));
        cout<<"\n\nHypotenuse = "<<hypo;
        getch();
        system("cls");
    }
    else if(choice=='2')
    {
        cout<<"Enter value of Hypotenuse : ";
        cin>>hypo;
        cout<<"Enter value of Perpendicular : ";
        cin>>perp;
        system("cls");
        cout<<"Hypotenuse : "<<hypo<<"\nPerpendicular : "<<perp;
        base=sqrt((hypo*hypo)-(perp*perp));
        cout<<"\n\nBase = "<<base;
        getch();
        system("cls");
    }
    else if(choice=='3')
    {
        cout<<"Enter value of Hypotenuse : ";
        cin>>hypo;
        cout<<"Enter value of Base : ";
        cin>>base;
        system("cls");
        cout<<"Hypotenuse : "<<hypo<<"\nBase : "<<base;
        perp=sqrt((hypo*hypo)-(base*base));
        cout<<"\n\nPerpendicular = "<<perp;
        getch();
        system("cls");
    }
    else
    {
        cout<<"Plz select a number from the given menu ...\nPress any key to try again .";
        getch();
        system("cls");
    }
    while(1)
    {
    cout<<"Do you want to perform a new calculation (y/n) : ";
    repeat=getch();
    if(repeat=='y'||repeat=='Y')
    {   
        system("cls");
        break;
    }
    else if(repeat=='n'||repeat=='N')
    {
        checker='E';
        system("cls");
        cout<<"Thanks for using Pythagoras !\nSee you again soon ... Good Bye !";
        getch();
        system("cls");
        break;
    }    
    else
    {
        system("cls");
        cout<<"Invalid input plz enter y/Y for yes and n/N for no ... \nPress any key to try again .";
        getch();
    }
    system("cls");
    }
    if(checker=='E')
        break;
    }
}