#include <random>
#include <iostream>

using namespace std;

int main(){
	std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(1, 6);
	for(int i=0; i<10; i++)
		cout<<dis(gen);
}
