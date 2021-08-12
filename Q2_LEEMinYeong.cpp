/*get number of the class


repeat until the number of class
    get the students score including the number of student at the first

    average score = (sum - number of input +1) / number of input -1

if the average score is integer, print in int
else the average score is double, represent in 4 decimal place



*/





#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    int numclass,numstudent,score;
    
    double average;

    cin >> numclass;
    if(numclass <= 0){
        return 0;
    }

    for(int count = 0;count != numclass ; count++){
        double total = 0;
        int count2 = 0;
        do {
            cin >> score;
            total = total + score;
            count2++;

            
        
        }while(getc(stdin) == ' ');
        
        average = (total-count2+1) / (count2-1);

        if(average /1.00 == (int(average))){
            cout <<"The average is : "<<average << endl;
        }
        else{
            cout <<"The average is : "<<setprecision(4)<<fixed<<average << endl;
        }
        
    }

    

    

    return 0;
}