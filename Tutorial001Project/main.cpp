// Ausgabe von Hello World auf der Konsole 
#include <iostream>
using namespace std; // sorgt dafuer dass cout aus der Standardbibliothek ohne weiteres als Befehl interpretiert wird - und nicht vielleicht ein eigenes cout gesucht wird.

// Entry point.
int main() {
	// \a 	akustisches Signal (von englisch alert) 
	
	int zahl;
	zahl = 10; 
	
	
	cout << "Hello Woerld\n" << "Ich bin der Werner. \a " << zahl<< endl << "Und du?" << endl;
	system("pause");
	// Exits program 
	return 0;
}