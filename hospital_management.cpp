#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<fstream>
#include<iomanip>
#include<cstring>
#include<windows.h>
//headers

void menu();
void pascode();
void cpascode();
using namespace std;
//function

//classes
class one
{
    public:
    virtual void get()=0;
    virtual void show()=0;
};

class info:public one
{
    public:
    char name[100],time[50];
    int num,age;
    void get()
    {
        system("clr");
        cin.sync();
        cout<<"\n Enter the patient name:";
        cin.getline(name,50);
        cout<<"\n Enter the Appointment Time:";
        cin.getline(time,50);
        cout<<"\n Enter the age";
        cin>>age;
        cout<<"\n Enter the Appointment number:";
        cin>>num;
    }
    void show()
    {
        cout<<"\nName :"<<name;
        cout<<"\nAge :"<<age;
        cout<<"\nNumber :"<<num;
        cout<<"\nTime :"<<time;
        
    }

};

class rana:public info
{
    public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("Rana.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your Entry HAs Been SAved!!";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("rana.txt");
        if(!in )
        {
            cout<<"\n\nNo Data In the File";
            cout<<"\n\n\t\tPress Any ley to continue";
            getch();
            menu();
        }
        else{
            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            cout<<"press any key to continue";
            getch();
            menu();
            }
        }
};

class waqar:public info{
    public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("waqar.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your Entry HAs Been SAved!!";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("waqar.txt");
        if(!in)
        {
            cout<<"\n\nNo Data In the File";
            cout<<"\n\n\t\tPress Any ley to continue";
            getch();
            menu();
        }
        else{
            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            cout<<"press enter to continue";
            getch();
            menu();
            }
        }


};

class ahmad:public info{
    public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("ahmad.txt",ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(info));
        out.close();
        cout<<"Your Entry HAs Been SAved!!";
        getch();
        menu();
    }
    void show()
    {
        ifstream in("ahmad.txt");
        if(!in )
        {
            cout<<"\n\nNo Data In the File";
            cout<<"\n\n\t\tPress Any ley to continue";
            getch();
            menu();
        }
        else{
            while(!in.eof())
            {
                in.read((char*)&a1,sizeof(a1));
                a1.show();
            }
            in.close();
            }
        }
};

class staff:public one{
    public:
    char all[999];
    char name[50],age[20],sal[30],pos[20];

    void get()
    {
        ofstream out("staff.txt",ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\nEnter NAme: ";
            cin.getline(name,50);
            cout<<"\nEnter Age: ";
            cin.getline(age,20);
            cout<<"\nEnter Salary: ";
            cin.getline(sal,30);
            cout<<"\nEnter Working Position: ";
            cin.getline(pos,20);
        }
        cout<<"\nNAme= "<<name<<"\nAge"<<age<<"\nSalary"<<sal<<"\nNEtworking Position"<<pos;
        out.close();
        cout<<"\n\nYour Information has been saved:\n\t\t\tPress any key to continue";
        getch();
        menu();
    }

    void show()
    {
        ifstream in("staff.txt");
        if(!in)
        {
            cout<<"file open error";
        }
        while(!(in.eof()))
        {
            in.getline(all,999);
            cout<<all<<endl;
        }
        in.close();
        cout<<"\n\n\t\t\tPRess any key to continue:";
        getch();
        menu();
    } 

};

class information
{
    public:
    void drinfo()
    {
        system("cls");
        system("color F3");
        cout<<"\n**********************************************************\n";
        cout<<"\n\n\t\t(Three doctors availabe)\n\n \t\t[information and timing are guve below]\n";
        cout<<"---------------------------------------------------------------\n";
        cout<<"\t\tDr available:\n";
        cout<<"\t\tDr rana(skin specialist)\n\n";
        cout<<"\t\t[[timing]]:\n\n";
        cout<<"\tmonday to friday\t\t 9am to 5pm\n";
        cout<<"\tsaturday        \t\t 9 am to 1pm\n";
        cout<<"\tsunday          \t\t off\n";
        cout<<"\n--------------------------------------------------------------\n";
        cout<<"\t\tDr waqar(child specialist)\n\n";
        cout<<"\t\t[[timing]]:\n\n";
        cout<<"\tmonday to friday\t\t 2pm to 10pm\n";
        cout<<"\tsaturday        \t\t 8am to 1pm\n";
        cout<<"\tsunday          \t\t 12pm to 9pm\n";
        cout<<"\n--------------------------------------------------------------\n";
        cout<<"\t\tDr ahmad(dvm)\n\n";
        cout<<"\t\t[[timing]]:\n\n";
        cout<<"\tmonday to friday\t\t 8am to 5pm\n";
        cout<<"\tsaturday        \t\t 10am to 1pm\n";
        cout<<"\tsunday          \t\t off\n";
        cout<<"\n--------------------------------------------------------------\n";
        cout<<"\npress any ley for continue";
        getch();
        menu();
    }
};

void call_dr()
{
    system("cls");
    int choice;
    cout<<"\n\n\n\t\tpress 1 for dr rana \n\n\t\t press 2 for dr waqar \n\n\t\t press 3 for dr ahmad ";
    cin>>choice;
    one *ptr;
    rana s3;
    waqar s4;
    ahmad s5;
    switch(choice){
    case 1: ptr=&s3;
            ptr->get();
            break;
    case 2: ptr=&s4;
            ptr->get();
            break;
    case 3: ptr=&s5;
            ptr->get();
            break;
    default: cout<<"sorry invalid choice!!";
    }
            
}

void pinfoshow()
{
    int choice;
    cout<<"please enter uour choice:";
    cin>>choice;
    one *ptr;
    rana s3;
    waqar s4;
    ahmad s5;
    switch(choice){
    case 1: ptr=&s3;
            ptr->show();
            break;
    case 2: ptr=&s4;
            ptr->show();
            break;
    case 3: ptr=&s5;
            ptr->show();
            break;
    default: cout<<"sorry invalid choice!!";
             getch();
             menu();
    }

}
void menu()
{
    system("cls");
    system("color FC");
    cout<<"\n\n";
    cout<<"\t\t     |  **********  main menu  **********  |   \n";
    cout<<"\t\t     |    Hospital management system       |\n";
    cout<<"\t\t     |  ***********************************|    \n";
    cout<<"\n------------------------------------------------------\n";
    cout<<"\t\t please select any option\n";
    cout<<"\n------------------------------------------------------\n";
    cout<<"\n\n\t1-\t\tpress 1 for avaulable doctor information\n\n";
    cout<<"\t2-\t\tpress 2 for doctor appointment\n\n";
    cout<<"\t3-\t\tpress 3 for saving staff information\n\n";
    cout<<"\t4-\t\tpress 4 for checking patient information menu\n\n";
    cout<<"\t5-\t\tpress 5 for changing staf information menu\n\n";
    cout<<"\t6-\t\tpress 6 for change password or create password\n\n";
    cout<<"\t7-\t\t[   press 7 for logout     ]\n";
    cout<<"\n**********************************************************\n";
    cout<<"\n\n\t\tplease enter your choice:";
    information a1;
    one *ptr;
    staff a2;
    int a;
    cin>>a;
    switch(a)
    {
        case 1: a1.drinfo();
                break;
        case 2: call_dr();
                break;
        case 3: ptr=&a2;
                ptr->get();
        case 4: pinfoshow();
                break;
        case 5: ptr=&a2;
                ptr->show();
        case 6: cpascode();
                break;
        case 7: pascode();
                break;
        default: cout<<"sorry invalid choice::";
    }
}

void pascode()
{
    system("cls");
    char p1[50],p2[50],p3[50];
    system("color Fc");
    ifstream in("password.txt");
    {
        cin.sync();
        cout<<"\n\n\n\n\n\n\n\t\tEnter the password:  ";
        cin.getline(p1,50);
        in.getline(p2,50);
        if(strcmp(p2,p1)==0)
            menu();
        else{
            cout<<"\n\n\t\t\tIncorrecr passcode try again\n";
            Sleep(999);
            pascode();
        }
    }
    in.close();
}

void cpascode()
{
    char n[50];
    system("cls");
    ofstream out("password.txt");
    {
        cin.sync();
        cout<<"\n\n\n\n\t\t\tenter the new password";
        cin.getline(n,50);
        out<<n;
    }
    out.close();
    cout<<"\n\nyour password has been saved";
    getch();
    menu();
}

int main()
{
    pascode();
    system("pause");
}