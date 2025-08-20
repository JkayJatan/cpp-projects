#include <iostream>
using namespace std;

int main() {
    int mainChoice, subChoice;
    double value, result;
    bool running = true;

    while (running) {
        cout << "\n===== Unit Converter =====\n";
        cout << "1. Length\n";
        cout << "2. Weight\n";
        cout << "3. Temperature\n";
        cout << "4. Exit\n";
        cout << "Choose category: ";
        cin >> mainChoice;

        switch (mainChoice) {
            case 1: // Length conversions
                cout << "\n--- Length Conversions ---\n";
                cout << "1. Meters to Kilometers\n";
                cout << "2. Kilometers to Meters\n";
                cout << "3. Centimeters to Meters\n";
                cout << "4. Meters to Centimeters\n";
                cout << "5. Inches to Centimeters\n";
                cout << "6. Centimeters to Inches\n";
                cout << "Choose: ";
                cin >> subChoice;
                cout << "Enter value: ";
                cin >> value;

                switch (subChoice) {
                    case 1: result = value / 1000; cout << value << " m = " << result << " km\n"; break;
                    case 2: result = value * 1000; cout << value << " km = " << result << " m\n"; break;
                    case 3: result = value / 100; cout << value << " cm = " << result << " m\n"; break;
                    case 4: result = value * 100; cout << value << " m = " << result << " cm\n"; break;
                    case 5: result = value * 2.54; cout << value << " in = " << result << " cm\n"; break;
                    case 6: result = value / 2.54; cout << value << " cm = " << result << " in\n"; break;
                    default: cout << "Invalid choice!\n";
                }
                break;

            case 2: // Weight conversions
                cout << "\n--- Weight Conversions ---\n";
                cout << "1. Kilograms to Grams\n";
                cout << "2. Grams to Kilograms\n";
                cout << "3. Kilograms to Pounds\n";
                cout << "4. Pounds to Kilograms\n";
                cout << "5. Kilograms to Ounces\n";
                cout << "6. Ounces to Kilograms\n";
                cout << "Choose: ";
                cin >> subChoice;
                cout << "Enter value: ";
                cin >> value;

                switch (subChoice) {
                    case 1: result = value * 1000; cout << value << " kg = " << result << " g\n"; break;
                    case 2: result = value / 1000; cout << value << " g = " << result << " kg\n"; break;
                    case 3: result = value * 2.20462; cout << value << " kg = " << result << " lb\n"; break;
                    case 4: result = value / 2.20462; cout << value << " lb = " << result << " kg\n"; break;
                    case 5: result = value * 35.274; cout << value << " kg = " << result << " oz\n"; break;
                    case 6: result = value / 35.274; cout << value << " oz = " << result << " kg\n"; break;
                    default: cout << "Invalid choice!\n";
                }
                break;

            case 3: // Temperature conversions
                cout << "\n--- Temperature Conversions ---\n";
                cout << "1. Celsius to Fahrenheit\n";
                cout << "2. Fahrenheit to Celsius\n";
                cout << "3. Celsius to Kelvin\n";
                cout << "4. Kelvin to Celsius\n";
                cout << "Choose: ";
                cin >> subChoice;
                cout << "Enter value: ";
                cin >> value;

                switch (subChoice) {
                    case 1: result = (value * 9/5) + 32; cout << value << " C = " << result << " F\n"; break;
                    case 2: result = (value - 32) * 5/9; cout << value << " F = " << result << " C\n"; break;
                    case 3: result = value + 273.15; cout << value << " C = " << result << " K\n"; break;
                    case 4: result = value - 273.15; cout << value << " K = " << result << " C\n"; break;
                    default: cout << "Invalid choice!\n";
                }
                break;

            case 4:
                running = false;
                cout << "Exiting Unit Converter. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}
