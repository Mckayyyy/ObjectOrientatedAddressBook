#ifndef PERSONMANAGER_H
#define PERSONMANAGER_H

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <windows.h>

#include "Person.h"
#include "PersonsTextFile.h"
#include "Methods.h"

using namespace std;

class PersonManager
{
    const int LOGGEDIN_USER_ID;
    vector <Person> persons;
    PersonsTextFile personsTextFile;

    void printPersonData(Person person);

public:
    PersonManager(string textFileName,int loggedInUserId): personsTextFile(textFileName),LOGGEDIN_USER_ID(loggedInUserId)
    {
        persons = personsTextFile.loadPersonDataFromTextFileToVector(LOGGEDIN_USER_ID);
    };
    void displayWholeAdressBook();
    void addPersonToBook();


};



#endif
