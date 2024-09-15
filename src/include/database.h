#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Database {
    private:
    //only the class itself
    protected:
    //inherits or belongs to class
    public:
    //anything including the class
        Database() {
            //constructor
        }
        ~Database() {
            //destructor
        }

        vector<vector<string>> mainList;
        string name;

        void write(vector<vector<string>> mainList);
        vector<vector<string>> read();
};