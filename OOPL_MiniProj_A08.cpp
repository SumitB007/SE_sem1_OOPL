/*   Sumit Gulab Bhamare
         SECompA08
                             PROBLEM STATEMENT
Design an E-mail Verifier which accepts the email address from the user. 
Depending upon the input given by user display appropriate results. 
Use the following concepts in the Project Constructor, Destructor, new, delete, exceptional handling, 
string handling functions, etc.
*/
#include<iostream>
#include<string.h>

using namespace std;

class email
{
  char id[100];
  char *email_id;
  int size;
  public:
   email()
   {
     cout<<"\n\t Enter Email Id :";
     cin>>id;
     email_id = new char[sizeof(id)+1];
     strcpy(email_id, id);
     size = strlen(email_id);
     cout<<"\n\n----------"<<email_id;
   }
   ~email()
   {
     delete[] email_id;
   }

   bool Symbols()
   {
     int k=0, temp;
     for(int i=size-1; i>=0 ; i--)
       {
         
           if(!isalpha(email_id[i]))
             { 
                if(email_id[i]!='.')        // To check if there is another special character after dot .
                  return 0;
             } 

             k++;                           // k -- TO check number of characters after dot
 	  if(email_id[i]=='.')
           { 
             k--;                           // last character was dot

             if(k>3 || k<2)                 // TO check number of characters is greater than 3 and lesser than 2 after the last dot 
                return 0;

             temp = i+1;
             for(;i>=0;i--)
             { 
                if(email_id[i]=='@')        // To check if @ symbol is present or not before the last dot
                 {
                    if(temp==i)             // There should be some characters present between the last dot and @ so temp is for checking if characters are present or not before dot 
                      return 0;             //        and if '@' is found at place of temp... Email id is invalid..
                    else
                      return 1;
                 }
             }
           }
       }  
       return 0 ;                           // If any of the condition is not meet then  Email id is invalid
   }
    
   bool First_char()                        // The id should start with an alphabet
   {
     if(isalpha(email_id[0]))
        return 1;
     return 0;
   }

   void check_id(void)
   {
     if( First_char() && Symbols() )
       {}
      else
       throw 0;
   }  
};

int main()
{
  email E; //declaring object 
   try
  { 
    E.check_id();//checking all the conditons for the object
    cout<<"\n\t Entered Email id is valid.";
   }
  catch (int)
  {
    cout<<"\n\t Entered Email id is invalid.";
  }
  
  cout<<endl<<endl; 
  return 0;
}
