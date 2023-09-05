#include<iostream>
#include<stdio.h>
class student
{
private:
    int rno,per;
    char sname[50];


public:

    void getdata()
    {
        cout<<"Enter roll number:";
        cin>>rno;
        cout<<"Enter name:";
        gets(sname);
        cout<<"Enter percentage";
        cin>>per;
    }
    void showdata()
    {
        cout<<rno<<endl;
        puts(sname);
        cout<<endl;
        cout<<per<<endl;
    }

};
int main()
{
    student s1;
    s1.getdata();
    s1.showdata();

    student s2;
    s2.getdata();
    s2.showdata();


    return 0;
}
