#include <iostream>
using namespace std;

void mostrarVetor(int v[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void insertionSort(int v[], int tamanho) {

    for (int i = 1; i < tamanho; i++) {

        int chave = v[i];
        int j = i - 1;

        while (j >= 0 && v[j] > chave) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = chave;
    }
}

int main() {

    int v[] = {49, 38, 58, 87, 34, 93, 26, 13};
    int tamanho = sizeof(v) / sizeof(v[0]);

    cout << "Vetor antes da ordenacao:" << endl;
    mostrarVetor(v, tamanho);

    insertionSort(v, tamanho);

    cout << "\nVetor apos a ordenacao:" << endl;
    mostrarVetor(v, tamanho);

    return 0;
}