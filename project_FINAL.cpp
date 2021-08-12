#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    ifstream data("data.csv");
    string line, field;
    vector<vector<string>> array;
    vector<string> str;

    while(getline(data,line)) {
        str.clear();
        stringstream ss(line);

        while (getline(ss,field,','))
        {
            str.push_back(field);
        }
        array.push_back(str);
    }

    string matchString;
    cout << "Search : ";
    cin >> matchString;
    
    for(int x = 0; x < array.size(); x++){
        if (array[x][0].find(matchString, 0) != std::string::npos || array[x][1].find(matchString, 0) != std::string::npos){
            
            cout << "--------------------------------" << endl;
            cout << "Course Code : COMP" << array[x][0] << endl;
            cout << "Course name : " << array[x][1] << endl;
            cout << "Pre-requisite and/or exclusion(s) for this course : " << array[x][2] << endl;
        }
    }
} 