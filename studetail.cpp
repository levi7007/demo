#include<iostream>
#include<string.h>
using namespace std;
class stu{
    char name[20];
    int roll;
    static int r;
    public:
    stu(){
        roll=r;
        r+=2;
    }
    int get_roll(){
return roll;
    }
    void set_name(char n[]){
        strcpy(name,n);
    }
    char* get_name(){
        return name;    
    }
};
int stu::r=4201;

class sub{
int scode;
char sname[20];
int tmarks;
int omarks;
public:
void set_sub(int sc,char sn[],int tm,int om){
scode=sc;
strcpy(sname,sn);
tmarks=tm;
omarks=om;
}
int get_stu_sub_code(){
    return scode;
}
char* get_stu_sub_name(){
    return sname;
}
int get_stu_sub_tmarks(){
    return tmarks;
}
int get_stu_sub_omarks(){
    return omarks;
}

};

class dis{
    stu s;
 sub sb[10];
 int count; 
    public:

 dis(){
    count=0;
 }
 void set_stu_name(char n[]){
    s.set_name(n);
 }
 void set_stu_sub(int c,char n[],int t,int o){
    if(count<10){
        sb[count].set_sub(c,n,t,o);
        count++;
    }
 }
 int get_stu_roll(){
    return s.get_roll();
 }
 char* get_stu_name(){
    return s.get_name();
 }
 int get_sub_count(){
    return count;
 }
 sub get_subject(int i){
    return sb[i];
 }
 
 };

 int main(){
dis d1,d2;
d1.set_stu_name("sarah");
d1.set_stu_sub(201,"co",4,3);
d1.set_stu_sub(202,"dsds",4,2);
d1.set_stu_sub(201,"co",4,3);
d1.set_stu_sub(201,"co",4,3);
d1.set_stu_sub(201,"co",4,3);
d1.set_stu_sub(201,"co",4,3);
d1.set_stu_sub(201,"co",4,3);
d1.set_stu_sub(201,"co",4,3);
d1.set_stu_sub(201,"co",4,3);
d1.set_stu_sub(201,"co",4,3);

cout<<"roll no is: "<<d1.get_stu_roll()<<"\n";
cout<<"name is: "<<d1.get_stu_name()<<"\n";

for(int i=0;i<d1.get_sub_count();i++){
    sub t=d1.get_subject(i);
    cout<<"sub code is: "<<t.get_stu_sub_code()<<"\n ";
    cout<<"sub name is: "<<t.get_stu_sub_name()<<"\n ";
    cout<<"total marks is: "<<t.get_stu_sub_tmarks()<<"\n ";
    cout<<"obtained marks is: "<<t.get_stu_sub_omarks()<<"\n ";
}

d2.set_stu_name("sarah");
d2.set_stu_sub(201,"co",4,3);
d2.set_stu_sub(202,"dsds",4,2);
d2.set_stu_sub(201,"co",4,3);
d2.set_stu_sub(201,"co",4,3);
d2.set_stu_sub(201,"co",4,3);
d2.set_stu_sub(201,"co",4,3);
d2.set_stu_sub(201,"co",4,3);
d2.set_stu_sub(201,"co",4,3);
d2.set_stu_sub(201,"co",4,3);
d2.set_stu_sub(201,"co",4,3);

cout<<"roll no is: "<<d2.get_stu_roll()<<"\n";
cout<<"name is: "<<d2.get_stu_name()<<"\n";

for(int i=0;i<d2.get_sub_count();i++){
    sub t=d2.get_subject(i);
    cout<<"sub code is: "<<t.get_stu_sub_code()<<"\n ";
    cout<<"sub name is: "<<t.get_stu_sub_name()<<"\n ";
    cout<<"total marks is: "<<t.get_stu_sub_tmarks()<<"\n ";
    cout<<"obtained marks is: "<<t.get_stu_sub_omarks()<<"\n ";
}
    return 0;
 }