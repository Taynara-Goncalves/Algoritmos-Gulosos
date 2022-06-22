// prim.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

// Primm.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> Prim(vector<vector<int>>& v, int n) {
    vector<bool> seen(v.size(), false);
    vector<pair<int, int>> fringe;
    vector <int> result;

    if (n > v.size()) {
        cout << "valor de n superior ao tamanho do vetor";
    }
    result.push_back(n);
    while (!seen[n]) {
        int valor = INT_MAX;
        int pos;
        for (int j = 0; j < v[n].size(); j++) {
            if (v[n][j] != 0 && v[n][j] < valor && !seen[j]) {
                valor = v[n][j];
                pos = j;
            }
        }
        result.push_back(pos);
        seen[n] = true;
        n = pos;
    }

    result.pop_back();
    return result;
}

char trocaLetra(int n) {
    char letra = 'a' + n;
    return letra;
}

int main()
{
    vector<vector<int>> graph = {
        {0,3,0,0,6,5},
        {3,0,1,0,8,5},
        {0,1,0,6,0,4},
        {0,0,6,0,8,5},
        {6,0,0,8,0,2},
        {5,4,4,5,2,0} };

    vector<int> result = Prim(graph, 1);

    for (int i = 0; i < result.size(); i++) {
        cout << trocaLetra(result[i]) << " ";
    }
}



// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
