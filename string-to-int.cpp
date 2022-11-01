#include <iostream>

using namespace std;

int stringToInt(string s);
string intToString(int i);

int main(int argc, char const *argv[]) {
  cout << "String to Int: " << stringToInt("-100009") << endl;

  cout << "Int to String: " << intToString(-6543) << endl;
  return 0;
}

// Given a String s, convert it into Integer
int stringToInt(string s) {
  bool isNegative = false;
  int number = 0;
  int i = 0;
  if (s[0] == '-') {
    isNegative = true;
    i++;
  }

  for (; i < s.size(); i++) {
    number *= 10;

    switch (s[i]) {
      case '0':
        number += 0;
        break;
      case '1':
        number += 1;
        break;
      case '2':
        number += 2;
        break;
      case '3':
        number += 3;
        break;
      case '4':
        number += 4;
        break;
      case '5':
        number += 5;
        break;
      case '6':
        number += 6;
        break;
      case '7':
        number += 7;
        break;
      case '8':
        number += 8;
        break;
      case '9':
        number += 9;
        break;

      default:
        return 0;
    }
  }
  if (isNegative)
    number *= -1;

  // cout << "Int Number: " << number << endl;
  return number;
}

// Given an Integer i, convert it into String
string intToString(int i) {
  string s;
  int isNegative = 0;
  int digit = 0;

  if (i < 0) {
    isNegative = 1;
    i *= -1;
    s = '-';
  }

  while (i > 0) {
    // Get last digit of number
    digit = i - ((i / 10) * 10);
    i /= 10;
    switch (digit) {
      case 0:
        s += '0';
        break;
      case 1:
        s += '1';
        break;
      case 2:
        s += '2';
        break;
      case 3:
        s += '3';
        break;
      case 4:
        s += '4';
        break;
      case 5:
        s += '5';
        break;
      case 6:
        s += '6';
        break;
      case 7:
        s += '7';
        break;
      case 8:
        s += '8';
        break;
      case 9:
        s += '9';
        break;

      default:
        break;
    }
  }

  // reverse the string s
  int n = s.length();
  for (int j = isNegative; j < ((n / 2) + isNegative); j++) {
    swap(s[j], s[n - j - (int)!(isNegative)]);
  }

  // cout << "String Number: " << s << endl;
  return s;
}