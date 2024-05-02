#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char** argv) {

    //Um robo que vai informar noticias dos ultimos dias/semana/mes, dando essas opcoes. Ideias tais como 
    //preço do bitcoin, maxima do btc, etf´s bitcoin, criptomoeda, halving, conversor de btc,
    // preço do ativo, 
    // terminal tech ou terminal coin/ web 3.0/ 
    // Para essa opcao, informe seu nome, idade, e numero da carteira.
    // procurar caractere/asteristico em forma de moeda
    
    int opc, cod;
    string nome;
    
    cout << "***********************************************************************************" << endl;
    cout << "************************SEJA BEM VINDO(A) AO TERMINAL TECH*************************" << endl;
    cout << "***********************************************************************************" << endl;
    cout << "Meu nome eh Jota, sou um robo desenvolvido pelo Instituto Federal de Voturuporanga." << endl;
    cout << "Te informarei de todas as duvidas cruciais, por favor preciso saber seu nome: ";
    getline(cin, nome);
  
    cout << "Muito bom, " << nome << ", informe o que deseja: " << endl;
    
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "103 para Saber qual foi a alta maxima do bitcoin                        |" << endl;
    cout << "113 para Descobrir quem foi que criou o bitcoin                         |" << endl;
    cout << "123 para Saber quantos R$ teria se tivesse comprado R$50 em BTC em 2009 |" << endl;
    cout << "133 para O que eh bitcoin?                                              |" << endl;
    cout << "143 para Como comprar BTC                                               |" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cin >> opc;
    cout << "===" << endl;
    
    switch(opc)
    {
        case 103:
        cout << "A maior alta do Bitcoin em dolar foi registrada em 14 de marco de 2024, atingindo US$ 73.755" << endl;
        break;
        
        case 113:
        cout << "Satoshi Nakamoto. O pseudonimo pertence a uma pessoa ou um grupo" << endl;
        cout << "que nunca quis ser identificado. Desde a criacaoo da moeda, em 2008" << endl;
        cout << "o verdadeiro autor nunca foi encontrado." << endl;
        break;
        
        case 123:
        cout << "Se voce tivesse investido R$ 50, equivalente a meio tanque " << endl;
        cout << "de gasolina de um compacto popular, teria comprado cerca de 27 mil bitcoin." << endl;
        cout << "" << endl;
        cout << "Supondo que voce nunca mais comprasse novamente e nao mexesse mais nessa" << endl;
        cout << "carteira virtual, apos estes anos, somente a valorizacao daqueles primeiros " << endl;
        cout << "cinquenta reais te deixaria bilionario hoje!" << endl;
        cout << "" << endl;
        cout << "Isso significa que voce teria cerca de R$ 6 bilhoes e 914 milhoes." << endl;
        break;
        
        case 133:
        cout << "Desenvolvido com o objetivo de romper o monopolio dos sistemas financeiros" << endl;
        cout << "tradicionais, eh como fosse uma especie de dinheiro da internet, mas que nao" << endl;
        cout << "apresenta um sistema centralizado de controle sobre as suas trocas comerciais," << endl;
        cout << "tais como um banco central, ao contrario do que acontece com as moedas do mundo real." << endl;
        break;
        
        case 143:
            
            int idade;
            cout << "Quantos anos voce tem? " << endl;
            cin >> idade;
            
            if (idade >= 18)
            {
               cout << "Para aprender a comprar, Acesse: https://shre.ink/8SP3" << endl; 
            }
            else
            {
                cout << "Voce eh menor de idade!!!" << endl;
            }
            break;
    }
            
    return 0;
}

