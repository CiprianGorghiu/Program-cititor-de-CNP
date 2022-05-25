#include <iostream>
using namespace std;
#include <windows.h>

//variabile
long int cnp;
long int cnp2;
int cnp_save;
int cnp_save2;
int cifra=0;

//functii
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void aflare_data();
void aflare_sex();
void aflare_judet();
void citire_date();
void meniu();

void meniu()
{
    char intrebare;

    cout<<"Doresti sa introduci din nou datele?"<<endl;
    cout<<"Press Y to";
    SetConsoleTextAttribute(h, 2);
    cout<<" yes "; 
    SetConsoleTextAttribute(h, 7);
    cout<< "and N to";
     SetConsoleTextAttribute(h, 4);
    cout<<" no"<<endl;
     SetConsoleTextAttribute(h, 7);
    cin>>intrebare;
    switch(intrebare)
    {
        case 'y': system("CLS");
                 citire_date();
                 break;
        case 'Y':system("CLS"); 
                citire_date();
                break;

        case 'n': exit(0);
                break;
        case 'N': exit(0);
                break;

    }

}
void aflare_judet()
{
    int cod_jud = 0, numar_ordine = 0, cifra_control = 0;
    cifra_control = cnp_save2%10;
    cnp_save2 = cnp_save2/10;
    numar_ordine = cnp_save2%1000;
    cnp_save2 = cnp_save2/1000;
    cod_jud = cnp_save2%100;


    cout<<"Cod judet: "<<cod_jud;
    cout<<" (";
    if(cod_jud == 1)
    {
        cout<<"Alba";
    }
    else if(cod_jud == 2)
    {
        cout<<"Arad";
    }
     else if(cod_jud == 3)
    {
        cout<<"Arges";
    }
      else if(cod_jud == 4)
    {
        cout<<"Bacau";
    }
      else if(cod_jud == 5)
    {
        cout<<"Bihor";
    }
      else if(cod_jud == 6)
    {
        cout<<"Bistrita Nasaud";
    }
      else if(cod_jud == 7)
    {
        cout<<"Botosani";
    }
      else if(cod_jud == 8)
    {
        cout<<"Brasov";
    }
      else if(cod_jud == 9)
    {
        cout<<"Braila";
    }
      else if(cod_jud == 10)
    {
        cout<<"Buzau";
    }
      else if(cod_jud == 11)
    {
        cout<<"Caras-Severin";
    }
      else if(cod_jud == 12)
    {
        cout<<"Cluj";
    }

      else if(cod_jud == 13)
    {
        cout<<"Constanta";
    }
    
      else if(cod_jud == 14)
    {
        cout<<"Covasna";
    }
      else if(cod_jud == 15)
    {
        cout<<"Dambovita";
    }
      else if(cod_jud == 16)
    {
        cout<<"Dolj";
    }
      else if(cod_jud == 17)
    {
        cout<<"Galati";
    }
      else if(cod_jud == 23)
    {
        cout<<"Giurgiu";
    }
      else if(cod_jud == 18)
    {
        cout<<"Gorj";
    }
      else if(cod_jud == 19)
    {
        cout<<"Harghita";
    }
      else if(cod_jud == 20)
    {
        cout<<"Hunedoara";
    }
      else if(cod_jud == 21)
    {
        cout<<"Ialomita";
    }
      else if(cod_jud == 22)
    {
        cout<<"Iasi";
    }
      else if(cod_jud == 47)
    {
        cout<<"Ilfov";
    }
      else if(cod_jud == 24)
    {
        cout<<"Maramures";
    }
      else if(cod_jud == 25)
    {
        cout<<"Mehedinti";
    }
      else if(cod_jud == 26)
    {
        cout<<"Mures";
    }
      else if(cod_jud == 27)
    {
        cout<<"Neamt";
    }
      else if(cod_jud == 28)
    {
        cout<<"Olt";
    }
      else if(cod_jud == 29)
    {
        cout<<"Prahova";
    }
      else if(cod_jud == 30)
    {
        cout<<"Satu Mare";
    }
      else if(cod_jud == 31)
    {
        cout<<"Salaj";
    }
      else if(cod_jud == 32)
    {
        cout<<"Sibiu";
    }
      else if(cod_jud == 33)
    {
        cout<<"Suceava";
    }
      else if(cod_jud == 34)
    {
        cout<<"Teleorman";
    }
      else if(cod_jud == 35)
    {
        cout<<"Timis";
    }
      else if(cod_jud == 36)
    {
        cout<<"Tulcea";
    }
      else if(cod_jud == 37)
    {
        cout<<"Vaslui";
    }
      else if(cod_jud == 38)
    {
        cout<<"Valcea";
    }
      else if(cod_jud == 39)
    {
        cout<<"Vrancea";
    }
      else if(cod_jud == 41)
    {
        cout<<"Municipiul Bucuresti";
    }
     else if(cod_jud == 40)
    {
        cout<<"Calarasi";
    }
    else
    {
        cout<<"Cod gresit!";
    }
    cout<<") "; cout<<"Numar de ordine: "<<numar_ordine<<" Cifra de control: "<<cifra_control<<endl;

}


void aflare_data()
{
	int an = 0,luna=0,zi = 0;
	zi = cnp_save%100;
	cnp_save = cnp_save/100;
	luna = cnp_save%100;
	cnp_save = cnp_save/100;
	an = cnp_save%100;
	cout<<"Ziua: "<<zi<<" luna: "<<luna<<" anul: ";
	if(cifra == 1 || cifra == 2)
	{
        if(an <= 9)
        {
            cout<<"190"<<an<<endl;
        }
        else if(an >= 10)
        {
            cout<<"19"<<an<<endl;
        }
	}
    if(cifra == 3 || cifra == 4)
    {
        if(an <= 9)
        {
            cout<<"180"<<an<<endl;
        }
        else if(an >= 10)
        {
            cout<<"18"<<an<<endl;
        }
    }
    if(cifra == 5 || cifra == 6)
    {
        if(an <= 9)
        {
            cout<<"200"<<an<<endl;
        }
        else if(an >= 10)
        {
            cout<<"20"<<an<<endl;
        }
    }

    if(cifra == 7 || cifra == 8)
    {

        if(an <= 9)
        {
            cout<<"200"<<an<<endl;
        }
        else if(an >= 10)
        {
            cout<<"20"<<an<<endl;
        }

        cout<<"Persoana straina rezidenta in Romania"<<endl;
        
    }
}

void aflare_sex()
{

while(cnp != 0)
{
cifra = cnp%10;
cnp = cnp/10;

}
if(cifra%2 == 1)
{
	cout<<"Sex: Masculin"<<endl;
}
else if(cifra%2 == 0)
{
cout<<"Sex: Feminin"<<endl;	
}
}
void citire_date()
{
cout<<"Introdu primele 7 cifre din CNP:"<<endl;
cin>>cnp;
cout<<"Introdu urmatoarele 6 cifre din CNP"<<endl;
cin>>cnp2;
if(cnp > 9999999 || cnp <= 1000000)
 {
    system("CLS");
    cout<<"[Eroare]CNP invalid!"<<endl;
    meniu();
 }
 else if(cnp2>999999 || cnp2 <= 100000)
 {
    system("CLS");
    cout<<"[Eroare]CNP invalid!"<<endl;
    meniu();
 }
 else
 {
    system("CLS");
    cout<<"Iti verificam buletinul!"<<endl; 
    cnp_save = cnp;
    cnp_save2 = cnp2;
    cout<<"CNP:"<<cnp_save; 
    SetConsoleTextAttribute(h, 4);
    cout<<cnp_save2<<endl;
    SetConsoleTextAttribute(h, 7);
    aflare_sex();
    aflare_data();
    aflare_judet();
    cout<<endl;
    meniu();

 }

}
int main()
{
citire_date();


	return 0;

}