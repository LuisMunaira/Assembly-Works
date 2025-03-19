#include <iostream>
#include <cmath> 

using namespace std;

int main() {
 
    double a, b, c;

  
    cout << "Digite o coeficiente 'a': ";
    cin >> a;


    if (a == 0) {
        cout << "Não é uma equação quadrática, pois 'a' é igual a 0." << endl;
        return 0;
    }

    cout << "Digite o coeficiente 'b': ";
    cin >> b;
    cout << "Digite o coeficiente 'c': ";
    cin >> c;


    double delta = (b * b) - (4 * a * c);

    cout << "O discriminante (Delta) é: " << delta << endl;

    if (delta > 0) {
   
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "As raízes reais são: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {

        double x = -b / (2 * a);
        cout << "A equação possui uma única raiz real: " << endl;
        cout << "x = " << x << endl;
    } else {
    
        cout << "A equação não possui raízes reais." << endl;
    }

    return 0;
}

