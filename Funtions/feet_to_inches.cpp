//Prograam to convert distance in feet or inches using a call by reference method

#include <iostream>
using namespace std;
void convert(int &, char &, char);
int main()
{
    int distance;
    char choice, type = 'F';
    cout << "Enter distance in feets:" << endl;
    cin >> distance;
    cout << "You want your distance in feets/inches?(F/I):" << endl;
    cin >> choice;
    switch (choice)
    {
    case 'F':
        convert(distance, type, 'F');
        break;
    case 'I':
        convert(distance, type, 'I');
        break;
    default:
        cout << "Wrong choice entered:" << endl;
        exit(0);
    }

    cout << "Distance=" << distance << type << endl;
}
void convert(int &distance, char &type, char choice)
{
    if (choice == 'F')
        return;
    else if (choice == 'I')
    {
        distance = distance * 12;
        type = 'I';
    }
    return;
}

/*****************
Output:

Enter distance in feets:
15
You want your distance in feets/inches?(F/I):
I
Distance=180I

*****************/
