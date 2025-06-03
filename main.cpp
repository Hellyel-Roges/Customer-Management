// Sendo feito algumas alterações
#include <iostream>
#include <locale>
#include <vector>
#include <windows.h>
#include <time.h>

using namespace std;

int validacao_usuario(string, string);


int main() {
    string login, senha;
    int valid = 0;
    setlocale(LC_ALL, "portuguese");

    vector<string> usuarios;
    usuarios.push_back("Aline de oliveira");
    usuarios.push_back("Marcos Vinicios");
    usuarios.push_back("Oliver tree");
    usuarios.push_back("Rubens macedo");
    usuarios.push_back("Zacarias lucio");

    do {
        cout << "____________________SISTEMA__INICIADO____________________\n" << endl;
        cout << "Login: ";
        cin >> login;
        cout << "Senha: ";
        cin >> senha;

        valid = validacao_usuario(login,senha);
        if (valid > 0){
            system("cls");
            cout << "BEM-VINDO " << login << endl << endl << endl;
        }else {
            cout << "Error. Usuário Inválido." << endl;
            system("cls");
        }

    }while(valid == 0);

    if (valid == 1){
        cout << "CADASTRAR USUARIOS >> Digite[2]" << endl;
        cout << "VISUALIZAR USUARIOS >> Digite[1]" << endl;
        cout << "ENCERRAR O PROGRAMA >> Digite[0]" << endl;




    }else if (valid == 2){
        cout << "VISUALIZAR USUARIOS >> Digite[1]" << endl;
        cout << "ENCERRAR O PROGRAMA >> Digite[0]" << endl;




    }else {
        cout << "____________________SISTEMA__ENCERRADO____________________\n" << endl;
    }


    return 0;
}

int validacao_usuario(string login, string senha) {
        if (login == "admin" && senha == "12345"){
            return 1;
        }else if (login == "user" && senha == "12345"){
            return 2;
        }else {
            return 0;
        }
}
