#include <iostream>

using namespace std;

int main(){
double valor_1 = 60;

char signo = '*';

double valor_2 = 10;

if (signo == '+'){
    cout <<"RESULTADO "<< valor_1 + valor_2 << endl;
}else if (signo == '-'){
    cout <<"RESULTADO "<< valor_1 - valor_2 << endl;    
}else if (signo == '*'){
    cout << "RESULTADO "<< valor_1 * valor_2 << endl;
}else if (signo == '/'){
    if (valor_2 == 0){
        cout << "NO SE PUEDE DIVIDIR ENTRE CERO" << endl;
    }else{
        cout << "RESULTADO " << valor_1 / valor_2 << endl;
    }
}else if (signo == '%'){
    cout << "RESULTADO "<< (valor_1 * valor_2 / 100) << endl;
}else{
    cout << "introduzca un signo valido" << endl;
}
return 0;
}