#include <iostream>
#include "contactmanager2.h"
using namespace std;

int main()
{
    contacts c[1000];

    char n='1';

    int num=0;

    string name;

    int count1,count2,count3,fcount;


    cout<<"!! welcome to phone contacts manager !!\n"<<endl;


    while(n!='0'){

        cout<<"=== PHONE CONTACTS MANAGER ===\n";
        cout<<" 1. Add Contact\n";
        cout<<" 2. Display All Contacts\n";
        cout<<" 3. Search Contacts\n";
        cout<<" 4. Update Contact\n";
        cout<<" 5. Show Contact Count\n";
        cout<<" 6. Delete Contact\n";
        cout<<" 7. Favorite Contacts(*)\n";
        cout<<" 0. Exit\n";
        cout<<"==============================";
        cout<<endl;


        cout<<"Enter your choice: ";
        cin>>n;
        cin.ignore();


        switch(n){

        case '1':

            if(num>=1000){

                cout<<"\n--------------------------------\n";
                cout<<"!!! Contacts list is full !!!\n";
                cout<<"You cannot add more contacts.\n";
                cout<<"--------------------------------\n\n";

                break;
            }


            cout<<"\n--------------------------------\n";

            c[num].Add_contact();

            num++;

            cout<<"--------------------------------\n\n";

            break;


        case '2':

            cout<<"\n----- this is all contacts -----\n";

            if(num==0){

                cout<<"\n----- No Contacts Yet !! -----\n\n";

                break;
            }


            for(int j=0;j<num;j++){

                if(c[j].favorite_contacts()){

                    cout<<"\n-------- contact "<<j+1<<" (*)-------------\n";
                }
                else{

                    cout<<"\n-------- contact "<<j+1<<" -------------\n";
                }

                c[j].display();

                cout<<"--------------------------------\n\n";
            }

            break;


        case '3':

            cout<<"\n----------- Search -----------\n\n";

            cout<<"Enter name of contact you want : ";
            getline(cin,name);

            count1=0;


            for(int i=0;i<num;i++){

                if(c[i].search_contact(name)){

                    if(c[i].favorite_contacts()){

                        cout<<"\n-------- contact "<<i+1<<" (*)-------------\n";
                    }
                    else{

                        cout<<"\n-------- contact "<<i+1<<" -------------\n";
                    }

                    c[i].display();

                    cout<<"--------------------------------\n";

                    count1++;
                }
            }


            if(count1==0){

                cout<<"--------------------------------\n";
                cout<<"No Contact By This Name !!\n";
                cout<<"--------------------------------\n\n";
            }

            break;


        case '4':

            cout<<"\n----------- Updating -----------\n\n";

            cout<<"Enter name of contact you want edit : ";
            getline(cin,name);

            count2=0;


            for(int i=0;i<num;i++){

                if(c[i].search_contact(name)){

                    if(c[i].favorite_contacts()){

                        cout<<"\n-------- contact "<<i+1<<" (*)-------------\n";
                    }
                    else{

                        cout<<"\n-------- contact "<<i+1<<" -------------\n";
                    }

                    c[i].update_contact();

                    count2++;
                }
            }


            if(count2==0){

                cout<<"--------------------------------\n";
                cout<<"No Contact By This Name !!\n";
                cout<<"--------------------------------\n\n";
            }

            break;


        case '5':

            cout<<"\n--------------------------------\n";
            cout<<"you have "<<num<<" contacts.\n";
            cout<<"--------------------------------\n\n";

            break;


        case '6':

            cout<<"\n----------- deleting -----------\n\n";

            cout<<"Enter name of contact you want delete : ";
            getline(cin,name);

            count3=0;


            for(int i=0;i<num;i++){

                if(c[i].search_contact(name)){

                    for(int j=i;j<num-1;j++){

                        c[j]=c[j+1];
                    }

                    num--;

                    i--;


                    cout<<"\n--------------------------------\n";
                    cout<<"!!! Delete Done !!!";
                    cout<<"\n--------------------------------\n\n";

                    count3++;
                }
            }


            if(count3==0){

                cout<<"\n\n--------------------------------\n";
                cout<<"No Contact By This Name !!";
                cout<<"\n--------------------------------\n\n";
            }

            break;


        case '7':

            cout<<"\n----------- favorite contacts -----------\n\n";

            if(num==0){

                cout<<"----- No Contacts Yet !! -----\n\n";

                break;
            }


            fcount=0;


            for(int i=0;i<num;i++){

                if(c[i].favorite_contacts()){

                    cout<<"\n-------- contact "<<i+1<<" (*)-------------\n";

                    c[i].display();

                    fcount++;

                    cout<<"--------------------------------\n\n";
                }
            }


            if(fcount==0){

                cout<<"----- No Favorite Contacts Yet !! -----\n\n";
            }

            break;


        case '0':

            cout<<"\n!!! Ending Program !!!\n\n";

            break;


        default:

            cout<<"\nthis choice is not found!!\n\n";
        }

    }


    return 0;
}