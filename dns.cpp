#include <iostream>
#include <string>
#include <vector>
#include <resolv.h>

int main() {
    // Set the target domain and record type
    std::string target_domain = "thepythoncode.com";
    std::vector<std::string> record_types = {"A", "AAAA", "CNAME", "MX", "NS", "SOA", "TXT"};

    // Create a DNS resolver
    res_init();

    for (const std::string& record_type : record_types) {
        // Perform DNS lookup for the specified domain and record type
        hostent* host = gethostbyname2(target_domain.c_str(), AF_INET);
        if (host == nullptr) {
            continue;
        }

        // Print the answers
        std::cout << record_type << " records for " << target_domain << ":" << std::endl;
        for (int i = 0; host->h_addr_list[i] != nullptr; ++i) {
            std::cout << " " << inet_ntoa(*reinterpret_cast<in_addr*>(host->h_addr_list[i])) << std::endl;
        }
    }

    return 0;
}
