#include <iostream>

using namespace std;

int stringToInt(string s);
string intToString(int i);

int main(int argc, char const *argv[]) {
  stringToInt("-100009");
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
    cout << s[i] << ":";

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
  cout << "\n";

  if (isNegative)
    number *= -1;

  cout << number << endl;
  return number;
}

// Given an Integer i, convert it into String
string intToString(int i) {
  string s;
  bool isNegative = false;

  if (int < 0) {
    isNegative = true;
    i *= -1;
  }

  switch (i) {
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

  return s;
}