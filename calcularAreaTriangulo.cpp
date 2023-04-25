// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;

//cria uma ação tipo double onde cria as variaveis tipo double a b e c. Depois cria uma tipo double chamada p e coloca seu valor para ser a soma do abc dividido por 2. Então retorna a raiz quadrada de = p - a depois p - b depois p - c. Daí faz p vezes essas subtrações
double calcularAreaTriangulo(double a, double b, double c){
    double p = (a + b + c) / 2;
    return sqrt(p*(p - a) * (p - b) * (p - c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //fala para o user digitar os valores e os coloca como valores das variaveis xa xb e xc respectivamente nessa ordem onde serão as medidas dos lados do triangulo X
    cout << "Digite as medidas dos lados do triângulo X (separados por espaço): ";
    cin >> xa >> xb >> xc;
    
    //fala para o user digitar os valores e os coloca como valores das variaveis ya yb e yc respectivamente nessa ordem onde serão as medidas dos lados do triangulo Y
    cout << "Digite as medidas dos lados do triângulo Y (separados por espaço): ";
    cin >> ya >> yb >> yc;
    
    //cria duas variaveis tipo double e coloca seus valores. areaX é igual ao calculo feito com as variaveis x. Já a areaY é igual ao calculo feito com as variaveis y.
    double areaX = calcularAreaTriangulo(xa, xb, xc);
    double areaY = calcularAreaTriangulo(ya, yb, yc);
    
    //fala para o user os valores finais das variaveis areaX e areaY
    cout << "Área do triângulo X: " << areaX << endl;
    cout << "Área do triângulo Y: " << areaY << endl;
    
    //Se a areaX for maior que areaY fala que o tri. X tem a maior área. Se for ao contrário fala que o tri. Y tem a maior área. Se não fala que os dois tem a mesma área
    if (areaX > areaY){
        cout << "O triângulo X tem a maior área." << endl;
    } else if(areaY > areaX){
        cout << "O triângulo Y tem a maior área." << endl;
    } else{
        cout << "Os triângulos tem a mesma área." << endl;
    }
    
    return 0;
}


