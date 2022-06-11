
/*
Print the following pattern:

9 8 7
6 5 4
3 2 1

*/


#include<iostream>

using namespace std;

int main(){
    int row, counter=0;

    cin>>row;
    int number=row*row;
    while(counter<row){
        int column=0;
        while(column<row){
            cout<<number<<" ";
            column++;
            number--;
        }
        counter++;
        cout<<endl;
    }
}

