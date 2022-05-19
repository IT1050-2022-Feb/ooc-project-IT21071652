#include <iostream>
#include "Product.h"

int main() {
   
   Product *P[2];
   P[0] = new Medicine("2025","2022","001","uy","200","250.00");
   P[1] = new MedicalEquipment("002","iuy","1200","260.00");
  
  
    return 0;
}