#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int bookTaken = 0;
        long books[100];
        string Grade;
    
    public:
        void setName(string name){
            this->name = name;
        }

        string getName(){
            return this->name;
        }

        void issueBook(long id){
            this->books[this->bookTaken] = id;
            this->bookTaken++;
        }

        void getIssuedBooks(){
            for(int i=0;i<this->bookTaken;i++){
                cout<<i+1<<") "<<this->books[i]<<endl;
            }
        }
};

int main(){
    Student s1;
    s1.setName("ABA");
    s1.issueBook(1990);
    s1.issueBook(1490);
    s1.issueBook(1487);
    cout<<"Student : "<<s1.getName()<<endl;
    cout<<"Issued Books : "<<endl;
    s1.getIssuedBooks();

    return 0;
}