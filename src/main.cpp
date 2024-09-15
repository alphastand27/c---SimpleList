#include "include/list.h"

int main(int arg_count, char *args[]) {
    
    List simpleList;

    if(arg_count > 1) {
        simpleList.name = string(args[1]);
        simpleList.mainList = simpleList.data.read();
        simpleList.find_userList();
        simpleList.print_menu();
    }
    else {
        cout << "Username not supplied.. exiting the program" << endl;
    }

    return 0;
}


