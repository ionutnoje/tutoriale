// TOATE STRINGURILE POSIBILE CU LITERELE PE CARE LE ALEGEM NOI IN MAIN



#include <iostream>
using namespace std;
     
 
void printAllKLengthRec(char set[],string buffer,int n, int k)
{
    
    //cazul de baza
    if (k == 0)
    {
        cout << "nu se pot forma cuvinte de lungime 0:)";
    }
 
    // One by one add all characters
    // from set and recursively
    // call for k equals to k-1
    for (int i = 0; i < n; i++)
    {
        string newbuffer;
         
        // Next character of input added
        newbuffer = buffer + set[i];
         
        // k is decreased, because
        // we have added a new character
        printAllKLengthRec(set, newbuffer, n, k - 1);
    }
 
}
 
void printAllKLength(char set[], int k,int n)//
{
    printAllKLengthRec(set, "", n, k);
}
 
// Driver Code
int main()
{
    
    char set2[] = {'i', 'o', 'n', 'u', 't'};//literele cu care o sa cream toate combinatiile de cuvinte
    int nrlitere_forma_finala = 5;
    int care_litere_foloseste = 5;
    printAllKLength(set2, nrlitere_forma_finala, care_litere_foloseste);
    //nrlitere_forma_finala reprezinta cate litere sa fie la final...cate sa foloseasca si 
    //care_litere_foloseste reprezinta primele cat
}
 
// This code is contributed
// by Mohit kumar