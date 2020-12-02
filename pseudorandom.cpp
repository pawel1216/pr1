#include <random>

using namespace std;

int main(){
	std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(1, 6);
	return dis(gen);
}
