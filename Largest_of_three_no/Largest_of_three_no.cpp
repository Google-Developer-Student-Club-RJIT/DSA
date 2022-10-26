#include <iostream>
using namespace std;

void Largest_of_three_no(int a,int b,int c){
    if (a > b && a > c){
        cout << "largest number is : " << a << endl;
    }
    else if (b > a && b > c){
        cout << "largest number is : " << b << endl;
    }
    else if (c > a && c > b){
        cout << "largest number is : " << c << endl;
    }
    else{
        cout << "numbers are equal or invalid \n";
    }
}

int main(int argc, char const *argv[])
{
    Largest_of_three_no(1,2,3);   
    return 0;
}
