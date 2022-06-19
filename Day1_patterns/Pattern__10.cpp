/*
Print the following pattern:

1
2 3
3 4 5
4 5 6 7

*/

#include<iostream>

using namespace std;

int main(){
    int row,counter=1;
    int number;
    cin>>row;
    while(counter<=row){
        int column=1;
        number=counter;
        while(column<=counter){
            cout<<number<<" ";
            column++;
            number++;
        }
        cout<<endl;
        counter++;
    }
    return 0;
}
