#include <iostream>
#include <string>
#include <vector>

struct TeamMember {
    std::string id;
    std::string fullName;
};

int main() {
    std::vector<TeamMember> team = {{"ETS1030/14", "Meklit Habtamu"}, {"ETS1029/14", "Meklit Melkamu"}, {"ETS1012/14", "Marsilas Wondimagegnew"}, {"ETS1020/14", "Medehanit Andualem"}, {"ETS1030/14", "Melat"}};

    std::cout << "Enter an ID: ";
    std::string id;
    std::cin >> id;

    bool found = false;
    std::string fullName;

    for (const TeamMember& member : team) {
        if (member.id == id) {
            found = true;
            fullName = member.fullName;
            break;
        }
    }

    if (found) {
        std::cout << "Member found: " << fullName << std::endl;
    } else {
        std::cout << "Member not found." << std::endl;
    }

    return 0;
}
