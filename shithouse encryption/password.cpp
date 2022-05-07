#include "iostream"
#include "sstream"
#include "fstream"
#include "string"
#include "stdio.h"
#include "stdlib.h"

std::string test = "";
std::string a = "abcd";
int main() {

for (int i = 0; i < a.length(); i++) {
    test[i] = (a[i] + 32);
}
printf("%s\n", test);
}