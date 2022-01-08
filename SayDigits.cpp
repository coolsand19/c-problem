#include<iostream>
using namespace std;

void sayDigits(int no, string arr[]){
    if(no == 0)
       return;
    int digit = no%10;
    no = no/10;
    sayDigits(no, arr);
    cout << arr[digit] << " ";
} 

int main(){
    int no;
    cin >> no;
    string arr[10] = {"Zero","one","two","three","four",
                      "five","six","seven","eight","nine"};
    sayDigits(no,arr);
    return 0;
}