#include <string>
/*************************************************
 * The header file for Highscore.cpp. This header initializes
 * functions in Highscore.cpp as well as some integers used such as score and rank.
 *
 * @author Ben Townsend
 * @date 10-5-2018
 *************************************************/
class Highscore {

	public:
		
		Highscore();

		Highscore(int score);//, std::string initials);

		int getScore();
		std::string getInitials();
		int getRank();
		

	
	private:

		int score;
		//std::string initials;
		int rank;
		int findRank(int score);

};
