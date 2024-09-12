#include <iostream>

using namespace std;

int main () {
    int weight{0};
    int height{0};
    int BMI{0};

    cout << "Enter your weight: ";
    cin >> weight;

    cout << "Enter your height: ";
    cin >> height;

    BMI = weight / (height * height);

    cout << "Your BMI: " << BMI << endl;

    cout << "BMI VALUES" << endl;
    cout << "Underweight:\tless then 18.5" << endl;
    cout << "Normal:\t\tbetween 18.5 and 24.9" << endl;
    cout << "Overweight:\tbetween 25 and 29.9" << endl;
    cout << "Obese:\t\t30 or greater" << endl;

    return 0;
}