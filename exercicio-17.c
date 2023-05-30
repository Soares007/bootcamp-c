#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        float valor1, valor2, valor3;
        float media_ponderada;
        cin >> valor1 >> valor2 >> valor3;
        media_ponderada = (valor1 * 2 + valor2 * 3 + valor3 * 5) / 10;
        cout << fixed << setprecision(1) << media_ponderada << endl;
    }
    return 0;
}
