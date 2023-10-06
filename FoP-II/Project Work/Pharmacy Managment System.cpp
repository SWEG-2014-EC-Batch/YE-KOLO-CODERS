#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Date {
    int day, month, year;
};

template<typename T, typename C>
struct Drug {
    T code;
    double sellingPrice;
    double buyingPrice;
 
    C name;
    
    Date proDate;
    Date endDate;
};

template<typename T>
class Pharmacy {
private:
    vector<Drug<T, string>> drugs;

public:
    void recordInfo();
    void printInfo();
    void checkAvailability();
    void drugDisposal();
    void checkExpiration();
    void calcSales();
    void calcProfit();
    void statReport();
    void exitProgram();
};

int main() {
    Pharmacy<int> medicine;

    int menu = 0;

    cout << "\t\t\t    Pharmacy Management System \n";
    cout << "\t\t==================================================\n\n";
    cout << "\t\t||\t1. Record new Medicine\t\t ||\n";
    cout << "\t\t||\t2. Print Stored Data\t\t ||\n";
    cout << "\t\t||\t3. Check availability of Medicine\t ||\n";
    cout << "\t\t||\t4. Delete stored Medicine\t ||\n";
    cout << "\t\t||\t5. Check Expiration \t\t ||\n";
    cout << "\t\t||\t6. Calculate Daily total Sales\t ||\n";
    cout << "\t\t||\t7. Calculate Profit \t\t ||\n";
    cout << "\t\t||\t8. Status Report \t\t ||\n";
    cout << "\t\t||\t9. Exit\t\t\t\t ||\n"
         while (menu != 9) {
        cout << "Enter choice (from menu): ";
        cin >> menu;

        switch (menu) {
            case 1:
                medicine.recordInfo();
                break;
            case 2:
                medicine.printInfo();
                break;
            case 3:
                medicine.checkAvailability();
                break;
            case 4:
                medicine.drugDisposal();
                break;
            case 5:
                medicine.checkExpiration();
                break;
            case 6:
                medicine.calcSales();
                break;
            case 7:
                medicine.calcProfit();
                break;
            case 8:
                medicine.statReport();
                break;
            case 9:
                medicine.exitProgram();
                break;
            default:
                cout << "You have entered an invalid input." << endl;
                break;
        }
    }

    cout << "Thank you!" << endl;
    return 0;
}
template<typename T>
void Pharmacy<T>::recordInfo() {
    ofstream outFile("PHARMACY.txt", ios::out);

    if (!outFile) {
        cout << "UNABLE TO OPEN FILE!" << endl;
        return;
    }

    char choice = 'Y';

    while (choice == 'Y' || choice == 'y') {
        Drug<T, string> drug;

        cout << "-----DRUG-RECORD-----" << endl;

        cout << "CODE: ";
        cin >> drug.code;
        outFile << "Code: " << drug.code << endl;

        cout << "NAME: ";
        cin.ignore();
        cin >> drug.name;
        outFile << "Name: " << drug.name << endl;

        cout << "BUYING PRICE: ";
        cin >> drug.buyingPrice;
        outFile << "Buying Price: " << drug.buyingPrice << endl;

        cout << "SELLING PRICE: ";
        cin >> drug.sellingPrice;
        outFile << "Selling Price: " << drug.sellingPrice << endl;

        cout << "PRODUCTION DATE (DD/MM/YY): ";
        cin >> drug.proDate.day >> drug.proDate.month >> drug.proDate.year;
        outFile << "Production Date: " << drug.proDate.day << "/" << drug.proDate.month << "/" << drug.proDate.year << endl;

        cout << "EXPIRATION DATE (DD/MM/YY): ";
        cin >> drug.endDate.day >> drug.endDate.month >> drug.endDate.year;
        outFile << "End Date: " << drug.endDate.day << "/" << drug.endDate.month << "/" << drug.endDate.year << endl;

        outFile << "------------------------" << endl;

        drugs.push_back(drug);

        cout << "Would you like to add another drug? (Y/N): ";
        cin >> choice;
    }

    outFile.close();
}
template<typename T>
void Pharmacy<T>::printInfo() 
{
    string line;
    ifstream inFile("PHARMACY.txt", ios :: in);

    if (!inFile)
    {
        cout << "Unable to open file!" << endl;
        return;
    }

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

template<typename T>
void Pharmacy<T>::checkAvailability() 
{
    T code;

    cout << "Enter drug code: ";
    cin >> code;

    bool found= false;

    for (const auto& drug : drugs) 
    {
        if (drug.code == code) 
        {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "The drug is available." << endl;
    } else {
        cout << "The drug is not available." << endl;
    }
}

template<typename T>
void Pharmacy<T>::drugDisposal() 
{
    T code;

    cout << "Enter drug code to delete: ";
    cin >> code;

    bool found = false;

    for (auto i = drugs.begin(); i != drugs.end(); ++i) 
    {
        if (i->code == code) {
            found = true;
            drugs.erase(i);
            break;
        }
    }

    if (found) {
        cout << "Drug with code " << code << " has been deleted." << endl;
    } else {
        cout << "Drug with code " << code << " was not found." << endl;
    }
}
template<typename T>
void Pharmacy<T>::calcProfit() 

{
    double totalCost = 0.0;
    double totalSales = 0.0;

    for (const auto& drug : drugs) {
        totalCost += drug.buyingPrice;
        totalSales += drug.sellingPrice;
    }

    double profit = totalSales - totalCost;

    cout << "Total profit: " << profit << endl;
}

template<typename T>
void Pharmacy<T>::calcSales() {
    double totalSales = 0.0;

    for (const auto& drug : drugs) {
        totalSales += drug.sellingPrice;
    }

    cout << "Total sales: " << totalSales << endl;
}
template<typename T>
void Pharmacy<T>::statReport() 
{
    calcSales();
    calcProfit();
}

template<typename T>
void Pharmacy<T>::exitProgram() {
    cout << "Exiting the program..." << endl;
    
}
