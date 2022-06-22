// Dijkstra.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <vector>
#include <queue>

using namespace std;



vector<pair<int, int>> Dijkstra(vector<vector<int>>& v) {
    typedef pair<int, pair<int, int>> p;
    priority_queue<p, vector<p>, greater<p> > fila;


    vector<pair<int, int>> result(v.size(), make_pair(INT_MAX, -1));


    //inclui o primeiro elemento na fila de prioridade
    fila.push(make_pair(0, make_pair(0, 0)));
    //result.at(0).first = 0;
    //result.at(0).second = 0;


    //percorre o p e vai encontrando os vértices    

    for (int i = 0; i < v.size(); i++) {

        //remove o elemento de menor prioridade e inclui no resultado
        while (!fila.empty()) {
            if (fila.top().first < result[fila.top().second.second].first) {
                pair<int, int> aux = make_pair(fila.top().first, fila.top().second.first);

                result[fila.top().second.second] = aux;
                //cout << "-" << result[fila.top().second.second].first << " " << result[fila.top().second.second].second << endl;
                fila.pop();
            }
            else {
                //cout << "-" << result[fila.top().second.second].first << " " << result[fila.top().second.second].second << endl;
                fila.pop();
            }
        }

        //imprimindo os resultados

        cout << endl;
        for (int l = 0; l < result.size(); l++) {
            cout << result[l].first << " " << result[l].second << endl;
        }
        cout << endl;


        //incluir novos vertices        

        for (int j = i; j < v.size(); j++) {
            if (v[i][j] != 0) {
                //incluir os valores anterior da distancia    

                if (i == 0) {
                    fila.push(make_pair(v[i][j], make_pair(i, j)));
                }
                else {
                    fila.push(make_pair(v[i][j] + result[i].first, make_pair(i, j)));
                    //cout << v[i][j] + result[i].first << " " << i <<" "<< j << endl;
                }


            }
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> graph = {
        {0,3,0,7,0},
        {3,0,4,2,0},
        {0,4,0,5,6},
        {0,2,5,0,4},
        {0,0,6,4,0} };

    vector<pair<int, int>> result = Dijkstra(graph);
    cout << "resultado:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << result[i].first << " " << result[i].second << endl;
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
