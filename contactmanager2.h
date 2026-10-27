#include <iostream>
using namespace std;

class contacts{
private:
    string data[4];
    char Answer='x';
    bool fav=false;

public:

    void Add_contact(){

        cout<<"name: ";
        getline(cin,data[0]);

        while(data[0]==""){
            cout<<"!!! you should enter value !!!\n";
            cout<<"name: ";
            getline(cin,data[0]);
        }


        cout<<"phone: ";
        getline(cin,data[1]);

        while(data[1]==""){
            cout<<"!!! you should enter value !!!\n";
            cout<<"phone: ";
            getline(cin,data[1]);
        }


        cout<<"gmail(optional): ";
        getline(cin,data[2]);

        if(data[2]==""){
            data[2]="No..";
        }


        cout<<"address(optional): ";
        getline(cin,data[3]);

        if(data[3]==""){
            data[3]="No..";
        }


        cout << "\n-Do You Want Add This Contact to favorites ? (y/n) : ";
        cin >> Answer;
        cin.ignore();

        while(Answer!='y' && Answer!='Y' && Answer!='n' && Answer!='N'){

            cout << "you should answer by y or n try again !!";

            cout << "\n\n-Do You Want Add This Contact to favorites ? (y/n) : ";
            cin >> Answer;
            cin.ignore();
        }


        if(Answer=='y' || Answer=='Y'){
            fav=true;
        }
        else{
            fav=false;
        }

    }


    void display(){

        string title[4]={"Name: ","Phone: ","Gmail: ","Address: "};

        for(int i=0;i<4;i++){
            cout<<title[i]<<data[i]<<endl;
        }

    }


    bool search_contact(string n){

        if(data[0]==n){
            return true;
        }
        else{
            return false;
        }

    }


    void update_contact(){

        cout<<"Name(new): ";
        getline(cin,data[0]);

        while(data[0]==""){
            cout<<"!!! You should enter value !!!\n";
            cout<<"Name(new): ";
            getline(cin,data[0]);
        }


        cout<<"Phone(new): ";
        getline(cin,data[1]);

        while(data[1]==""){
            cout<<"!!! You should enter value !!!\n";
            cout<<"Phone(new): ";
            getline(cin,data[1]);
        }


        cout<<"Gmail 'optional' (new): ";
        getline(cin,data[2]);

        if(data[2]==""){
            data[2]="No..";
        }


        cout<<"Address 'optional' (new): ";
        getline(cin,data[3]);

        if(data[3]==""){
            data[3]="No..";
        }


        cout << "\n-Do You Want Add This Contact to favorites ? (y/n) : ";
        cin >> Answer;
        cin.ignore();

        while(Answer!='y' && Answer!='Y' && Answer!='n' && Answer!='N'){

            cout << "you should answer by y or n try again !!";

            cout << "\n\n-Do You Want Add This Contact to favorites ? (y/n) : ";
            cin >> Answer;
            cin.ignore();
        }


        if(Answer=='y' || Answer=='Y'){
            fav=true;
        }
        else{
            fav=false;
        }

        cout<<"--------------------------------\n\n";

    }


    bool favorite_contacts(){

        if(fav){
            return true;
        }
        else{
            return false;
        }

    }

};