#include <iostream>
#include <cmath>
using namespace std;
double numb1;
double numb2;
void FUN_SUM()
{
    
    cout << "Enter the tow number you want Sum \n ";
    cin >> numb1;
    cin >> numb2;
    double Result_Of_Sum;
    Result_Of_Sum = numb1+numb2;
    cout << "The result of Sum = " << Result_Of_Sum << endl;


}
void FUN_Subtraction()
{

 cout << "Enter the tow number you want Subtraction \n ";
 cin >> numb1;
 cin >> numb2;
 double Result_Of_Subtraction;
 Result_Of_Subtraction = numb1 - numb2;
 cout << "The result of Subtraction = " << Result_Of_Subtraction << endl;
}

void FUN_Multiplication()
{
    cout << "Enter the tow number you want Multiplication \n ";
    cin >> numb1;
    cin >> numb2;
    double Result_Of_Multiplication;
    Result_Of_Multiplication = numb1*numb2;
    cout << "The result of Multiplication = " << Result_Of_Multiplication << endl;

}

void FUN_Division()
{
    cout << "Enter the tow number you want Division  \n ";
    cin >> numb1;
    cin >> numb2;
    double Result_Of_Division ;
    Result_Of_Division = numb1/numb2;
    cout << "The result of Division = " << Result_Of_Division << endl;
}
void FUN_Power()
{
cout << "Enter the tow number you want Power \n";
cin >> numb1;
cin >> numb2;
double Result_Of_Power;
Result_Of_Power = pow(numb1,numb2);
cout << "The result of Power = " << Result_Of_Power << endl;
}
void FUN_Squareroot()
{
    cout << "Enter the tow number you want Square root \n";
    cin >> numb1;

    double Result_Of_Square_root;
    Result_Of_Square_root = sqrt(numb1);
    cout << "The result of Square root = " << Result_Of_Square_root << endl;
}
void FUN_Switch()
{
    int S;
    cout << "Enter the number you operator do you want do it  " << endl;
    cout << "1- Addition" << endl;
    cout << "2- Subtraction" << endl;
    cout << "3- Multiplication" << endl;
    cout << "4- Division" << endl;
    cout << "5- Power" << endl;
     cout << "6- Square Root" << endl;
      cout << "7- Exit" << endl;
    cin >> S;

    switch (S)
    {
    case 1:

        FUN_SUM();
        break;

    case 2:

        FUN_Subtraction();
        break;

    case 3:

        FUN_Multiplication();
        break;

    case 4:

        FUN_Division();
        break;

    case 5:

        FUN_Power();
        break;

    case 6:

        FUN_Squareroot();
        break;

    default :
        break;

    }
}


void FUN_Loob()
{
    char L;

    do
    {

        FUN_Switch();

 cout << "Do you want do another operator ( 'y' or 'n'?) \n";
        cin >> L;
if (L== 'y' || L=='Y' || L=='n' || L=='N')

    continue;
else
    cout << "you are enter roang later\n";

    }

    while (L == 'Y' || L == 'y' );


}


int main ()
{
    cout << "Welcome to my simple Calculator\n";

FUN_Loob();
cout << "\n Thank you for use my App :) :) " << endl;

return 0;
}
