#ifndef CUSTOMERREQUEST_H
#define CUSTOMERREQUEST_H

#include<iostream>
using namespace std;

struct Item{
	string brand;
	string category;
	string subcategory;
	string material;
	string color;
	string description;
};

class Customer{
	public:
		Item missing;
		
		void getInput(){
			cout << "Enter details of the missing item " << endl;
			cout << "Brand Name: ";
			getline(cin,missing.brand);
			cout << "Category: ";
			getline(cin,missing.category);
			cout << "Subcategory: ";
			getline(cin,missing.subcategory);
			cout << "Material: ";
			getline(cin,missing.material);
			cout << "Color: ";
			getline(cin,missing.color);
			cout << "Description(size,looks,ect...): ";
			getline(cin,missing.description);
	
		}
		Item getItem(){
			return missing;
		}
};

#endif
