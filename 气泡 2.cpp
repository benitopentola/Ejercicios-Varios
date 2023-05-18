#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> a(10);
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    // Particionamos el vector en impares y pares
    auto middle = stable_partition(a.begin(), a.end(), [](int x) {return x % 2 != 0; });

    // Ordenamos las partes de impares y pares por separado
    sort(a.begin(), middle);
    sort(middle, a.end());

    // Mostramos el resultado
    for (int i = 0; i < 10; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}
