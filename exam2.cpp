#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
        /* code */
        int cmd;
        string name;
        string line;
        ofstream write;
        ifstream read;

        do{
            cout << "MENU" << endl;
            cout << "1. Add student." << endl;
            cout << "2. List student." << endl;
            cout << "3. List student Firstname x." << endl;
            cout << "4. find List student." << endl;
            cout << "5. Quit." << endl;
            cout << "Please enter menu : " ;
            cin >> cmd;

            if (cmd == 1){
                cout << "Enter Std name : " ;
                cin >> name;

                write.open("std.txt",fstream::app);
                if (write.is_open()) {
                    write << name << endl;
                    write.close();
                } else {
                    cout << "unable to open file";
                }
            }

                else if (cmd == 2){
                read.open ("std.txt");
                if (read.is_open()) {
                    while (getline (read,line)){
                        cout << line << endl;
                    }
                }
            }

                 else if (cmd == 3){
                read.open ("std.txt");
                if (read.is_open()) {
                    while (getline (read,name)){
                        cout << name << endl;
                    }
                }
            }

             else if (cmd == 4){
                read.open ("std.txt");
                if (read.is_open()) {
                    while (getline (read,name)){
                        cout << name << endl;
                    }
                }
            }

            else {
                break;
            }

        }while (1);

        return 0;
}

