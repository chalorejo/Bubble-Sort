#include <iostream> //This is a library for input and output functions.
#include <string>   //This is a library for string functions.
using namespace std;

//Prototypes
int userInputtedNumbers(int* randomNumbers);

//User-defined functions
int userInputtedNumbers(int* randomNumbers){    //This function asks the user for 10 numbers.
    cout << "Pleadse enter 10 numbers." << endl;
    for(int i = 0; i < 10; i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> randomNumbers[i];
    }
    return randomNumbers[10];
}
void programDescription(){                      //This function displays the program description.
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

    lorejoNum[10] = userInputtedNumbers(lorejoNum);

    cout << "The numbers you entered are: ";
    for (int i = 0; i < 10; i++){
        cout << lorejoNum[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 10 - 1; i++){
        for (int j = 0; j < 10 - i - 1; j++){   //This loop sorts the numbers in ascending order. It uses bubble sort.
            if (lorejoNum[j] < lorejoNum[j+1]){
                int temp = lorejoNum[j];
                lorejoNum[j] = lorejoNum[j+1];
                lorejoNum[j+1] = temp;
                cout << "Swapped: ";

                for (int k = 0; k < 10; k++){
                    cout << lorejoNum[k] << " ";
                }
                cout << endl;   
            }
        }
    }
    return 0;
}