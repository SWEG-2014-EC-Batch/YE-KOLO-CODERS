#include <iostream>
#include <string>
#include <vector>

struct TeamMember {
    std::string id;
    std::string fullName;
};

int main() {
    std::vector<TeamMember> team = {{"ETS0839/14", "Kaku Temesgen"}, {"ETS0814/14", "Hiwot Tadesse"}, {"ETS0955/14", "Kumneger Bekele"}, {"ETS1020/14", "Medehanit Andualem"}, {"ETS1061/14", "Michael"}};

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
