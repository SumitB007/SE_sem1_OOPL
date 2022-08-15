//Problem Statement-
//Converter:
//Convert time from seconds to HH:MM:SS format using class
//Convert inches to ft.
//Convert kgs to lbs
//Kilometres to miles



#include<iostream>
using namespace std;

 
class Weight
{
     public:
     float kgs;
     float lbs;

     void getkg(void);
     void prtlbs(void);


};


class Distance
{
     public:
     double km;
     double mil;
     double inches;
     double ft;


     void getkm(void);
     void prtmil(void);
     void getinches(void);
     void prtft(void);

};


class Time
{
     public:
     int hours;
     int minutes;
     int seconds;

     public:
     void getTime(void);
     void putTime(void);
     void calTime(void);
};

void Time :: getTime(void){
     
     cout<<"Enter Time in seconds : "<<endl;
     cin>>seconds;
}


void Time :: putTime(void){
   cout<<"The time in HH:MM:SS format is"<<endl;
   cout<<hours<<" : "<<minutes<<" : "<<seconds<<endl;
   
}
void Time :: calTime(void){
    minutes=seconds/60;
    hours=minutes/60;
    minutes%=60;
    seconds%=60;
    


}
 
void Weight ::getkg(void){
     cout<<"Enter weight in Kilograms: "<<endl;
     cin>>kgs;

} 

void Weight::prtlbs(void){
     
     cout<<"The weight in lbs is: "<<endl;
     lbs=kgs*2.205;
     cout<<lbs<<endl;

}

void Distance::getkm(void){
     cout<<"Enter the distance in km : "<<endl;
     cin>>km;
  

}

void Distance::prtmil(void){
     mil=km/1.609;
     cout<<"The distance in miles is :"<<mil<<endl;

}

void Distance::getinches(void){
     cout<<"Enter your height in inches : "<<endl;
     cin>>inches;


}

void Distance::prtft(void){
     cout<<"Your height in feet is : "<<endl;
     ft=inches/12;
     cout<<ft<<endl;


}


int main(){
     while (1)
     {
          /* code */
          int choice;
          cout<<"Press 1.To calculate time from seconds to HH::MM::SS "<<endl;
          cout<<"Press 2.To convert Kgs to lbs:  "<<endl;
          cout<<"Press 3.To convert distance "<<endl;
          cout<<"Press 4.To exit "<<endl;
          cout<<"Enter your choice: "<<endl;
          
          cin>>choice;
          if (choice==1)
          {
               Time obj;
               obj.getTime();
               obj.calTime();
               obj.putTime();

          }
          else if(choice==2){
               Weight obj;
               obj.getkg();
               obj.prtlbs();

          }
          else if(choice==3){
               int option;
               cout<<"Press 1.To convert kilometres to miles "<<endl;
               cout<<"Press any other number to convert inches to feet "<<endl;
               cout<<"Enter your option: "<<endl;
               cin>>option;
               if (option==1)
               {
                    Distance obj;
                    obj.getkm();
                    obj.prtmil();
               }
               else{
                    Distance obj;
                    obj.getinches();
                    obj.prtft();
               }               
          }
          else if(choice==4){
               break;
          }
     }
     




     return 0; 
}

 