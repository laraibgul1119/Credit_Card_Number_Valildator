# Credit_Card_Number_Valildator
# Luhn's Algorithm Implementation 💳

This repository contains a C++ implementation of Luhn's Algorithm. This algorithm is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers, IMEI numbers, and Canadian Social Insurance Numbers. 🔢

## Code Functionality 💻

The provided C++ code defines an `ATMCard` struct that includes functions to:

- `getNoOfDigits`: Calculates the number of digits in a given number. 📏
- `getFirstNDigits`: Retrieves the first N digits of a number. ➡️
- `sumOfDigits`: Calculates the sum of individual digits of a number. ➕
- `isValidCardNumber`: Implements the core Luhn's Algorithm to check if a card number is valid. It processes digits from right to left, doubling every second digit and summing the digits. ✅
- `checkCardType`: Determines the type of credit card (AMEX, MASTERCARD, VISA) based on the card number's length and starting digits, after validating it with Luhn's Algorithm. 💳

This implementation helps in verifying the authenticity of card numbers and categorizing them. ✨

For more information on Luhn's Algorithm, you can refer to the Wikipedia page: [Luhn algorithm](https://en.wikipedia.org/wiki/Luhn_algorithm) 📖


