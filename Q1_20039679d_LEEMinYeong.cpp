#include <iostream>


using namespace std;

int main() {

    int negnum;
    int array[5]={0,0,0,0,0};
    int smallnum, secsmallnum;

    for(int count=0; count < 5 ; count++) {
        
        cout << "Please enter a negative number : ";
        cin >> negnum;

        while(negnum >= 0){
            cout << "Wrong input. Please enter again :";
            cin >> negnum;

        }

        array[count] = negnum;
        
        if (array[0] < array[1]) {
            smallnum = array[0];
            secsmallnum = array[1];
        } else {
            smallnum = array[1];
            secsmallnum = array[0];
        }
        for (int i = 0; i < 5; i++) {
            if (smallnum > array[i]) {
                secsmallnum = smallnum;
                smallnum = array[i];
            } else if (array[i] < secsmallnum) {
                secsmallnum = array[i];
            }
        }


    }

    cout << "The second smallest number is " <<secsmallnum;
    return 0;
}