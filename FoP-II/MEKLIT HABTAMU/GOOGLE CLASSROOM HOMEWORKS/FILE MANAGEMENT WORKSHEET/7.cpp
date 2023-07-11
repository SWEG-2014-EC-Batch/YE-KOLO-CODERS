#include <iostream>
#include <fstream>

using namespace std;


struct Tool 
{
    string name;
    int quantity;
    double cost;
};

int main() {
  
    Tool emptyTool = {"", 0, 0.0};
    ofstream outfile("hardware.dat", ios::binary);
    for (int i = 0; i < 100; i++)
    {
        outfile.write(reinterpret_cast<const char*>(&emptyTool), sizeof(emptyTool));
    }
    outfile.close();

    fstream file("hardware.dat", ios::in | ios::out | ios::binary);
    if (!file)
    {

        cerr << "Error: Could not open file." << endl;
        exit(1);
    }

    cout << "Enter data for each tool (tool ID, name, quantity, cost):" << endl;
    Tool tool;
    int id;
    while (true) 
    {
        cout << "Tool ID (0 to stop): ";
        cin >> id;
        if (id == 0) 
        {
            break;
        }
        if (id < 1||  id > 100) 
        {
            cout << "Error: Invalid tool ID." << endl;
            continue;
        }
        cout << "Name: ";
        cin.ignore();
        getline(cin, tool.name);
        cout << "Quantity: ";
        cin >> tool.quantity;
        cout << "Cost: ";
        cin >> tool.cost;
        file.seekp((id - 1) * sizeof(Tool));
        file.write(reinterpret_cast<const char*>(&tool), sizeof(tool));
    }

    // List all tools
    cout << endl << "Tool list:" << endl;
    file.seekg(0);
    for (int i = 1; i <= 100; i++) {
        file.read(reinterpret_cast<char*>(&tool), sizeof(tool));
        if (tool.name != "") {
            cout << i << ": " << tool.name << ", " << tool.quantity << ", " << tool.cost << endl;
        }
    }

    cout << "Enter tool ID to delete: ";
    cin >> id;
    file.seekp((id - 1) * sizeof(Tool));
    file.write(reinterpret_cast<const char*>(&emptyTool), sizeof(emptyTool));



    cout << "Enter tool ID to update: ";
    cin >> id;
    if (id < 1|| id > 100) {
        cout << "Error: Invalid tool ID." << endl;
        exit(1);
    }
    file.seekg((id - 1) * sizeof(Tool));
    file.read(reinterpret_cast<char*>(&tool), sizeof(tool));
    if (tool.name == "") {
        cout << "Error: Tool not found." << endl;
        exit(1);
    }
    cout << "Name (" << tool.name << "): ";
    cin.ignore();
    getline(cin, tool.name);
    cout << "Quantity (" << tool.quantity << "): ";
    cin >> tool.quantity;
    cout << "Cost (" << tool.cost << "): ";
    cin >> tool.cost;
    file.seekp((id - 1) * sizeof(Tool));
    file.write(reinterpret_cast<const char*>(&tool), sizeof(tool));

 
    cout <<"Tool list:" << endl;
    file.seekg(0);
    for (int i = 1; i <= 100; i++) {
        file.read(reinterpret_cast<char*>(&tool), sizeof(tool));
        if (tool.name != "") {
            cout << i << ": " << tool.name << ", " << tool.quantity << ", " << tool.cost << endl;
        }
    }

   
    file.close();

    return 0;
}
