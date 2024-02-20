//Created by Jason R. Pittman 2/12/2024


//for testing
#include <vector>
#include <algorithm>
#include <iostream>


namespace emoji {

		std::string smiley {"\U0001f606"};
		std::string crying {"\U0001F62D"};
		std::string lol {"\U0001F923"};
		std::string skull {"\U0001F480"};
		std::string facepalm {"\U0001F926"};
		std::string mind_blown {"\U0001F92F"};
		std::string frown {"\U0001F641"};
		std::string sunglass_smile {"\U0001F60E"};
		std::string zipper_mouth {"\U0001F910"};
		std::string drool_face {"\U0001F924"};
		std::string sleeping_face {"\U0001F634"};
		std::string puke_face {"\U0001F92E"};
		std::string angry_face {"\U0001F621"};
		std::string bull_shit_face {"\U0001F92C"};
		std::string poop_face {"\U0001F4A9"};


};

auto print_all(){
		std::vector<std::string> emojis {
			emoji::smiley,emoji::crying,emoji::lol,emoji::skull,
			emoji::facepalm,emoji::mind_blown,emoji::frown,
			emoji::sunglass_smile,emoji::zipper_mouth,emoji::drool_face,
			emoji::sleeping_face,emoji::puke_face,emoji::angry_face,
			emoji::bull_shit_face,emoji::poop_face
		};
			
			return std::for_each(emojis.begin(),emojis.end(),[](auto x){std::cout << x << std::endl;});
		};


