#include <iostream>

using namespace std;

int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b); 
     
}

int main() {
   
    int nume1,deno1,nume2,deno2,calc1,calc2;

    cout << "Please enter the numberator of the first rational number : ";
    cin >>  nume1;
    cout << "Please enter the denominator of the first rational number : ";
    cin >>  deno1;
    cout << "Please enter the numberator of the second rational number : ";
    cin >>  nume2;
    cout << "Please enter the denominator of the second rational number : ";
    cin >>  deno2;

    cout<<nume1<<"/"<<deno1<<" * "<<nume2<<"/"<<deno2<<endl;

    calc1 = nume1 * nume2;
    calc2 = deno1 * deno2;

    cout <<"= " << calc1 << "/" << calc2<<endl;

    if(calc1==calc2){
        cout << "= 1/1" <<endl;
        cout << "= 1";
    }
    else if (calc1 > calc2){ //분자가더큼 
        int result = hcf(calc1,calc2);
        int add;
        add=(calc1-result)/calc2;
        cout <<"= "<< add << " " << result<<"/"<<calc2;
    }
    else{
        return 0;
    }

    return 0;
}