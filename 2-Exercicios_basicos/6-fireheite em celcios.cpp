#include <iostream>
using namespace std;

float temp_celsius(float c) {
    return (9 * c + 160) / 5;
}

int main() {
    system("color 02");
    float c;
    cout << "Apresente a temperatura em Celsius: ";
    cin >> c;

    float f = temp_celsius(c);
    cout << "A temperatura em Fahrenheit é: " << f << endl;

    return 0;
}
