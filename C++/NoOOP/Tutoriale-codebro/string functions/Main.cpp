#include <iostream>
#include <string>

using namespace std;

int main()
{
    //  string.lenght() returns lenght of a string
    //ex:
    /*
    ///////////////////////////////////////////////////////////////////////
    string first_name;

    cout << "numele tau este: " << endl;
    getline(cin, first_name);

    int lungime = first_name.length();
    cout << "numele tau are: " << lungime << " litere (cu tot cu spatiile libere dintre ele)" << endl;
    //////////////////////////////////////////////////////////////////////////

    */


    //  string.empty() returns true if empty

    //ex:

/*

//////////////////////////////////////////////////////////////////////////
    string first_name;

    cout << "numele tau este: " << endl;
    getline(cin, first_name);

    int lungime = first_name.length();
    cout << "numele tau are: " << lungime << " litere (cu tot cu spatiile libere dintre ele)" << endl;
    
    if(first_name.empty() == true)
    {
        cout << "nu ai introdus un nume " << endl;
    }
    else
    {
        cout << "numele tau este : " << first_name << endl;
    }
//////////////////////////////////////////////////////////////////
*/
    


    //  string.clear() clears a string
/*
/////////////////////////////////////////////////////////
    string first_name;

    cout << "numele tau este: " << endl;
    getline(cin, first_name);

    cout << "numele tau este: " << first_name << endl;
    cout << "stergem numele din variabila" << endl;

    first_name.clear();
    cout << "numele tau este: " << first_name << endl;
    cout << "deci a fost sters:)" << endl;
////////////////////////////////////////////////////////////

*/


    //  string1.append(string2) appends a string to another
/*
//////////////////////////////////////////////////////////////////
    string user_name;

    cout << "username-ul tau este: " << endl;
    getline(cin, user_name);

    string email = user_name.append("@gmail.com");

    cout << "emailul tau este acum: " << email << endl;
///////////////////////////////////////////////////////////////////
*/



    //  string.at(x) returns a character st a given index
/*
///////////////////////////////////////////////////////////////////
    string first_name;
    string middle_name;
    string last_name;

    cout << "enter your first name: " << endl;
    getline(cin, first_name);
    cout << "enter your middle name: " << endl;
    getline(cin,middle_name);
    cout << "enter your last name: " << endl;
    getline(cin, last_name);

    cout << "initialele tale sunt: " << first_name.at(0) << ", " << middle_name.at(0) << ", " << last_name.at(0) << endl; 
/////////////////////////////////////////////////////////////////////

*/


    //  string1.substr(int x, int y) retrieve a portion of a string
/*
//////////////////////////////////////////////////////////////////
    string first_name;

    cout << "enter your first name: ";
    getline(cin, first_name);

    string nickname = first_name.substr(0,3);

    cout << "your nickname is: " << nickname << endl;
////////////////////////////////////////////////////////////////////////

*/


    //  string1.insert(int x, string2); insert a string within another string
/*
///////////////////////////////////////////////////////////////////
    string user_name;
    cout << "enter your user_name: " << endl;
    getline(cin, user_name);

    user_name.insert(0,"@");

    cout << "reply: " << user_name;
////////////////////////////////////////////////////////////////////
*/



    //  string1.find(string2) returns index of string2

/*
//////////////////////////////////////////////////////////////////////
    string first_name;
    cout << "enter your first name: " << endl;
    getline(cin, first_name);

    string substring;
    cout << "search for which character?:";
    getline(cin, substring);

    int position = first_name.find(substring);

    cout << "found character/s at position: " << position << endl;
///////////////////////////////////////////////////////////////////////////////////////
*/


    //  string1.erase(x,y) erases portion of a string
/*
//////////////////////////////////////////////////////////////////////
    string phone_number;
    cout << "enter your phone number: " << endl;
    getline(cin, phone_number);

    phone_number.erase(0,3);

    cout << "phone number: " << phone_number;
/////////////////////////////////////////////////////////////////////////////
*/















    return 0;
}