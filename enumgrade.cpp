#include <iostream>
#include <string>

using namespace std;

enum Grade{
    A,
    A_minus,
    B_plus,
    B,
    B_minus,
    C_plus,
    C,
    C_minus,
    D,
    F
};

class Student{
    private:
        string name;
        int bookTaken = 0;
        long books[100];
        string Grade;
    
    public:
        string getName(){
            return this->name;
        }

        void setName(string name){
            this->name = name;
        }

        void issueBook(long id){
            this->books[this->bookTaken] = id;
            this->bookTaken++;
        }

        void getIssuedBooks(){
            for(int i=0;i<=this->bookTaken;i++){
                cout<<this->books[i]<<endl;
            }
        }

        void setGrade(enum Grade G){
            string tempG = "";
            switch (G){
                case A:
                    tempG = "A";
                    break;
                case A_minus:
                    tempG = "A-";
                    break;
                case B_plus:
                    tempG = "B+";
                    break;
                case B:
                    tempG = "B";
                    break;
                case B_minus:
                    tempG = "B-";
                    break;
                case C_plus:
                    tempG = "C+";
                    break;
                case C:
                    tempG = "C";
                    break;
                case C_minus:
                    tempG = "C-";
                    break;
                case D:
                    tempG = "D";
                    break;
                case F:
                    tempG = "F";
                    break;
            }
            this->Grade = tempG;

        }


        string getGrade(){
            return this->Grade;
        }

};



int main(){

    Student s1;
    s1.setName("ABA");
    Grade G = A_minus;
    s1.setGrade(G);

    cout<<"Student : "<<s1.getName()<<endl;
    cout<<"Grade : "<< s1.getGrade()<<endl;

    return 0;
}
