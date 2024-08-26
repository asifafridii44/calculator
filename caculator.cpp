// asifafridi-calculator
// asifafridis-calculator (Simple and personalizes the repository to you) advanced-calculator (Highlights the extended functionalities) multifunction-calculator (Indicates the multiple operations your program can perform) c++ calculator-with-discount (Specifies the programming language and the additional discount feature)

#include <iostream>
using namespace std;

void add() 
{
    int num1, num2;
    cout << "ENTER VALUE: ";
    cin >> num1;
    cout << "ENTER A NEXT VALUE: ";
    cin >> num2;
    cout << "ANS: " << num1 + num2 << endl;
}

void sub() 
{
    int num1, num2;
    cout << "ENTER VALUE: ";
    cin >> num1;
    cout << "ENTER A NEXT VALUE: ";
    cin >> num2;
    cout << "ANS: " << num1 - num2 << endl;
}

void mul() 
{
    int num1, num2;
    cout << "ENTER VALUE: ";
    cin >> num1;
    cout << "ENTER A NEXT VALUE: ";
    cin >> num2;
    cout << "ANS: " << num1 * num2 << endl;
}

void div() 
{
    int num1, num2;
    cout << "ENTER VALUE: ";
    cin >> num1;
    cout << "ENTER A NEXT VALUE: ";
    cin >> num2;

    if (num2 == 0) 
    {
        cout << "Error: Division by zero is not allowed." << endl;
        return;
    }

    cout << "ANS: " << num1 / num2 << endl;
}

void percentage() 
{
    int obtainedMarks, totalMarks;
    cout << "ENTER OBTAINED MARKS: ";
    cin >> obtainedMarks;
    cout << "ENTER TOTAL MARKS: ";
    cin >> totalMarks;
    cout << "ANS: " << (double)obtainedMarks / totalMarks * 100 << "%" << endl;
}

void discount() 
{
    double price, discountPercentage;
    cout << "ENTER ORIGINAL PRICE: ";
    cin >> price;
    cout << "ENTER DISCOUNT PERCENTAGE (e.g., enter 10 for 10%): ";
    cin >> discountPercentage;

    if (discountPercentage < 0 || discountPercentage > 100) 
    {
        cout << "Invalid discount percentage. Please enter a value between 0 and 100." << endl;
        return;
    }

    double discountAmount = price * discountPercentage / 100;
    double finalPrice = price - discountAmount;
    cout << "Original price: $" << price << endl;
    cout << "Discount amount: $" << discountAmount << endl;
    cout << "Final price: $" << finalPrice << endl;
}

int main() 
{
    int choice;
    cout << "**********SELECT ANY OPTION**********"<<endl;
    cout << "1: ADDITION"<<endl;
    cout << "2: SUBTRACTION"<<endl;
    cout << "3: MULTIPLICATION"<<endl;
    cout << "4: DIVISION"<<endl;
    cout << "5: PERCENTAGE"<<endl;
    cout << "6: DISCOUNT"<<endl;
    cout << "*************************************"<<endl;
    cin >> choice;

    switch (choice) 
    {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            div();
            break;
        case 5:
            percentage();
            break;
        case 6:
            discount();
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return main();
}
