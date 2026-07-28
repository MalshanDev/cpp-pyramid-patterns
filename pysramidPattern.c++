#include <iostream>
using namespace std;

//error handling
void error_handling(int type){
    if(type <= 0 || type > 15){
        cout<<"Invalid input! please enter valid number (1 - 15)";
    }
}


int main(){
    int type;
    char choice;
    
    //looping
    do{
        cout<<"+-------------------------------+\n"
        <<"\t\tPYRAMID PATTERNS\n"
        <<"+-------------------------------+\n";
        
        cout<<"Enter pattern type (1 - 15)\n";
       
        cout<<"\n1.Simple Pyramid\n"
        <<"2.Flipped Simple Pyramid\n"
        <<"3.Inverted Pyramid\n"
        <<"4.Flipped Inverted Pyramid\n"
        <<"5.Triangle\n"
        <<"6.Inverted Triangle\n"
        <<"7.Half Diomand Pattern\n"
        <<"8.Flipped Half Diamond Pattern\n"
        <<"9.Diamond Pattern\n"
        <<"10.Hourglass Pattern\n"
        <<"11.Number Pyramid\n"
        <<"12.Rotated Number Pyramid\n"
        <<"13.Palindrome Triangle\n"
        <<"14.Alphabet Pyramid\n"
        <<"15.Continuos Alphabet Pyramid\n";
       
        cout<<"\nEnter Valid Number: ";
        cin>>type;
        
        //error handling
        error_handling(type);
        cout<<endl;
        
        
        
        
       cout<<"\nDo you want to continue with another pattern (Y/N) :";
       cin>>choice;
        
    }while(choice == 'Y' || choice == 'y');
        
 return 0;  
}