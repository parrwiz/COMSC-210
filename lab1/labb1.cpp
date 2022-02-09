//Programmer: Parwiz Khan
//Date: 2022/02/08
//Description: The Hailstone sequence is a sequence of numbers that starts with a number n and ends with 1.
#include <iostream>
using namespace std;
//the hailstone function declaration
void hailstone(int n, int limit, int highest, int cur);
//the main function
int main(){
    //declare variables
    int n, limit, highest, cur;
    //Initial prompt for user input
    cout<<"Number: ";
    //user input
    cin>>n;
    //loop to check if input is valid
    while(n<1){
        cout<<"Invalid number, please try again."<<endl;
        cout<<"Number: ";
        cin>>n;
    }
    //prompt for user input for limit
    cout<<"Limit of function calls: ";
    cin>>limit;
    //loop to check if limit is valid
    while(limit<1){
        cout<<"Invalid number, please try again."<<endl;
         cout<<"Limit of function calls: ";
        cin>>limit;
    }
    //call the hailstone function
    hailstone(n,cur,limit,highest);
    return 0;
}
//the hailstone function
void hailstone(int n, int limit, int highest, int cur){
  //get the highest number of n
    if(n>highest){
        highest=n;
    }
//if n is loop
   if(n==1){
       //the current number
       cur=n;
       cout<<"hailestone("<<n<<") is "<<cur<<endl;
         cout << "Highest number reached: " << highest << endl;
      return;
   }
      //when limit is gets to 0
   else if(limit==0){
    cout << "Sequence was aborted early.";
    cout << "Highest number reached: " << highest << endl;
    return;

}
//when the number is odd
else if(n%2!=0){
    
        cur=n*3+1;
        cout<<"hailstone("<<n<<") is "<<cur<<endl;
        n=n*3+1;
        limit--;
        hailstone(n, limit, highest, cur);
   }
//when the number is even
else if(n%2==0){
     cur= n/2;
        cout<<"hailstone("<<n<<") is "<<cur<<endl;
    n=n/2;
   limit--;
    hailstone(n,limit,highest,cur);
  
}

}

     