
/*
Print the following pattern:

4 3 2 1
4 3 2 1
4 3 2 1
4 3 2 1

*/


#include<iostream>

using namespace std;

int main(){
    int row, counter=0;
    cin>>row;
    while(counter<row){
        int column=0;
        while(column<row){
            cout<<row-column<<" ";
            column++;
        }
        counter++;
        cout<<endl;
    }
}

