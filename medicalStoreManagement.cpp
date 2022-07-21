#include<conio.h>
#include<iostream>
using namespace std;
 class Medical
{
 public:
    int id,price,quantity;
    string medicineName,Company,Mfg_Date,     Exp_Date,info;
    void detailsofmedicine()
    {
    	cout<<"These are the details of Medicine\n"; cout<<"Name = "<<medicineName<<endl;
  cout<<" Id = "<<id<<endl;
  cout<<"Company = " <<Company<<endl; 	
 cout<<"Price of each ="<<price<<endl;
  cout<<"Available Quantity="<<quantity<<endl;
   cout<<"Mfg_Date="<<Mfg_Date<<endl;
   cout<<"Exp_Date="<<Exp_Date<<endl;
    }
    void default_details()	
    {
    	id=0;
        price=0;
        quantity=0;
         Mfg_Date="";
          Exp_Date="";
          medicineName="";
           Company="";
           info="";
      }	
    void AddMedicineinStore(int number) 
{
 cout<<"Enter Medicine Id\n";
 cin>>id;
 fflush(stdin);
 cout<<"Enter Medicine Name\n";
 fflush(stdin);
 getline(cin,medicineName);
 cout<<"Enter Company Name\n";
 fflush(stdin);
 getline(cin,Company);
 cout<<"Enter Manufactured Date\n";
 fflush(stdin);
 getline(cin,Mfg_Date);
 cout<<"Enter Expiry Date\n";
 fflush(stdin);
 getline(cin,Exp_Date);
 cout<<"Enter Quantity\n";
 fflush(stdin);
 cin>>quantity;
 cout<<"Enter Price of each item\n";
 fflush(stdin);
 cin>> price;
 info="";
 cout<<"Medicine with id "<<id<<" Added" " Successfully\n";
}
  void PurchaseMedicine() 
{
 int c,n;
 if(id!=0)
  {
 detailsofmedicine();
 if(info=="") 
 {
   cout<<"Medicine Review/Info=Not Available\n";
 }
 else 
{
 cout<<"Medicine Review/Info= "<<info<<endl;
 }
 cout<<"Do you want to purchase"" "<<medicineName<<" If Yes Enter 1 else any" " other number\n";
 fflush(stdin);
 cin>>c;
 if(c==1) 
{
 cout<<"Enter Quantity to Purchase\n";
 cin>>n;
 if(n<quantity) 
{
 cout<<"Total Price to be paid= "<<n*price<<endl;
 quantity=quantity-n;
}
 else
{
 cout<<"Please Enter quantity below Available" " Quantity\n";
}
}
}
}
void EnterInfoAboutMedicine() 
{
 int c=0;
 if(id!=0)
{
 detailsofmedicine();
 if(info!="") 
{
cout<<"Review Already Available!\nIf you want to Add a Review Enter 1 else Any other number\n";
 fflush(stdin);
 cin>>c;
}
 else 
{
cout<<"Enter your review\n";
 fflush(stdin);
 getline(cin,info);
}
 if(c==1) 
{
  string info1;
cout<<"Enter your review\n";
 fflush(stdin);
 getline(cin,info1);
 info=info+";";
  info=info+info1;
}
}
}
void StockOfMedicine()
{
	if(id!=0)
	{
		detailsofmedicine();
		 if(info!="") 
        {
            cout<<"Review or Info= "<<info<<endl;
        }
        else 
        {
           cout<<"Review or Info=Not Available\n";
         }
	}
}

};
class Medicine:public Medical
{
  public:
    Medicine(){}
    Medicine(int Id,int Price,int Quantity,string mfg_date,string exp_date,string name,string company,string Info)
    {
    		id=Id;
        price=Price;
        quantity=Quantity;
         Mfg_Date=mfg_date;
          Exp_Date=exp_date;
          medicineName=name;
           Company=company;
           info=Info;
      }	
    	
    void KnowInfoAboutMedicine()
{
	 if(id!=0)
	 {
	detailsofmedicine();
	 if(info!="") 
        {
            cout<<"Review or Info= "<<info<<endl;
        }
        else 
        {
           cout<<"Review or Info=Not Available\n";
         }
      }
}
void DeleteMedicineStore() 
{
   default_details();
 }	
 void ChangeMedicineDetails() 
{
	int choice,c;
	do 
{
 cout<<"Enter\n1 - Change Quantity\n2 - Change Price\n3 - Change Name\n4 - Change Company\n5 - Change Manufaturing Date\n6 - Change Expiry Date\n7 - Change Info\nAny other number to exit\n";
 cin>>choice;
 if(choice==1) 
{
 int Quantity=0;
 cout<<"Enter Quantity to be changed\n";
 fflush(stdin);
 cin>>Quantity;
 quantity=Quantity;
 cout<<"Quantity changed Successfully\n";
}
 if(choice==2) 
{
 int Price;
 cout<<"Enter Price to be changed\n";
 fflush(stdin);
 cin>>Price;
 price=Price;
 printf("Price changed Successfully\n");
}
 if(choice==3) 
{
 string name;
 cout<<"Enter Name to be changed\n";
 fflush(stdin);
 getline(cin,name);
 medicineName=name;
 cout<<"Medicine Name changed Successfully\n";
}
 if(choice==4) 
{
 string company;
 cout<<"Enter company to be changed\n";
 fflush(stdin);
 getline(cin,company);
 Company=company;
 cout<<"Company changed Successfully\n";
}
 if(choice==5) 
{
 string mfg;
 cout<<"Enter Manufacturing date to be" " changed\n";
 fflush(stdin);
 getline(cin,mfg);
 Mfg_Date=mfg;
 cout<<"Manufacturing Date changed" " Successfully\n";
}
 if(choice==6) 
{
 string exp;
 cout<<"Enter Expiry date to be changed\n";
 fflush(stdin);
 getline(cin,exp);
 Exp_Date=exp;
 cout<<"Expiry Date changed Successfully\n";
}
 if(choice==7) 
{
 string Info;
 cout<<"Enter Info to be changed\n";
 fflush(stdin);
 getline(cin,Info);
 info=Info;
 cout<<"Info changed Successfully\n";
}
 if(choice<=0 && choice>7) 
{
 cout<<"Enter valid Choice\n"; 
}
 cout<<"Enter 2 to Change other Details Else any other number\n";
 fflush(stdin);
 cin>>c;
}while(c==2);
}
}m[100];
  
 int main() 
{
 int i,choice,number=0,c;
 for(i=0;i<100;i++) 
{
 m[i].default_details();
}
m[0]=Medicine(1,6,30,"23/12/2020","12/11/2024","Paracetamol","ABCD","Good Medicine for Fever");
 do
{
 cout<<"Enter\n1 - Purchase Medicine\n2 - Enter Info/review about a Medicine\n3 - Know Stock of Medicine in Store\n4 -Know Medicine Information details\n5 - Add Medicine\n6 - Delete a Medicine\n7 - Change details of Medicine\n";
 cin>>choice;
 switch(choice) 
{
  case 1: 
  {
      int check,i,flag=0;
 string name;
 cout<<"Enter 1 if you know ID else any other" " number to enter Name of Medicine\n";
 fflush(stdin);
 cin>>check;
 if(check==1) 
{
   int Id;
   cout<<"Enter Id to purchase Medicine\n";
   fflush(stdin);
   cin>>Id;
   for(i=0;i<=number;i++)
   {
     if(Id==m[i].id)
     {
       m[i].PurchaseMedicine();
       flag=1;
     }
   }
     if(flag==0)
     {
         cout<<"Entered id is wrong\n";
     }
}
else 
{
   string name;
 printf("Enter Name to search and Purchase\n");
 fflush(stdin);
 getline(cin,name);
  for(i=0;i<=number;i++)
   {
     if(name==m[i].medicineName)
     {
       m[i].PurchaseMedicine();
         flag=1;
     }
   }
       if(flag==0)
       {
         cout<<"Entered name is wrong\n";
        }
}
   break;
  }
case 2: 
 {
   int i,flag=0;
 string name;
 cout<<"Enter Name of the medicine you want to" " Review or include Info\n";
 fflush(stdin);
 getline(cin,name);
 for(i=0;i<=number;i++) 
{
  if(name==m[i].medicineName)
  {
  	 m[i].EnterInfoAboutMedicine(); 
       flag=1;
  }
}
 if(flag==0)
   {
      cout<<"Entered name is not found\n";
    }
 break; 
}
case 3: 
{
  int i;
 if(number>=0) 
{
   cout<<"All Available Items are\n";
 for(i=0;i<=number;i++) 
{
   m[i].StockOfMedicine();
}
}
else
    {
      cout<<"No Items or Medicines Available\n";
    }

 break;
 }
 case 4: 
{
 int i,flag=0;
 string name;
 cout<<"Enter Name of the medicine you want to" " know Review or Info\n";
 fflush(stdin);
 getline(cin,name);
 for(i=0;i<=number;i++) 
{
       if(name==m[i].medicineName)
      {
  	 m[i]. KnowInfoAboutMedicine();
  	 flag=1;
       }
}
if(flag==0)
  {
     cout<<"Entered name is not found\n";
   }
 break;
 }
 case 5: 
{
 ++number;
 m[number].AddMedicineinStore(number);
 break; 
 }
case 6: 
{
 int Id,i,flag=0;
 cout<<"Enter Id to be deleted\n";
 fflush(stdin);
 cin>>Id;
 for(i=0;i<=number;i++) 
{
  if(Id==m[i].id)
      {
  	 m[i]. DeleteMedicineStore(); 
  	 flag=1;
       }
}
 if(flag==0)
 {
   cout<<"Entered id is not found\n";
 }
  if(flag==1) 
{
 cout<<"Medicine with "<<Id<<" is Deleted" " Successfully\n";
}
 break;
}
 case 7: 
{
  int Id,i;
 cout<<"Enter id to change Details\n";
 cin>>Id;
 for(i=0;i<=number;i++) 
{
  if((Id==m[i].id )&& (m[i].id!=0) )
      {
  	 m[i]. ChangeMedicineDetails();
      }
}
 break;
}
}
 cout<<"To Continue with other Options Enter 1" " Else any other number\n";
 cin>>c; 
}while(c==1);
return 0;
}