#include <iostream>
#include <vector>
using namespace std;

class List {
    private:
    //only the class itself
    protected:
    //inherits or belongs to class
    public:
    //anything including the class
        List() {
            //constructor
        }
        ~List() {
            //destructor
        }

        vector<string> list;
        string name;

        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
};