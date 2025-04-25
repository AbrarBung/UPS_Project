#include "CustomerRequest.h"
#include "Warehouse.h"

int main(){
	Customer customer;
	Warehouse warehouse;
	
	customer.getInput();
	Item missingItem = customer.getItem();
	
	warehouse.findMatch(missingItem);
	
	return 0;
}
