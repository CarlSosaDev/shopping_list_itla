//============================================================================
// Name        : Library.cpp
// Author      : Carlos Raul Sosa
// Version     :1
// Copyright   : MIT LICENSE
// Description : Shopping List C++, Ansi-style
//============================================================================

#include <iostream>
#include "Menu.h"
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <istream>
using namespace std;


// define my struct for articles
struct article{
char name[200]; // name of articles
char quantity[10000]; // quantity of articles
struct article *next; //next article
};

// first article and  second article
struct article *first, *last;



//method for create new article
void newOne(){
struct article *InsertOne;

//reserving memory
InsertOne = (struct article *)malloc(sizeof(struct article));

if(InsertOne==NULL) cout <<"Warning!" <<endl;

//get the data
cout<<"Insert data" << endl;
printf("Article: " ); fflush(stdout);
gets(InsertOne->name);
printf("Quantity: "); fflush(stdout);
gets(InsertOne->quantity);

InsertOne->next=NULL;

//evaluate if the list is empty
if(first==NULL){
    cout<<"Articles" << endl;
    first= InsertOne;
    last = InsertOne;
}
else {
        // the last aim to the next
    last-> next = InsertOne;
        // the InsertOne is now the last of the list
    last = InsertOne;
}

    } //end new

   //method for see the list
void FullList(){
    //browse the list
struct article *see;
int i;
i=0;

see = first;
cout<<"Full List" <<endl;
while(see!=NULL){
printf("Name: %s, Quantity: %s \n",
       see->name,see->quantity);
       see= see->next;
       i++;
}
//return this ,if the list was empty
if(i=0){ printf("\n There aren't articles");}
}



//delete method
void deleteOne(char a, char b )
{
    struct article *Erase;
Erase = first,last;
if(Erase!=NULL){
printf("Delete? press enter"); fflush(stdout);
gets(Erase->name);
printf("Confirm pressing enter: "); fflush(stdout);
gets(Erase->quantity);
delete Erase->name, Erase->quantity;

}

Erase->next=NULL;

//evaluate if the list is empty
if(first==NULL){
    cout<<"--------" << endl;
    first= Erase;
    last = Erase;
}
else {
        // the last aim to the next
    last-> next = Erase;
        // the Erase is now the last of the list
    last = Erase;
}

}


//Exit method
void Ex(){
cout<<"Close the message windows if there is one" <<endl;
abort(); //stop the program inmediately


}

//main method
int main()
{

cout<<"Welcome to the Shopping List" <<endl;
cout<<"Data Structure" <<endl;

     char option; // options

     //first = (struct article *) NULL;
     //last = (struct article *) NULL;

     //for delete method
     char a;
     char b;


//do-while clause
do{
        // menu class (menu.cpp)
        Menu menu;
        	//show() method (menu.cpp)
            menu.show();

        //get data
        option= getchar();
        a = getchar();
        b= getchar();

        //different options
        switch(option)
        {

        case '1': FullList(); // show the list
            break;
        case '2': newOne(); //insert new article
            break;
        case '3': deleteOne(a,b); //delete list
            break;
        case '4': Ex();// exit the program
            break;\
        } //end switch

    }while(option!=4);

    EXIT_SUCCESS;

} // end of the main()
