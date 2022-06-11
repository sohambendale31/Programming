
/*
Print the following pattern:

1 2 3
4 5 6
7 8 9

*/


#include<iostream>

using namespace std;

int main(){
    int row, counter=0;
    int number=1;
    cin>>row;
    while(counter<row){
        int column=0;
        while(column<row){
            cout<<number<<" ";
            column++;
            number++;
        }
        counter++;
        cout<<endl;
    }
}

