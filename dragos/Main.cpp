#include <iostream>

using namespace std;


static void afis_bin(unsigned int n,int nb)
{
	int i=0,k=0;
	char val_b[32];
	if ((n > 0)&&(n <= 255))
		k=8;
	if ((n > 255)&&(n <= 65535))
		k=16;
	if ((n > 65535)&&(n <= 2147483646))
		k=32;
	if (nb > 0)
		k=nb;
	if (n > 2147483646){
		k=0;
		cout << "\nNumar prea mare";
	}
	for (i=0; i < k; i++){
		if (n%2==0)
			val_b[k-1-i]='0';
		else
			val_b[k-1-i]='1';
		n=n/2;
	}
	// afisare binara
	for (i=0; i < k; i++){
		if (val_b[i]=='0')
			cout << char(176) << " ";
		else
			cout << char(219) <<  " ";
	}
	// prompter pe prima pozitie
	for (i=0;i < (2*k+1); i++){
			cout<<"\b";
	}
}

static void afis_binar(unsigned int n,int nb)
{
	system("COLOR 0B");
	int i=0,k=0;
	char val_b[32];
	if ((n > 0)&&( n <= 255))
		k=8;
	if ((n > 255)&&(n <= 65535))
		k=16;
	if ((n > 65535)&&(n <= 2147483646))
		k=32;
	if (nb>0)
		k=nb;
	if (n > 2147483646){
		k=0;
		cout << "\nNumar prea mare";
	}
	for (i=0; i < k; i++){
		if (n%2==0)
			val_b[k-1-i]='0';
		else
			val_b[k-1-i]='1';
		n=n/2;
	}
	// afisare binara
	for (i=0; i < k; i++){
		cout << val_b[i] << " ";
	}

	// prompter pe prima pozitie
	for (i=0;i < 2*k+1; i++){
			cout << "\b";
	}
}


int suma_int(int a, int b)
{
    return a+b;
}


double suma_double(double a, double b)
{
    return a+b;
}

float suma_float(float a, float b)
{
    return a+b;
}

unsigned int suma_unsigned_int(unsigned int a, unsigned int b)
{
    return a+b;
}




int main()
{
    cout << "rezultatul functiei afis_bin este: ";
    afis_bin(4,5);
    cout << endl;

    cout << "rezultatul functiei afis_binar este: ";
    afis_binar(4,5);
    cout << endl;

    cout << "rezultatul functiei suma cu int-uri este: ";
    cout << suma_int(1,5);
    cout << endl;

    cout << "rezultatul functiei suma cu double-uri este: ";
    cout << suma_double(5.4,1.5);
    cout << endl;

    cout << "rezultatul functiei suma cu float-uri este: ";
    cout << suma_float(10.54,9.233);
    cout << endl;

    cout << "rezultatul functiei suma cu unsigned int-uri este: ";
    cout << suma_unsigned_int(35,34);
    cout << endl;


    

    




    return 0;
}