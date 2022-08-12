#include <iostream>
#include <string.h>
using namespace std;


bool isPalRec(char str[], int pozitie, int lungime_cuvant)  
{  
   if (pozitie == lungime_cuvant)  
    return true;  //am ajuns la finalul comparatiei

   if (str[pozitie] != str[lungime_cuvant])//verificam daca prima si ultima litera sunt identice
   {
        return false; 
   }
   else
   {
        if (pozitie < lungime_cuvant + 1)  
        return isPalRec(str, pozitie + 1, lungime_cuvant - 1);
   }
    
   return true;  

}  

 
bool isPalindrome(char str[])  
{  
    //Lungimea cuvantului introdus
    int lungime_cuvant = strlen(str);
    
    if (lungime_cuvant == 0)  
    return true;  

    return isPalRec(str, 0, lungime_cuvant - 1);  
}  

 

//Functia principala
int main()  
{  
    char str[100];
    cout<<"Introduceti un cuvant: ";
    cin>>str;

   if (isPalindrome(str) == true)
   {
       cout<<"Cuvantul "<<str<<" este polindrom";  
    }
   else
   {
        cout<<"Cuvantul "<<str<<" nu este polindrom";  
    }
 
   return 0;  

}