#include <iostream>
#include <fstream>
#include <stdexcept>

class FileWasNotOpenedException : public std::exception {
public:
    const char* what() const noexcept override {
        return "File was not opened";
    }
};

void readFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw FileWasNotOpenedException();
    }
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
}

int main() {
    std::string filename;
    std::cout << "Enter filename: ";
    std::cin >> filename;
    try {
        readFile(filename);
    }
    catch (const FileWasNotOpenedException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}
