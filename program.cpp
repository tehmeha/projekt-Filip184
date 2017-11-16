#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Upisite s koliko rijeci zelite igrati: ";
    cin >> n;
    string rijeci_prvog_tima[n];
    string rijeci_drugog_tima[n];

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

    int pogodjeno, pogodjeni_prvi_tim[n], pogodjeni_drugi_tim[n];


    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Drugi tim pogadja rijec: " << rijeci_prvog_tima[i] << endl;
        cout << "Unesite 0 ako prvi tim nije pogodio, 1 ako je pogodio." << endl;
        cin >> pogodjeno;
        pogodjeni_drugi_tim[i] = pogodjeno;

        cout << "Prvi tim pogadja rijec: " << rijeci_drugog_tima[i] << endl;
        cout << "Unesite 0 ako drugi tim nije pogodio, 1 ako je pogodio." << endl;
        cin >> pogodjeno;
        pogodjeni_prvi_tim[i] = pogodjeno;
    }
    int brojPogodakaPrvogTima = count ( pogodjeni_prvi_tim, pogodjeni_prvi_tim + n, 1);
    int brojPogodakaDrugogTima = count ( pogodjeni_drugi_tim, pogodjeni_drugi_tim + n, 1);
    if ( brojPogodakaDrugogTima > brojPogodakaDrugogTima )
    {
        cout << "Prvi tim je pobijedio!" << endl;
    }
    else
    {
        cout << "Drugi tim je pobijedio!" << endl;
    }
}
