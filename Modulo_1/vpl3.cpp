#include <iostream>

using namespace std;

#define SIZE 5;
                
int main(){

    long int value1 = 200000, value2 = 0, *long_ptr;

    long_ptr = &value1;
    cout << *long_ptr << " ";
    value2 = *long_ptr;
    cout << value2 << " ";
    cout << &value1 << " ";
    cout << &long_ptr << " ";

    if(long_ptr == &value1){
        cout << "1" << " ";
    }else{
        cout << "0" << " ";
    }

    unsigned int values[5] = {2, 4, 6, 8, 10};
    unsigned int *v_ptr;
    int i = 0;

    for(i = 0; i < 5; i++){
        cout << values[i] << " ";
    }
    v_ptr = &values[0];
    v_ptr = & *(values + 0);

    for(i = 0; i < 5; i++){
        cout << *(values + i) << " "; 
    }

    for(i = 0; i < 5; i++){
        cout << *(values + i) << " ";
    }

    for(i = 0; i < 5; i++){
        cout << v_ptr[i] << " ";
    }

    cout << values[4] << " ";
    cout << *(values + 4) << " ";
    cout << 4[values] << " ";
    cout << *(v_ptr + 4) << " ";
    cout << &*(v_ptr + 3) << " ";
    cout << *(v_ptr + 3) << " ";
    v_ptr = &values[4];
    v_ptr -= 4;
    cout << v_ptr << " ";
    cout << *v_ptr << " "; 

    return 0;
}