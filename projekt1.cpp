#include <iostream>

using namespace std;

int silnia(int n){
	if(n == 0 || n == 1)
		return 1;
	return n * silnia(n - 1);
}
bool czy_pierwsza(int n){
	if(n <= 1)
		return false;
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return 0;
	}
	return true;
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
	cout << "1. Silnia" << endl;
        cout << "2. Czy liczba jest pierwsza" << endl;
	cout << "0. Wyjscie" << endl;
        cin >> wyjscie;

	if(wyjscie == 1){
		cout << a << "! = " << silnia(a) << endl;
	if(wyjscie == 2){
		if(czy_pierwsza(a))
			cout << "Liczba jest pierwsza" << endl;
		else
			cout << "Liczba nie jest pierwsza" << endl;
	}
    } while(wyjscie != 0);
    return 0;
}
