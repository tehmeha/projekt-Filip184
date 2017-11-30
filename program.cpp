#include<iostream>
#include<algorithm>
using namespace std;

void unosenje_rijeci(string rijeci_prvog_tima[], string rijeci_drugog_tima[], int n)
{
    cout << "Upisite " << n << " rijeci prvog tima" << endl;
    for( int i = 0; i < n; i++ )
    {
        cin >> rijeci_prvog_tima[i];
    }
    cout << "Upisite " << n << " rijeci drugog tima" << endl;
    for( int i = 0; i < n; i++ )
    {
        cin >> rijeci_drugog_tima[i];
    }
}

void tijek_igre(string rijeci_prvog_tima[], string rijeci_drugog_tima[], int n, int *pogodjeni_drugi_tim, int *pogodjeni_prvi_tim)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        int pogodjeno;
        cout << "Drugi tim pogadja rijec: " << rijeci_prvog_tima[i] << endl;
        cout << "Unesite 0 ako prvi tim nije pogodio, 1 ako je pogodio." << endl;
        cin >> pogodjeno;
        pogodjeni_drugi_tim[i] = pogodjeno;

        cout << "Prvi tim pogadja rijec: " << rijeci_drugog_tima[i] << endl;
        cout << "Unesite 0 ako drugi tim nije pogodio, 1 ako je pogodio." << endl;
        cin >> pogodjeno;
        pogodjeni_prvi_tim[i] = pogodjeno;
    }
}

void zbrajanje_bodova(int *pogodjeni_prvi_tim, int *pogodjeni_drugi_tim, int &brojPogodakaPrvogTima, int &brojPogodakaDrugogTima, int n)
{
    brojPogodakaPrvogTima = count ( pogodjeni_prvi_tim, pogodjeni_prvi_tim + n, 1);
    brojPogodakaDrugogTima = count ( pogodjeni_drugi_tim, pogodjeni_drugi_tim + n, 1);
}

int main()
{
    int n;
    cout << "Upisite s koliko rijeci zelite igrati: ";
    cin >> n;
    string rijeci_prvog_tima[n];
    string rijeci_drugog_tima[n];
    unosenje_rijeci(rijeci_prvog_tima, rijeci_drugog_tima, n);
    int pogodjeno, pogodjeni_prvi_tim[n], pogodjeni_drugi_tim[n];
    tijek_igre(rijeci_prvog_tima, rijeci_drugog_tima, n, pogodjeni_drugi_tim, pogodjeni_prvi_tim);
    int brojPogodakaPrvogTima, brojPogodakaDrugogTima;
    zbrajanje_bodova(pogodjeni_prvi_tim, pogodjeni_drugi_tim, brojPogodakaPrvogTima, brojPogodakaDrugogTima, n);

    if ( brojPogodakaDrugogTima > brojPogodakaDrugogTima )
    {
        cout << "Drugi tim je pobijedio!" << endl;
    }
    else
    {
        cout << "Prvi tim je pobijedio!" << endl;
    }
}
