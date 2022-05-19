#include <iostream>

using namespace std;

class Product{
    
    protected:
            int PID;
            string PName;
            int Stocks;
            float UPrice;
            Payment * paymentP;
            Cart * cartP;
            Pharmacist * pharmacistP;
            Report * reportP;
            
    public:
            Product(int pID,string pName,int stocks,float uPrice)
            {
              
               PID = pID;
               PName = pName;
               Stocks = stocks;
               UPrice = uPrice; 
            }
            void displayProductDetails();
            void setProductDetails(int pID,string pName,int stocks,float uPrice);
            virtual int calculateExpDate();
	    void addItem();
	    void deleteItem();
	    void Restock();
};

class Medicine:public Product{
    
    private:
            int bestBefore;
            int currentDate;
            
            
    public:
            Medicine();
            Medicine(int bBefore, int CDate, int pID, string pName, int stocks, double uPrice) : Product( int pID, string pName, int stocks, double uPrice){
                bestBefore = bBefore;
                currentDate = CDate;
            }
            
            int calculateExpDate(int bestBefore,int currentDate);
};

class MedicalEquipment:public Product{
    
    private:
            string userManual;
            
    public:
            MedicalEquipment();
            
};


