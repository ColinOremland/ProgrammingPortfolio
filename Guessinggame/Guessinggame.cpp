#include <iostream>
#include <time.h>
#include <stdio.h>  
#include <stdlib.h> 
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;

int main(){
    
    int r = rand() % 100 + 1;
    bool win = false;
    int numi;
    srand(time(NULL));
    srand (1);
    cout << r << endl;
    cout << "Guess a number between 1 and 100 ";
    
	
    while(!win){
        string nums;
        getline (cin, nums);
	    stringstream ss(nums);
        ss >> numi;
        if(numi > r){
            cout << "you guessed " << numi << " thats too high, try again; " << endl;
        }
        else if(numi < r){
            cout << "you guessed " << numi << " thats too low, Try again; " << endl;
        }
	    else if(numi == r){
            cout << "you guessed " << numi << " thats correct, Good Job!!" << endl;
            win = true;
        }
    }
     
    }
