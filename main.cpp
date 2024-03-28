#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    std::string command = "curl ifconfig.me";
    FILE* fp = popen(command.c_str(), "r");
    if (!fp) {
        std::cerr << "Error occurred while executing command!" << std::endl;
        return 1;
    }
    char buffer[1024];
    std::string ip_address = "";
    while (fgets(buffer, sizeof(buffer), fp)) {
        ip_address += buffer;
    }
    pclose(fp);
    command = "curl ipinfo.io/" + ip_address;
    std::cout << "IP Address Information:" << std::endl;
    system(command.c_str());

    return 0;
}
