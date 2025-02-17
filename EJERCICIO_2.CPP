#include <iostream>

using namespace std;

int main(){
    int guitarra = 200;
    int valor_del_descuento = guitarra * 30  /100;
    int guitarra_con_descuento = guitarra - valor_del_descuento;

    cout << "resultado " << guitarra_con_descuento << endl;

    return 0;
}