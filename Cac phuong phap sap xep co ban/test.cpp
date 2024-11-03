#include<iostream>
#include<string>
int x;
void alterX(){
	x = 3;
}

int main(){
	x = 2;
	std::cout<<x<<std::endl;
	alterX();
	std::cout<<x<<std::endl;
}
