
/*
Print the following pattern:

*
* *
* * *
* * * *

*/


#include<iostream>

using namespace std;

int main(){
    int row, counter=0;

    cin>>row;
    int number=row*row;
    while(counter<row){
        int column=0;
        while(column<=counter){
            cout<<"* ";
            column++;
            number--;
        }
        counter++;
        cout<<endl;
    }
}

