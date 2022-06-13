#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  char str[] = "1 2 3";
  int check, sum =0;
  string s="";

  cout << "The digit in the string are:" << endl;

  for (int i = 0; i <= strlen(str); i++)  {
cout<<atoi(str[i])<<endl;
    // check if str[i] is a digit
    check = isdigit(str[i]);

    if (not check){

        // cout << s << endl;
        // sum = sum + (int)str[i];
        // cout<<sum<<"--------\n";

        s ="";
    }
    else{
        s += str[i];

    }
  }
cout <<sum;
  return 0;
}