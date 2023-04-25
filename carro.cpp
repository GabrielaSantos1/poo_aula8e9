#include <iostream>
using namespace std;
//cria a classe carro que vai servir de "molde" para o carro
class Carro
{
    //fala q as variaveis criadas abaixo são públicas
    public:
    
    //cria variavel de texto de cor e modelo
    string Cor;
    string Modelo;
    //cria variavel numérica para a velocidade max do carro
    float VelMax;
    //cria ação de buzinar para o carro
    void Buzinar();
    
};

//principal
int main ()
{
    //cria MeuCarro na variavel Carro
    Carro MeuCarro;
    
    //coloca valores nas variaveis do MeuCarro da classe Carro
    MeuCarro.Cor = "Branco";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.0f;
    
    //faz a ação de buzinar do carro e mostra os valores das variáveis
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.VelMax << endl;
    cout << MeuCarro.Modelo << endl;
}

//define qual a ação de buzinar, sendo um texto
void Carro::Buzinar(){
    cout << "Bi, Bi!!!" << endl;
}





