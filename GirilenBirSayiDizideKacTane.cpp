#include <iostream>
using namespace std;
void KacTane();
int main() {
    KacTane();
}
void KacTane() {
    int sayi[10],counter = 0,aranan;
    for (int i = 0; i < 10; i++) {
        cout << "Sayi " << i+1 << " : " << endl;
        cin >> sayi[i];
    }
    cout << "Dizinde kac tane oldugunu ogrenmek istediginiz sayiyi giriniz : " << endl;
    cin >> aranan;
    for (int i = 0; i < 10; i++) {
       if (aranan == sayi[i]) {
           counter++;
       }
    }
    if (counter == 0) {
        cout << aranan << " sayisi, dizinde bulunamamistir." << endl;
    }
    else {
        cout << aranan << " sayisi, dizinde " << counter << " tane bulunmaktadir" << endl;
    }

}