#include <iostream>
using namespace std;

struct Person
{
    char name[100];
    char gender;
    double weight;
    double height;
};

int main()
{

    int maximum;

    cout << "ENTER NUMBER OF PEOPLE(maximum 10):";
    cin >> maximum;

    while(maximum>10)
    {
    cout << "ENTER NUMBER OF PEOPLE(maximum 10):";
    cin >> maximum;
    }

    Person personalInformation[maximum];
    double BMI[maximum];
    for (int i = 0; i < maximum; i++)
    {

        cout << "Enter Name:";
        cin.ignore();
        cin.getline(personalInformation[i].name, 100);

        cout << "Enter Gender:";
        cin >> personalInformation[i].gender;

        cout << "Enter Weight:";
        cin >> personalInformation[i].weight;

        cout << "Enter Height:";
        cin >> personalInformation[i].height;

        BMI[i] = (personalInformation[i].weight) / (personalInformation[i].height * personalInformation[i].height);
    }

    for (int i = 0; i < maximum; i++)
    {
        cout <<"Name:" << personalInformation[i].name<<endl;
        cout<<"Gender:"<<personalInformation[i].gender<<endl;
        cout<<"Height:"<<personalInformation[i].height<<endl;
        cout<<"Weight:"<<personalInformation[i].weight<<endl;
        cout<<"BMI:"<<BMI[i]<<endl;
    }
}
