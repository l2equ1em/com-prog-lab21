#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    double sum = 0;
    for(int i = 0; i < argc; i++){
        sum += atof(argv[i]);
    }
    if(argc > 1){
        cout << "---------------------------------" << endl;
        cout << "Average of " <<  argc - 1 << " numbers = " << (sum/(argc-1)) << endl;
        cout << "---------------------------------";
    }
    else cout << "Please input numbers to find average.";
}