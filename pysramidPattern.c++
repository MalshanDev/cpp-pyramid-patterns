#include <iostream>
using namespace std;

//error handling
void error_handling(int type){
    if(type <= 0 || type > 15){
        cout<<"Invalid input! please enter valid number (1 - 15)";
    }
}

//pattern 1
void simplePyramid(int rows){
    cout<<"\n+-------------------------------+\n"
        <<"\t\t\t PATTERN\n"
        <<"+-------------------------------+\n";
        
    for(int i = 0 ; i < rows ; i++){
        //print "*"
        for(int j = 0 ; j <= i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<"\n+-------------------------------+\n"
        <<"\t\t\t  CODE\n"
        <<"+-------------------------------+\n";
    
    cout << "for(int i = 0 ; i < rows ; i++){\n"
     << "    for(int j = 0 ; j <= i ; j++){\n"
     << "        cout << \"* \";\n"
     << "    }\n"
     << "}\n";
}

void flippedSimplePyramid(int size){
    
    cout<<"\n+-------------------------------+\n"
        <<"\t\t\t PATTERN\n"
        <<"+-------------------------------+\n";
    
    for(int i = 0 ; i < size ; i++){
        for(int s = 0 ; s <  size - (i+1) ; s++){
            cout<<"  ";
        }
        for(int j = 0 ; j < (i+1) ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<"\n+-------------------------------+\n"
        <<"\t\t\t  CODE\n"
        <<"+-------------------------------+\n";
    
    cout << "for(int i = 0 ; i < size ; i++){\n"
     << "    for(int s = 0 ; s <  size - (i+1) ; s++){\n"
     << "        cout<<"  ";cout << \"* \";\n"
     << "    }\n"
     << "    for(int j = 0 ; j < (i+1) ; j++){\n"
     << "        cout << \"* \";\n"
     << "    }\n"
     << "}\n";
    
}

void triangle(int size){
    for(int i = 0 ; i < size ; i++){
        for(int s = 0 ; s <  size - (i+1) ; s++){
            cout<<" ";
        }
        for(int j = 0 ; j < (i+1) ; j++){
            cout<<"* ";
        }
        cout<<endl;
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
        
        //case handling
        int n;//row size
        switch(type){
            case 1:
            cout<<"Enter ROW size: ";
            cin>>n;
            simplePyramid(n);
            break;
            
            case 2:
            cout<<"Enter ROW size: ";
            cin>>n;
            flippedSimplePyramid(n);
            break;
            
            
            default:
            cout<<"invalid input!";
        }
        
        
       cout<<"\nDo you want to continue with another pattern (Y/N) :";
       cin>>choice;
        
    }while(choice == 'Y' || choice == 'y');
        
 return 0;  
}