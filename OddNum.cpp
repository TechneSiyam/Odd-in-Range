#include <iostream>
using namespace std;

void myFunction(int start, int ending)
{
    cout << "Starting Point : " << start << endl;
    cout << "Ending Point : " << ending << endl;

for (int i = start; i <= ending; i++){

    if(i%2 != 0){

        cout << i <<" ";
    }
}
}
int main(){

myFunction(1, 10);

return 0;
}
