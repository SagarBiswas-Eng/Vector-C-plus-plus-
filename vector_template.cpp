#include<iostream>>
#include<vector>
using namespace std;

template<typename dataType>

class Template {
private:
    vector <dataType> array;
    int size;

public:
    Template(vector<dataType> array,int size) { /// for array = Template(dataType *array, int size){
        this -> array = array;
        this -> size = size;
    }

    void takingInput() {
        cout << "Enter the elements of the vector\t: ";
        for(int i = 0; i < size; i++) {
            dataType x;
            cin >> x;
            array.push_back(x);
        }
    }

    void showElements() {
        cout << "The elements of the vector are\t\t: ";
        for(auto x: array) {
            cout << x << " ";
        }
    }
};

int main() {
    int size;
    cout << "Enter the size of the vector\t\t: ";
    cin >> size;

    vector<string> v1; /// decelerating vector... v1 is variable_name...
    Template <string> t1(v1, size); /// Initializing Constructor... t1 is class object;
    t1.takingInput();
    t1.showElements();

    /*int x;
    while(cin >> x){
        v1.push_back(x);            /// Taking input into vector without decelerating size;
    }*/

    return 0;
}
