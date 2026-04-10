#include <iostream>

using namespace std;

int main()
{
    int idade, opcao;
    cout << "digite sua idade: " << endl;
    cin >> idade;

    if (idade < 16)
    {
        cout << "acesso negado! Você é de menor";
    }
    else if (idade == 16 || idade == 17)
    {
        cout << "Voce precisa de autorização de um responsavel! ";
    }
    else if (idade >= 18)
    {

        while (opcao < 1 || opcao > 3)
        cout << "Bem vindo!";
        cout << "Qual nivel deseja acessar? " << endl;
        cout << "1 - Basico\n"
             << endl;
        cout << "2 - intermediário\n"
             << endl;
        cout << "3 - total\n"
             << endl;
        cin >> opcao;
        {
            switch (opcao)
            {
            case 1:
                cout << "voce acessou o nivel basico! ";
                break;

            case (2):
                cout << "voce acessou o nivel intermediario! ";
                break;
            case (3):
                cout << "voce acessou o nivel total! ";
                break;

            default:
                cout << "ERRO";
            }
        }
    }
    return 0;
}