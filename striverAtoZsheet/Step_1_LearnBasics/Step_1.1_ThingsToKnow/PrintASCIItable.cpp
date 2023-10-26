// here's a simple C++ code to print the ASCII table:

#include <iostream>

int main() {
    // Print the ASCII table
    // for (int i = 32; i < 128; i++) {
    //     std::cout << "ASCII value: " << i << "  Character: " << static_cast<char>(i) << std::endl;
    // }
      std::cout<<std::endl;
    std::cout << "   ASCII value:        Character: " <<  std::endl;
    std::cout<<std::endl;
    for (int i = 32; i < 128; i++) {
        std::cout << "       " << i << "        ==>        " << static_cast<char>(i) << std::endl;
    }
    return 0;
}

// This code will print the ASCII values and their corresponding characters from decimal value 32 to 127 in a straightforward format.









// Here's an optimized C++ code to print the ASCII table:

// #include <iostream>
// #include <iomanip>

// int main() {
//     // Set the width for each column in the table
//     const int columnWidth = 5;

//     // Print the header row
//     std::cout << std::left << std::setw(columnWidth) << "Dec" << std::setw(columnWidth) << "Char";
//     std::cout << std::setw(columnWidth) << "Dec" << std::setw(columnWidth) << "Char";
//     std::cout << std::setw(columnWidth) << "Dec" << std::setw(columnWidth) << "Char";
//     std::cout << std::setw(columnWidth) << "Dec" << std::setw(columnWidth) << "Char" << std::endl;

//     // Print the ASCII table
//     for (int i = 32; i < 127; i++) {
//         if ((i - 32) % 4 == 0 && i != 32) {
//             std::cout << std::endl;
//         }
//         std::cout << std::left << std::setw(columnWidth) << i << std::setw(columnWidth) << static_cast<char>(i);
//     }

//     std::cout << std::endl;
//     return 0;
// }

// This code uses the `std::setw` function to set a fixed width for each column, 
// making sure the table is neatly formatted. 
// It prints the ASCII table from decimal value 32 (space) to 126 (tilde) and organizes it into four columns. 
// When a new row starts, it inserts a newline to maintain the structure of the table.