#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include "CustomerRequest.h"
using namespace std;

class Warehouse{
	private:
		Item inventory[4] = { 
			{"Nike","Clothes","Hoodie","Cotton","Red","Siz XL"},
			{"Nike","Clothes","Tshirt","Cotton","black","Siz M"},
			{"Addidas","Clothes","Hoodie","Cotton","Red","Siz XL"},
			{"Nike","Shoes","Dress","Leather","Brown","Siz 8"}
		};
	int inventorySize = 4;
	
	int rankItem(Item a, Item b){
		int score = 0;
		if(a.brand == b.brand) score++;
		if(a.category == b.category) score++;
		if(a.subcategory == b.subcategory) score++;
		if(a.material == b.material) score++;
		if(a.color == b.color) score++;
		if(a.description == b.description) score++;
		return score;
		}
	
	public:
		void findMatch(Item customerItem){
			int bestScore = 0;
			int bestIndex = 0;
			for(int i = 0; i<inventorySize; i++){
				int score = rankItem(customerItem, inventory[i]);
				if(score > bestScore){
					bestScore = score;
					bestIndex = i;
				}
			}
			if(bestScore > 0 ){
				cout << "The closest item we found in the wearhouse: " <<  endl;
				cout << "Brand Name: " <<  inventory[bestIndex].brand<<  endl;
				cout << "Category: " <<  inventory[bestIndex].category<<  endl;
				cout << "Subcategory: " <<  inventory[bestIndex].subcategory<<  endl;
				cout <<"Material: " <<  inventory[bestIndex].material<<  endl;
				cout << "Color: " <<  inventory[bestIndex].color<<  endl;
				cout << "Description: " <<  inventory[bestIndex].description<<  endl;
				
				char confirmation;
				cout << "Is this your item? (y/n)";
				cin >> confirmation;
				if(confirmation == 'y'|| confirmation == 'Y'){
					cout << "The Item will be dilvierd to you in 5 to 10 business day. ";		
				}
				else{
					cout << "Looks like we were unable to locate your item. We will continue are search.";
				}
			}
			else{
				cout << "No matching item found in the wearhouse.";
			}
		}
};

#endif
	

