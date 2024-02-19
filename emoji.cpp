//Created by Jason R. Pittman 2/12/2024

#include <iostream>
//for testing
#include <vector>
#include <algorithm>



namespace emoji {

		std::string smiley {"\U0001f606"};
		std::string crying {"\U0001F62D"};
		std::string lol {"\U0001F923"};
		std::string skull {"\U0001F480"};
		std::string facepalm {"\U0001F926"};
		std::string mind_blown {"\U0001F92F"};
		std::string frown {"\U0001F641"};
		std::string sunglass_smile {"\U0001F60E"};


};


// testing area everything below should be removed
auto print_all(){
		std::vector<std::string> emojis {
			emoji::smiley,emoji::crying,emoji::lol,emoji::skull,
			emoji::facepalm,emoji::mind_blown,emoji::frown,
			emoji::sunglass_smile};
			
			return std::for_each(emojis.begin(),emojis.end(),[](auto x){std::cout << x << std::endl;});
		};


int main(){
		print_all();


		return 0;
};
