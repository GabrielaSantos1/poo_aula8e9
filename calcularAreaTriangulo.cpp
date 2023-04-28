#include <iostream>
#include <math.h>
using namespace std;

double calcularAreaTriangulo(double a, double b, double c){
    double p = (a + b + c) / 2;
    return sqrt(p*(p - a) * (p - b) * (p - c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    cout << "Digite as medidas dos lados do triângulo X (separados por espaço): ";
    cin >> xa >> xb >> xc;
    
    cout << "Digite as medidas dos lados do triângulo Y (separados por espaço): ";
    cin >> ya >> yb >> yc;
    
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
  
    cout << "Área do triângulo X: " << areaX << endl;
    cout << "Área do triângulo Y: " << areaY << endl;
    
    if (areaX > areaY){
        cout << "O triângulo X tem a maior área." << endl;
    } else if(areaY > areaX){
        cout << "O triângulo Y tem a maior área." << endl;
    } else{
        cout << "Os triângulos tem a mesma área." << endl;
    }
    
    return 0;
}


