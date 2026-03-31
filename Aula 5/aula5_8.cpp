//aula 5 exercicio 8
#include <iostream>
#include <string>

using namespace std;

int main() {
    int tipoVenda, subOpcao;
    float valor;

    cout << "--- SISTEMA APOLLO (LINX) - FORD FANCAR ---" << endl;
    cout << "1 - Venda de Balcao (CPF/CNPJ)\n2 - Requisicao de Oficina (OS)\n";
    cout << "Selecione a origem da venda: ";
    cin >> tipoVenda;

    switch (tipoVenda) {
        case 1: // Venda de Balcão
            cout << "\n--- VENDA BALCAO ---\n";
            cout << "1 - Consultar Estoque (Part Number)\n2 - Finalizar Orcamento\n";
            cin >> subOpcao;

            // Case Aninhado para Balcão
            switch (subOpcao) {
                case 1:
                    cout << "Informe o Part Number: ";
                    // Simulação de busca no banco de dados Apollo
                    cout << "Peca localizada: Filtro de Oleo Motorcraft. Saldo: 15 un." << endl;
                    break;
                case 2:
                    cout << "Gerando NF-e... Venda finalizada com sucesso!" << endl;
                    break;
                default:
                    cout << "Opcao de balcao invalida." << endl;
            }
            break;

        case 2: // Requisição de Oficina (Ordem de Serviço)
            cout << "\n--- REQUISICAO OS ---\n";
            cout << "1 - Baixar Itens para Mecanico\n2 - Devolucao de Peca ao Estoque\n";
            cin >> subOpcao;

            // Case Aninhado para Oficina
            switch (subOpcao) {
                case 1:
                    cout << "Digite o numero da OS: ";
                    cout << "Itens transferidos para o box do mecanico." << endl;
                    break;
                case 2:
                    cout << "Motivo da devolucao: 1-Erro Catalogo / 2-Sobras\n";
                    int motivo;
                    cin >> motivo;
                    if (motivo == 1) {
                        cout << "Alerta: Reportar erro de catalogo ao Gerente de Pecas." << endl;
                    }
                    cout << "Item retornado ao saldo do estoque." << endl;
                    break;
                default:
                    cout << "Opcao de oficina invalida." << endl;
            }
            break;

        default:
            cout << "Erro: Tipo de venda nao reconhecido no sistema." << endl;
    }

    cout << "------------------------------------------" << endl;
    return 0;
}