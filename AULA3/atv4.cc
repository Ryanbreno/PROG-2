#include <iostream>

using namespace std;

int main(){
    const int anos = 2;
    const int trimestres = 4;
    double despesas[anos][trimestres];
    double totalgeral;

    for (int i = 0; i < 2; i++){
        cout << "ANO: " << i + 1 << endl;
        
        for (int j = 0; j < 4; j++){
            cout << "TRIMESTRE: " << j + 1 << endl;
            cin >> despesas[i][j];
            totalgeral += despesas[i][j];
        }
    }

    cout << "Despesas Gerais" << endl;

    for(int i =0; i < anos; i++){
        cout << i+1 << "/t" << endl;
        for(int j = 0; j < trimestres; j++){
            cout <<  despesas[i][j] << "\t\n";
        }
    }
    cout << "total dos gastos: " << totalgeral << endl;
}