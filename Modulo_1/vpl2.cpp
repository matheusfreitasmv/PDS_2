#include <iostream>

using namespace std;

int main(){

    int number = 0, i = 0, j = 0;

    cin >> number;

    for(i = 0; i < (number*2) - 1; i++){
       if(i < number){
           for(j = 0; j <= i; j++){
               cout << "*";
           }
           cout << "\n";
       }else{
           for(j = (number*2); j > i+1; j--){
               cout << "*";
           }
           cout << "\n";
       }
    }

return 0;
}