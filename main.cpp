#include <iostream>
using namespace std;
class Bank{
  public:
  string Name;
  string Id;
  double Amount;
  float Withdraw;
  float Deposit;

  Bank(string name,string id,float amount){
    Name = name;
    Id = id;
    Amount= amount;
  }

  void withDraw(float withdraw){
    Amount-=withdraw;
    cout <<"Balance After Withdraw " << Amount<<endl;
  }

  void deposited(float depos){
    Amount+=depos;
    cout << "Balance After Deposit "<<Amount<<endl;
  }
  void getInfo(){
  cout << "INFORMATION" <<endl;
  cout << "Name : " << Name << endl;
  cout << "ID : " << Id << endl;
  cout << "Amount : " << Amount << endl;
  }
};
int main() {
  string name,id;
  double amount;
  int option;
  float withdraw;
  float deposit;
  cout << "Welcome!\n";
  cout << "Enter Name\n";
  cin >> name;
  cout << "Enter Id\n";
  cin >> id;
  cout << "Enter Amount\n";
  cin >> amount;
  Bank ashwin(name,id,amount);
  cout << "1.Balance\n2.Withdraw\n3.Deposit\n4.Statement\n5.Exit\n";
  option = 0;
  while(option < 5){ 
    cin >> option;
    if(option==1){
      cout << "Your Account Balance is "<< ashwin.Amount <<endl;
    }
    if(option==2){
      cout<< "Enter Withdraw Amount : "<<endl;
      cin >> withdraw;
      if(withdraw >=200 && withdraw <= 30000){
        ashwin.withDraw(withdraw);
      }
      else{
        cout <<"Your Amount is Not Accepted"<<endl;
      }
    }
    if(option==3){
      cout << "Enter Deposit Amount :"<<endl;
      cin >> deposit;
      if(deposit <=30000){
        ashwin.deposited(deposit);
      }
      else{
        cout << "Your Deposit is Not Allowed"<<endl;
      }
    }
    if(option==4){
      ashwin.getInfo();
    }
    if(option==5){
      cout << "Succesfully Exited :)"<<endl;
      break;
    }
  }


  

}
