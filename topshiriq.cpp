#include <iostream>
#include <string>

using namespace std;

int main() {

    int K , kun , week;

    /*
    string dushanba , seshanba , chorshanba , payshanba , juma , shanba , yakshanba;
    dushanba = "dushanba";
    seshanba = "seshanba";
    chorshanba = "chorshanba";
    payshanba = "Payshanba";
    juma = "juma";
    shanba = "shanba";
    yakshanba = "yakshanba";

     if(kun == 0){
            cout << chorshanba << endl;
        }
        else if(kun == 1) {
            cout << payshanba << endl;
        }
        else if(kun == 2) {
            cout << juma << endl;
        }
    else if(kun == 3){
        cout<<shanba<<endl;
    }
    else if(kun == 4) {
        cout << yakshanba << endl;
    }
    else if(kun == 5) {
        cout << dushanba << endl;
    }
    else if(kun == 6) {
        cout << seshanba << endl;
    }


*/

    string a[7] = {"Dushanba" , "Seshanba" , "chorshanba" , "payshanba" , "juma" , "shanba" , "yakshnba" };


    cout<< "K soni: ";
    cin>> K;
    kun = K%7;
    cout << "1 dan 7 gacha bo'lgan raqam kiriting: "; cin >> week;

    if(kun == 0){
            cout << "Siz kiritgan sana " << a[week - 1] << " kuniga to'ri keladi." << endl;
        }
    else if(kun == 1) {
            cout << "Siz kiritgan sana " << a[week - 1] << " kuniga tog'ri keladi" << endl;
        }
    else if(kun == 2) {
        cout << "Siz kiritgan sana " << a[week - 1] << " kuniga tog'ri keladi" << endl;
        }
    else if(kun == 3){
        cout << "Siz kiritgan sana " << a[week - 1] << " kuniga tog'ri keladi" << endl;
    }
    else if(kun == 4) {
        cout << "Siz kiritgan sana " << a[week - 1] << " kuniga tog'ri keladi" << endl;
    }
    else if(kun == 5) {
        cout << "Siz kiritgan sana " << a[week - 1] << " kuniga tog'ri keladi" << endl;
    }
    else if(kun == 6) {
        cout << "Siz kiritgan sana " << a[week - 1] << " kuniga tog'ri keladi" << endl;
    }




    return 0;
}
