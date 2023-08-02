#include <bits/stdc++.h>


using namespace std;

int ContarVocales(string frase);

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    cout <<ContarVocales(frase);
    return 0;
}

int ContarVocales(string frase) {
    int c = 0;
    for (int i = 0; i < frase.size(); i++) {
        
        if (frase[i]== 'a' || frase[i] == 'e' ||frase[i] == 'i' || frase[i] == 'o' ||frase[i]== 'u') {
            c++;
        }
    }
return c;
}