#ifndef FINALPROJECTHEADER_H
#define FINALPROJECTHEADER_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Struct declaration
struct Person{  
    
    string personName,
           personDOB;
           
    long personSSN,
         fatherSSN,
         motherSSN;
    
    char personGender;
    
    float personHeight,
          personWeight;
    
    Person* next;                                         
};
// End struct declaration

//  ---- function Prototypes. -----

void show_welcomeMsg();

void show_goodbyeMsg();
int user_input();                                   // Utility -- user input

bool menu_loop(bool, Person*);                      // Main menu

Person* populate_Person(string);                    // Initial dataset

struct Person* swap_Person(struct Person*,struct Person*);          // Utility -- swap nodes

int get_nodeCount(Person*);                         // Utility
void print_PersonNodes(Person*);                    // Utility

Person* sort_bySSN(struct Person**);                // Option 1

Person* delete_Person(Person**);                    // Option 2

Person* input_newPerson(Person**);                  // Option 3

Person* add_bulkPerson(Person**);                   // Option 4

void edit_PersonData(Person*);                      // Option 5

void display_Eligibility(Person*);                  // Option 6

void display_Cardiovascular_Risk (Person *);	    // Option 7

float get_BMI (Person *);                   	    // Gets BMI

void PersonPosition_swap(Person*, Person*);         // Positions person

void femaleMaleRatio(Person* head);                 // Option 8

void display_Parents(Person*);                      // Option 9

void display_Children(Person*);                     //Option 10

Person* option_ten(Person*);

void display_Siblings(Person*);

Person* option_twelve(Person*);

// File generation
void gen_file();                                    // create persondata.txt
void gen_suppFile();                                // create supplement.txt
//  ---- End function Prototypes. -----




#endif // FINALPROJECTHEADER_H
