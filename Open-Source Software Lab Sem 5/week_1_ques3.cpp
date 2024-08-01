#include <iostream>
#include <string>

using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

int main()
{
    
    string str = "Hello, World!";

    int n = str.length(); 
    for (int i = 0; i < n / 2; ++i) {
        
        swap(str[i], str[n - i - 1]);
    }
    cout << "Reversed string: " << str << endl;

    return 0;
}
