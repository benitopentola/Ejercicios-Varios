#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int size;
    cout << "请输入一个1到1000之间的数字：";
    cin >> size;

    if (size < 1 || size > 1000) {
        cout << "数字必须在1到1000的范围内。" << endl;
        return 0;
    }

    int array[size];

    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000 + 1;
    }

    cout << "生成的随机数字：" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "排序后的数字：" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << endl;
    }

    cout << "按奇偶分类的结果：" << endl;
    cout << "奇数：" << endl;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 != 0) {
            cout << array[i] << endl;
        }
    }
    cout << "偶数：" << endl;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            cout << array[i] << endl;
        }
    }

    return 0;
}
