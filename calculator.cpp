#include <iostream>

using namespace std;


int main(){




      int num1;
      int num2;
      int op;
      int sum;
      
      
      cout << "Option to Calculate" << endl << endl;
      
      
      cout << "1. Addition" << endl;
      cout << "2. Subtraction" << endl; 
      cout << "3. Division" << endl;
      cout << "4. Multiplication" << endl <<endl;
      
      start:
      cout  << endl;
      cout << "Enter Option: ";
      cin >> op;
      
      cout << endl;
      /*
      
      if (op == 1){
      
        cout << "addition" << endl;
      
      }
      
      
      else{
       cout << "Invalid input" << endl;
      
      }
      
      */
      
      switch(op){
      
       case 1:
         cout << "Addition of two numbers"<< endl << endl;
         
         cout << "Enter First Number: ";
         cin >> num1;
         
         cout << "Enter Second Number: ";
         cin >> num2;
         
         sum = num1 + num2;
         
         cout << endl;
         
         cout << "The Sum of two number is: " << sum;
         
         goto start;
         
       case 2:
         cout << "Subtraction of two numbers" << endl << endl;  
         
         cout << "Enter First Number: ";
         cin >> num1;
         
         cout << "Enter Second Number: ";
         cin >> num2;
         
         break;
         
         
       case 3:
         cout << "Division of two numbers" << endl << endl;  
         
         cout << "Enter First Number: ";
         cin >> num1;
         
         cout << "Enter Second Number: ";
         cin >> num2;
         
         break;  
       
       case 4:
         cout << "Multiplication of two numbers" << endl << endl;  
         
         cout << "Enter First Number: ";
         cin >> num1;
         
         cout << "Enter Second Number: ";
         cin >> num2;
         
         break;  
         
         
         
       default:
         cout << "Invalid Input" <<endl; 
         
         
         break;
      
      
      }
      
      
      
      
      
      
      




   /*

// SWITCH STATEMENT 


      int binary;
      
      
      cout << "Enter a Binary: ";
      cin >> binary;
      
      switch(binary){
        
        case 1:
          cout << "True";
          break;
      
        case 0:
          cout << "False";
          break;
          
        default:
          cout << "invalid input"; 
          break;
      
      
      }





*/



  /*

    bool male = false;
    bool famale = true;
    
    
    if (male){
    
      cout << "male";
    }
      
    else if(famale) {
       cout << "Famale";
    }
        
    else{
       cout << "invalid input";
    }
    
    
    */
    









  /*

  string x [1];
  
  
  cout << "Enter a word: ";
  
  cin >> x[0];
  
  cout << "Enter a word: ";
  
  cin >> x[1];
  
  
  cout << "your entered: " << x[0] , x[1];
  
  nah();
  */

/*
//Function adding two numbers 

float sum(float num1, float num2) {

    return num1 + num2;

}


int main() {

   float num1;
   float num2;
 
   cout << "Enter first number: ";
   cin >> num1;
   
   cout << "Enter second Number: ";
   cin >> num2;

    cout << "The Sum of two numbers is : " << sum(num1,num2);
    


*/







/*

// FUNCTIONS


int sum(int num1, int num2) {

    return num1 + num2;

}

void greatings() {

    cout << "Hello, Welcome";

}

int main() {



    cout << sum(10,20) <<endl;

    greatings();





 */


/*

    // ARRRAYS



    int numbers[10];
    numbers [4] = 100;


    cout << "Enter first Number: ";
    cin >> numbers[0];

    cout << "Enter Second Number: ";
    cin >> numbers[1];

    cout << "Enter Third Number: ";
    cin >> numbers[2];

    cout << "Enter fourth Number: ";
    cin >> numbers[3];




    cout << "The sum of all numbers is: " << numbers [0] + numbers [1] + numbers [2] + numbers [3] + numbers [4];



*/




/*

   //OUTPUT & INPUT

 int num1;
 int num2;


 cout<<"Enter first number: ";
 cin >>num1;

 cout <<"Enter Second Number: ";
 cin >>num2;

 cout << "The sum is: " << num1 + num2;
*/
return 0;
}
