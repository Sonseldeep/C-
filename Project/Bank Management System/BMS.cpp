#include <bits/stdc++.h>
using namespace std;
class Bank_Account
{

private:
  long int account_number;
  char name[100];
  char type;
  long long int Money_deposite;

public:
  int retacno() const
  {
    return account_number;
  }
  void Create_Account();
  void Display_Account();
};
void Bank_Account::Create_Account(void)
{

  cout << "\t enter the account number: ";
  cin >> account_number;
  cout << "enter account holder name: ";
  cin.ignore();
  cin.getline(name, sizeof(name));
  cout << "enter the type of account (C/S): ";
  cin >> type;
  type = toupper(type);
  cout << "enter the initial ammount (>=500 for saving and >= 1000 for current)";
  cin >> Money_deposite;
}

void Bank_Account::Display_Account()
{

  cout << "\t Account Number: " << account_number << endl;
  cout << "\t Accout Holder Name: " << name << endl;
  cout << "\t Type of account: " << type << endl;
  cout << "\t Balance Ammount: " << Money_deposite << endl;
  cout << "\n\n Account created Successfully! \n\n";
}
void write_account()
{

  Bank_Account acc;
  ofstream outFile;
  outFile.open("account.dat", ios::binary | ios::app);
  acc.Create_Account();
  outFile.write(reinterpret_cast<char *>(&acc), sizeof(Bank_Account));
  outFile.close();
}

int delete_account(int n)
{
  Bank_Account acc;
  ifstream inFile;
  ofstream outFile;
  inFile.open("account.dat", ios::binary);
  if (!inFile)
  {
    cout << "file not opened" << endl;
    return 1;
  }
  outFile.open("Temp.dat", ios::binary);
  inFile.seekg(0, ios::beg);
  while (inFile.read(reinterpret_cast<char *>(&acc), sizeof(Bank_Account)))
  {

    if (acc.retacno() != n)
    {

      outFile.write(reinterpret_cast<char *>(&acc), sizeof(Bank_Account));
    }
  }
  inFile.close();
  outFile.close();
  remove("Bank_Account.dat");
  rename("Temp.dat", "Bank_Account.dat");
  cout << "Record has been deleted" << endl;
}
int main()
{

  int ch;
  int num;
  cout << "\t \t-----------------------------------------" << endl;
  cout << "\t \t | Welcome to the Bank Management System |" << endl;
  cout << "\t \t-----------------------------------------" << endl;
  cout << endl;
  cout << "\t --- Main Menu ---" << endl;
  cout << "1.Create Account" << endl;
  cout << "\t 2.Deposite Money" << endl;
  cout << "\t 3.Withdraw Money" << endl;
  cout << "\t 4.Balance Enquiry" << endl;
  cout << "\t 5.All Account holder list" << endl;
  cout << "\t 6.Close an Account" << endl;
  cout << "\t 7.Modify an Account" << endl;
  cout << "\t 8.Exit" << endl;
  cout << endl;
  cout << "entre the choice (1-8):";
  cin >> ch;

  switch (ch)
  {

  case 1:

    break;
  case 2:
    cout << "enter the account number: ";
    cin >> num;
    write_account();
    // deposite function

    break;
  case 3:
    cout << "enter the number: ";
    // withdraw function

    break;
  case 4:

    cout << "Enter the account number: ";
    cin >> num;
    // balance enqury function;

    break;
  case 5:

    break;
  case 6:
    cout << "enter the account number: ";
    cin >> num;
    // close function
    break;

  case 7:
    cout << "enter the account number: ";
    cin >> num;
    break;

  case 8:
    cout << "Thanks for using Bank Management System" << endl;
    break;
  }

  // return 0;
}
