
/*
Print the following pattern:

1
2 3
4 5 6
7 8 9 10

*/


#include<iostream>

using namespace std;

int main(){
    int row, counter=1;
    cin>>row;
    int number=1;
    while(counter<=row){
        int column=0;
        while(column<counter){
            cout<<number<<" ";
            column++;
            number++;
        }
        cout<<endl;
        counter++;
    }

}

