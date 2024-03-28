# IP Address Information Retrieval

This program retrieves the public IP address of the local machine using `curl ifconfig.me` and then fetches detailed information about the IP address using `curl ipinfo.io/`. The information is displayed in the console.

## Prerequisites
- C++ compiler
- `curl` library

## How to Use
1. Clone the repository to your local machine.
2. Compile the C++ program using the following command:
   ```bash
   g++ main.cpp -o ipnet
   ```
3. Run the compiled executable:
   ```bash
   ./ipnet
   ```
4. The program will display the IP address information in the console.

## Explanation
- The program utilizes `popen()` to execute shell commands and fetch the output.
- It first fetches the public IP address using `curl ifconfig.me`.
- Then, it constructs another `curl` command to fetch detailed information about the IP address using `curl ipinfo.io/<ip_address>`.
- Finally, it displays the fetched information in the console.

## Note
- Ensure that your system has access to the internet to fetch the IP address information.

