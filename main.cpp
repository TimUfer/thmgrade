#include <fstream>
#include <iostream>
#include <sstream>
struct module{
    std::string name;
    short grade;
    short crp;
    char halfWeight;
};

double calcGrade(const std::vector<module> &modules) {
    double upper = 0;
    double lower = 0;
    for (const auto &module : modules) {
        if(module.halfWeight == 'n') {
            upper += module.grade * module.crp;
            lower += module.crp;
        } else if(module.halfWeight == 'y') {
            upper += module.grade * (module.crp/2);
            lower += module.crp/2;
        } else {
            std::cerr << "Invalid half weight '" << module.halfWeight << "'\n";
        }
    }
    return upper / lower;
}

int main(int argc, char* argv[])
{
    std::string path;
    if(argc == 1) {
        std::cout << "Bitte Gebe deinen Pfad zu deiner Noten Datein an: \n";
        std::cin >> path;
    } else if(argc == 2) {
        path = argv[1];
    }


    std::ifstream input(path); // Path überprüfen
    if (!input.is_open()) {
        std::cerr << "Fehler: Datei konnte nicht geöffnet werden: " << path << "\n";
        return 1;
    }
    std::string line;
    std::vector<struct module> modules;


    while(getline(input, line)) {
        std::istringstream iss(line);
        module m;
        iss >> m.name >> m.grade >> m.crp >> m.halfWeight;
        modules.push_back(m);
    }
    std::cout << "Notendurchschnitt: " << calcGrade(modules) << '\n';

    return 0;
}
