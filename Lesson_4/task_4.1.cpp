#include <iostream>

using namespace std;

int main()
{
    char str[50];
    int index = 0, counterWords = 0, word=0;
    cout << "Enter your string: ";
    cin.getline(str, 100);

    while(str[index] != 0){
        if(str[index] >= 'a' && str[index] <= 'z'){
            counterWords++;
        }
        if(str[index] == ' ' and counterWords > 0){
            word++;
            counterWords = 0;
        }

        index++;
    }
    cout << "Words in your string: " << word + 1 << endl;
}
