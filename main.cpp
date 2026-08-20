#include <cstdint>
#include <iostream>
#include <string>

bool IsValidBinary(const std::string& binary) {
  for (char bit : binary) {
    if (bit != '0' && bit != '1') {
      return false;
    }
  }

  return !binary.empty();
}

int32_t BinaryToDecimal(const std::string& binary) {
  int32_t decimal_number = 0;

  for (char bit : binary) {
    decimal_number = decimal_number * 2 + (bit - '0');
  }

  return decimal_number;
}

std::string DecimalToBinary(int32_t decimal_number) {
  if (decimal_number == 0) {
    return "0";
  }

  std::string binary;

  while (decimal_number > 0) {
    binary = std::to_string(decimal_number % 2) + binary;
    decimal_number /= 2;
  }

  return binary;
}

int main() {
  while (true) {
    std::cout << "What type of number system do you want to convert?\n";
    std::cout << "1. Binary to Decimal\n";
    std::cout << "2. Decimal to Binary\n";
    std::cout << "3. Exit\n";

    std::string choice;
    std::cout << "Choice: ";
    std::cin >> choice;

    if (choice == "1") {
      std::string binary_number;
      std::cout << "Enter a binary number: ";
      std::cin >> binary_number;

      if (!IsValidBinary(binary_number)) {
        std::cout << "Invalid binary number.\n";
        continue;
      }

      std::cout << "The converted number is "
                << BinaryToDecimal(binary_number) << "\n";

    } else if (choice == "2") {
      int32_t decimal_number;
      std::cout <<"Enter a decimal number: ";

      if (!(std::cin >> decimal_number)) {
        std::cout << "Invalid decimal number.\n";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
        continue;
      }

      std::cout << "The converted number is "
                << DecimalToBinary(decimal_number) << "\n";

    } else if (choice == "3") {
      std::cout << "Goodbye!\n";
      break;

    } else {
      std::cout << "Invalid option.\n";
    }
  }

  return 0;
}
