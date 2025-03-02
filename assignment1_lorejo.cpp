#include <iostream>
#include <string>
using namespace std;

void programDescription(){
    cout << "ASSIGNMENT 1: ARRAY FUNCTIONS" << endl;
    cout << "Lorejo, Charisse C. - CMSC 28" << endl;
    cout << "March 2, 2025" << endl << endl;
    cout << "This program will sort the numbers inputted by the user in ascending order." << endl;
    cout << "Moreover, this program will classify them as either even or odd and classify them as either positive or negative." << endl;
    cout << "Lastly, this porgram will display the sorted numbers and the classification of each number." << endl;
    cout << "This program will only accept 10 numbers." << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

}
int main(){
    programDescription();
    int lorejoNum[10];
    char lorejoClassification[2][10];

    cout << "Pleadse enter 10 numbers." << endl;
    for(int i = 0; i < 10; i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> lorejoNum[i];
    }
    
    return 0;
}