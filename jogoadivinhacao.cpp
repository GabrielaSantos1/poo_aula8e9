#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//cria a classe que vai ser usada para o joguinho
class JogoAdivinhacao{
    //fala q as variaveis abaixo são privadas, criando uma variavel para ser o número secreto e outra para ser o número de tentativas para que o jogador saiba depois quantas foram
    private:
        int numeroSecreto;
        int tentativas;
    //fala q as variaveis abaixo são publicas
    public:
        JogoAdivinhacao(){
            //srand cria um ponto de partida para os números aleatórios/secretos. Coloca o valor da variável numeroSecreto para um numero aleatório entre 1 e 100 e coloca o valor da variavel tentativas para 0
            srand(time(0))
            numeroSecreto = rand() % 100 + 1;
            tentativas = 0;
        }
    
    //cria a ação de jogar
    void jogar(){
        /*cria uma variavel inteira chamada palpite. 
        
        Ele faz:
        Pde para o jogador digitar um numero de 1 a 100 e coloca o valor do jogador como valor da vaiável palpite
        
        Coloca ++ depois da variável tentativas para aumentar ela de acordo com a quantidade de vezes que o jogador tenta, fazendo ser Tentativa = Tentativa + 1 assim sendo realmente o numero de vezes que o jogador tentou acertar
        
        Se o valor de palpite for maior que o número secreto ele fala que o Número Secreto é menor que o palpite
        Se o palpite for menor que o Numero Secreto fala para o user que o Número Secreto é menor que o palpite
        Se não for nenhum dos dois mostra para o user que ele acertou o número secreto e fala o valor de vezes que ele tentou com a variável tentativas.
        */
        int palpite;
        do {
            cout << "Digite um número entre 1 e 100: ";
            cin >> palpite;
            tentativas++;
            if (palpite > numeroSecreto){
                cout << "O número secreto é menor!" << endl << endl;
            }
            else if (palpite < numeroSecreto){
                cout << "O número secreto é maior!" << endl << endl;
            }
            else {
                cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas!" << endl;
            }
        
          //Enquanto o valor da variável palpite for diferente do número secreto para assim que ele acertar o jogo terminar
        } while (palpite != numeroSecreto);
    }
};
//cria o principal que vai rodar o jogo onde mostra o Jogo da classe JogoAdivinhação e começa a ação de jogá-lo.
int main(){
    JogoAdivinhacao jogo;
    jogo.jogar();
    return 0;
}

/* Este jogo de adivinhação pode ser util em jogos como por exemplo os que tem mecanica de aleatorização de drops ou outros itens a serem dados ao jogador, assim como jogos de aposta onde o jogador tem que tentar adivinhar a carta ou semelhantes. */


