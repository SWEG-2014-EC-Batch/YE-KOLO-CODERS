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
