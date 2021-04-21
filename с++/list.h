#pragma once
#include<string>
#include<iostream>
#include<fstream>

class Item {
private:
	std::string name;
	int price;
	std::string info;
public:
	Item* next;
	Item* prev;
	Item() {
		next = NULL;
		prev = NULL;
	}
	Item(std::string name, int price, std::string info) : name(name), price(price), info(info) {
		next = NULL;
		prev = NULL;
	}
	void SetName(std::string s) {
		this->name = s;
	}
	std::string GetName() {
		return this->name;
	}
	void SetPrice(int p) {
		this->price = p;
	}
	int GetPrice() {
		return this->price;
	}

	void SetInfo(std::string s) {
		this->info = s;
	}
	std::string GetInfo() {
		return this->info;
	}
	~Item() {
	
	}
};

class List {
public:
	Item* head;
	List(Item ml){
		Item* tmp = new Item(ml);
		head = tmp;
	}


	void editPrice(int index, int value);

	Item* findItemByName(std::string name);

	Item* find(int index);

	void addItem(std::string name, int price, std::string info);

	void print();

	void printFile(std::string fileName);

	void del(int index);

	void free();


	~List() {
	}
};

