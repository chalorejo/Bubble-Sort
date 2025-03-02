#include <iostream> //This is a library for input and output functions.
#include <string>   //This is a library for string functions.
using namespace std;

//Prototypes
int userInputtedNumbers(int* randomNumbers);
void programDescription();
int lorejoSort(int* numbersGiven);

//User-defined functions
int userInputtedNumbers(int* randomNumbers){                                //This function asks the user for 10 numbers.
    cout << "Pleadse enter 10 numbers." << endl;
    for(int i = 0; i < 10; i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> randomNumbers[i];
    }
    return randomNumbers[10];
}
void programDescription(){                                                  //This function displays the program description.
    cout << "ASSIGNMENT 1: ARRAY FUNCTIONS" << endl;
    cout << "Lorejo, Charisse C. - CMSC 28" << endl;
    cout << "March 2, 2025" << endl << endl;
    cout << "This program will sort the numbers inputted by the user in ascending order." << endl;
    cout << "Moreover, this program will classify them as either even or odd and classify them as either positive or negative." << endl;
    cout << "Lastly, this porgram will display the sorted numbers and the classification of each number." << endl;
    cout << "This program will only accept 10 numbers." << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl << endl;

}
int lorejoSort(int* numbersGiven){                                          //This function sorts the numbers in descending order.
    for (int i = 0; i < 10 - 1; i++){
        for (int j = 0; j < 10 - i - 1; j++){   
            if (numbersGiven[j] < numbersGiven[j+1]){
                int temp = numbersGiven[j];
                numbersGiven[j] = numbersGiven[j+1];
                numbersGiven[j+1] = temp;
            }
        }
    }
    return numbersGiven[10];
}
void positiveOrNegative(int* sortedNumbers, char classification[10][2]){    //This function classifies the numbers as either positive or negative.   
    for(int i = 0; i < 10; i++){
        if (sortedNumbers[i] > 0){
            classification[i][0] = 'P';
        }
        else if(sortedNumbers[i] < 0){
            classification[i][0] = 'N';
        }
        else{
            classification[i][0] = 'Z';
        }
    }
}
void oddOrEven(int* sortedNumbers, char classification[10][2]){             //This function classifies the numbers as either odd or even.
    for(int i = 0; i < 10; i++){
        if (sortedNumbers[i] % 2 == 0){
            classification[i][1] = 'E';
        }
        else{
            classification[i][1] = 'O';
        }
    }
}
void lorejoShowElem(int* numbersSorted, char classification[10][2]){        //This function displays the sorted numbers and their classification.
    cout << "----------------------------------------------------------------------" << endl;
    cout << "SORTED AND CLASSIFIED NUMBERS" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    cout << "Number\t\tPostive(P) or Negative(N)\tOdd(O) or Even(E)" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    for (int i = 0; i < 10; i++){
        cout << numbersSorted[i] << "\t\t" << classification[i][0] << "\t\t\t\t" << classification[i][1] << endl;
    }
    cout << "----------------------------------------------------------------------" << endl;
    cout << "END OF PROGRAM" << endl;
    cout << "----------------------------------------------------------------------" << endl;
}

//Main function
int main(){
    programDescription();
    int lorejoNum[10];
    char lorejoClassification[10][2];

    lorejoNum[10] = userInputtedNumbers(lorejoNum);     //Calls the function userInputtedNumbers to ask the user for 10 numbers.

    cout << "The numbers you entered are: ";            //Displays the numbers inputted by the user.
    for (int i = 0; i < 10; i++){
        cout << lorejoNum[i] << " ";
    }
    cout << endl;
    lorejoSort(lorejoNum);                               //Calls the function bubbleSort to sort the numbers in descending order.    
    positiveOrNegative(lorejoNum, lorejoClassification); //Calls the function positiveOrNegative to classify the numbers as either positive or negative.
    oddOrEven(lorejoNum, lorejoClassification);          //Calls the function oddOrEven to classify the numbers as either odd or even.
    lorejoShowElem(lorejoNum, lorejoClassification);     //Calls the function lorejoShowElem to display the sorted numbers and their classification.
    return 0;
}