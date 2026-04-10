#include <iostream>

using namespace std;

int main()
{
    float saldo = 1000;
    int opcao = 0;
    float depositar, sacar;

    do
    {
        cout << "\nMENU" << endl;
        cout << "1 - Ver saldo" << endl;
        cout << "2 - Depositar" << endl;
        cout << "3 - Sacar" << endl;
        cout << "4 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Seu saldo: R$ " << saldo << endl;
            break;
        case 2:
            cout << "Qual valor deseja depositar? ";
            cin >> depositar;
            saldo += depositar;
            cout << "Deposito realizado!" << endl;
            break;
        case 3:
            cout << "Qual valor deseja sacar? ";
            cin >> sacar;
            if (sacar > saldo)
            {
                cout << "VOCÊ É DURO E NÃO TEM DINHEIRO!" << endl;
            }
            else
            {
                saldo -= sacar;
                cout << "Saque realizado!" << endl;
            }
            break;
        case 4:
            cout << "Saindo do sistema..." << endl;
            break;
        default:
            cout << "CODIGO ERRADO! Tente novamente." << endl;
            break;
        }

    } while (opcao != 4);

    return 0;
}