
#include <iostream>
#include<string>
#include<fstream>
#include<ctime>
#include<iomanip>
using namespace std;


int matchpak(int overs, string Players_A[11], int four[11], int six[11], int ball[11], double s_rate[11])
{
	srand(time(0));

	cout << Players_A[0] << " and " << Players_A[1] << " are on strike.. " << endl;
	//cout<<players_B[10]<< " is bowling first ball of match!!! " << endl << endl;
	cin.get();



	int score, strikerIndex = 0, total_score = 0, n_strikerIndex = 1, next_strikerIndex = 2, extras = 0;
	int scorebaber = 0, scorerizwan = 0, scoreHafeez = 0, scoremalik = 0, scoreafridi = 0, scoreyousaf = 0, scoreajmal = 0, scoreshoaib = 0, scorerazzaq = 0, scorejunaid = 0, scorewaqar = 0;
	string striker, n_striker;
	striker = Players_A[strikerIndex];
	n_striker = Players_A[n_strikerIndex];


	srand(time(0));
	for (int i = 1; i <= overs; i++)
	{
		cin.get();
		cout << "Over:" << i << endl;                                                              //display overs
		for (int balls = 1; balls <= 6; balls++)
		{
			cout << striker;                                                                    //first batsman
			score = (rand() % 7) - 1;
			cout << ":" << score << "\t\t" << "ball:" << balls;
			cin.get();
			if (score != 1)
			{
				total_score += score;
			}
			if (striker == Players_A[0])                                                       //individual player score
			{
				if (score >= 0)
				{
					scorebaber += score;
					ball[0]++;
					s_rate[0] = ((double)scorebaber / ball[0] * 100.00);                          //boundaries(4'S and 6's) 
					if (score == 4)
						four[0]++;
					if (score == 6)
						six[0]++;

				}
				else
				{
					scorebaber += 0;
					ball[0]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!\t\t\t\t\t\t\t Bowling speed:152kph" << endl;                                        //Displaying out
					cout << "************************************" << endl;
					s_rate[0] = ((double)scorebaber / ball[0] * 100.00);

				}

			}


			//SAME CONDITIONS FOR OTHER 11 PLAYERS

			if (striker == Players_A[1])
			{
				if (score >= 0)
				{
					scorerizwan += score;
					ball[1]++;
					s_rate[1] = ((double)scorerizwan / ball[1] * 100.00);
					if (score == 4)
						four[1]++;
					if (score == 6)
						six[1]++;
				}
				else
				{
					scorerizwan += 0;
					ball[1]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[1] = ((double)scorerizwan / ball[0] * 100.00);

				}

			}


			//3

			if (striker == Players_A[2])
			{
				if (score >= 0)
				{
					scoreHafeez += score;
					ball[2]++;
					s_rate[2] = ((double)scoreHafeez / ball[2] * 100.00);
					if (score == 4)
						four[2]++;
					if (score == 6)
						six[2]++;
				}
				else
				{
					scoreHafeez += 0;
					ball[2]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[2] = ((double)scoreHafeez / ball[0] * 100.00);

				}

			}


			//4   

			if (striker == Players_A[3])
			{
				if (score >= 0)
				{
					scoremalik += score;
					ball[3]++;
					s_rate[3] = ((double)scoremalik / ball[3] * 100.00);
					if (score == 4)
						four[3]++;
					if (score == 6)
						six[3]++;
				}
				else
				{
					scoremalik += 0;
					ball[3]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[3] = ((double)scoremalik / ball[3] * 100.00);

				}

			}


			//5

			if (striker == Players_A[4])
			{
				if (score >= 0)
				{
					scoreafridi += score;
					ball[4]++;
					s_rate[4] = ((double)scorerizwan / ball[4] * 100.00);
					if (score == 4)
						four[4]++;
					if (score == 6)
						six[4]++;
				}
				else
				{
					scoreafridi += 0;
					ball[4]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[4] = ((double)scorerizwan / ball[4] * 100.00);

				}

			}

			//6

			if (striker == Players_A[5])
			{
				if (score >= 0)
				{
					scoreyousaf += score;
					ball[5]++;
					s_rate[5] = ((double)scoreyousaf / ball[5] * 100.00);
					if (score == 4)
						four[5]++;
					if (score == 6)
						six[5]++;
				}
				else
				{
					scoreyousaf += 0;
					ball[5]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[5] = ((double)scoreyousaf / ball[5] * 100.00);

				}

			}

			//7

			if (striker == Players_A[6])
			{
				if (score >= 0)
				{
					scoreajmal += score;
					ball[6]++;
					s_rate[6] = ((double)scoreajmal / ball[6] * 100.00);
					if (score == 4)
						four[6]++;
					if (score == 6)
						six[6]++;
				}
				else
				{
					scoreajmal += 0;
					ball[6]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[6] = ((double)scoreajmal / ball[0] * 100.00);

				}

			}


			//8

			if (striker == Players_A[7])
			{
				if (score >= 0)
				{
					scoreshoaib += score;
					ball[7]++;
					s_rate[7] = ((double)scoreshoaib / ball[7] * 100.00);
					if (score == 4)
						four[7]++;
					if (score == 6)
						six[7]++;
				}
				else
				{
					scoreshoaib += 0;
					ball[7]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[7] = ((double)scoreshoaib / ball[7] * 100.00);

				}

			}


			//9

			if (striker == Players_A[8])
			{
				if (score >= 0)
				{
					score += score;
					ball[8]++;
					s_rate[8] = ((double)scorerazzaq / ball[8] * 100.00);
					if (score == 4)
						four[8]++;
					if (score == 6)
						six[8]++;
				}
				else
				{
					scorerazzaq += 0;
					ball[8]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[8] = ((double)scorerazzaq / ball[8] * 100.00);

				}

			}


			//10

			if (striker == Players_A[9])
			{
				if (score >= 0)
				{
					scorejunaid += score;
					ball[9]++;
					s_rate[9] = ((double)scorejunaid / ball[9] * 100.00);
					if (score == 4)
						four[9]++;
					if (score == 6)
						six[9]++;
				}
				else
				{
					scorejunaid += 0;
					ball[9]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[9] = ((double)scorejunaid / ball[9] * 100.00);

				}

			}


			//11

			if (striker == Players_A[10])
			{
				if (score >= 0)
				{
					scorewaqar += score;
					ball[10]++;
					s_rate[10] = ((double)scorewaqar / ball[1] * 100);
					if (score == 4)
						four[10]++;
					if (score == 6)
						six[10]++;
				}
				else
				{
					scorewaqar += 0;
					ball[10]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate[10] = ((double)scorewaqar / ball[10] * 100.00);

				}

			}

			//CONDITION FOR DOT BALLS
			if (score == 0)
			{
				cout << "************************************************************" << endl;
				cout << "A yorker outside off,batsman fails to put bat to ball again." << endl;
				cout << "************************************************************" << endl;
			}
			if (score == 1 || score == 3 || score == 5)
			{

				int temp = strikerIndex;
				strikerIndex = n_strikerIndex;
				n_strikerIndex = temp;
				striker = Players_A[strikerIndex];
				n_striker = Players_A[n_strikerIndex];
			}



			if (score == -1)                                                                                    //CHANGING OF STRIKE TO OTHER PLAYER
			{
				strikerIndex = next_strikerIndex;
				next_strikerIndex++;
				striker = Players_A[strikerIndex];
				n_striker = Players_A[n_strikerIndex];
			}
			cin.get();

		}
		int temp = strikerIndex;
		strikerIndex = n_strikerIndex;
		n_strikerIndex = temp;                                                                           //changing of strike for other player
		striker = Players_A[strikerIndex];
		n_striker = Players_A[n_strikerIndex];
		//  string striker,n_striker;
		cout << "Press enter for next over" << endl;
		cin.get();
		system("clear");                                                                       //  clean screen for next over 
	}
	int x = 0;
	x = scorebaber + scorewaqar + scorerizwan + scoremalik + scorejunaid + scoreHafeez + scoreyousaf + scoreajmal + scorerazzaq + scoreshoaib + scorerazzaq + scoreafridi;

	cout << "FIRST INNINGS" << endl;

	cout << "____________________________________________________________________" << endl;
	cout << "|\t\t\tBATTING SCORECARD\t\t\t    |";
	cout << endl << "|___________________________________________________________________|" << endl;
	cout << "|BATTING\t\t\t\t R    B    4s    6S    SR   |" << endl;
	cout << "|___________________________________________________________________|" << endl;
	cout << Players_A[0] << setw(36) << scorebaber << setw(5) << ball[0] << setw(5) << four[0] << setw(6) << six[0] << setw(8) << s_rate[0] << endl;
	cout << Players_A[1] << setw(36) << scorerizwan << setw(5) << ball[1] << setw(5) << four[1] << setw(6) << six[1] << setw(8) << s_rate[1] << endl;
	cout << Players_A[2] << setw(36) << scoreHafeez << setw(5) << ball[2] << setw(5) << four[2] << setw(6) << six[2] << setw(7) << s_rate[2] << endl;
	cout << Players_A[3] << setw(37) << scoremalik << setw(5) << ball[3] << setw(5) << four[3] << setw(6) << six[3] << setw(7) << s_rate[3] << endl;
	cout << Players_A[4] << setw(36) << scoreafridi << setw(5) << ball[4] << setw(5) << four[4] << setw(6) << six[4] << setw(7) << s_rate[4] << endl;
	cout << Players_A[5] << setw(36) << scoreyousaf << setw(5) << ball[5] << setw(5) << four[5] << setw(6) << six[5] << setw(7) << s_rate[5] << endl;
	cout << Players_A[6] << setw(37) << scoreajmal << setw(5) << ball[6] << setw(5) << four[6] << setw(6) << six[6] << setw(7) << s_rate[6] << endl;
	cout << Players_A[7] << setw(31) << scoreshoaib << setw(5) << ball[7] << setw(5) << four[7] << setw(6) << six[7] << setw(7) << s_rate[7] << endl;
	cout << Players_A[8] << setw(31) << scorerazzaq << setw(5) << ball[8] << setw(5) << four[8] << setw(6) << six[8] << setw(7) << s_rate[8] << endl;
	cout << Players_A[9] << setw(31) << scorejunaid << setw(5) << ball[9] << setw(5) << four[9] << setw(6) << six[10] << setw(7) << s_rate[9] << endl;
	cout << Players_A[10] << setw(37) << scorewaqar << setw(5) << ball[10] << setw(5) << four[10] << setw(6) << six[10] << setw(7) << s_rate[10] << endl;
	cout << "______________________________________________________________________" << endl;
	cout << "|TOTAL SCORE:" << x << setw(34) << "EXTRAS:" << extras << setw(20) << " |" << endl;
	cout << "|____________________________________________________________________|" << endl;

	return x;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
																	//SAME CONDITIONS LIKE IN FIRST ONE
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int matchall(int overs, string players_B[11], int four_1[11], int six_1[11], int ball_1[11], double s_rate_1[11])
{

	srand(time(0));
	cout << "Press Enter to continue..." << endl;
	cin.get();
	system("clear");

	cout << players_B[0] << " and " << players_B[1] << " are on strike.. " << endl;
	cin.get();

	int score_1, strikerIndex_1 = 0, total_score_1 = 0, n_strikerIndex_1 = 1, next_strikerIndex_1 = 2, extras_1 = 0;
	int score0 = 0, score1 = 0, score2 = 0, score3 = 0, score4 = 0, score5 = 0, score6 = 0, score7 = 0, score8 = 0, score9 = 0, score_9 = 0;
	string striker_1, n_striker_1;
	striker_1 = players_B[strikerIndex_1];
	n_striker_1 = players_B[n_strikerIndex_1];


	srand(time(0));
	for (int i = 1; i <= overs; i++)
	{
		cin.get();
		cout << "Over:" << i << endl;                                                                            //display overs
		for (int balls_1 = 1; balls_1 <= 6; balls_1++)
		{
			cout << striker_1;                                                                             //first batsman
			score_1 = (rand() % 7) - 1;
			cout << ":" << score_1 << "\t\t" << "ball:" << balls_1;
			cin.get();
			if (score_1 != 1)
			{
				total_score_1 += score_1;
			}
			if (striker_1 == players_B[0])
			{
				if (score_1 >= 0)
				{
					score0 += score_1;
					ball_1[0]++;
					s_rate_1[0] = ((double)score0 / ball_1[0] * 100.00);
					if (score_1 == 4)
						four_1[0]++;
					if (score_1 == 6)
						six_1[0]++;

				}
				else
				{
					score0 += 0;
					ball_1[0]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[0] = ((double)score0 / ball_1[0] * 100.00);

				}

			}

			//2

			if (striker_1 == players_B[1])
			{
				if (score_1 >= 0)
				{
					score1 += score_1;
					ball_1[1]++;
					s_rate_1[1] = ((double)score1 / ball_1[1] * 100.00);
					if (score_1 == 4)
						four_1[1]++;
					if (score_1 == 6)
						six_1[1]++;

				}
				else
				{
					score1 += 0;
					ball_1[1]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[1] = ((double)score1 / ball_1[1] * 100.00);

				}

			}

			//3

			if (striker_1 == players_B[2])
			{
				if (score_1 >= 0)
				{
					score2 += score_1;
					ball_1[0]++;
					s_rate_1[2] = ((double)score2 / ball_1[2] * 100.00);
					if (score_1 == 4)
						four_1[2]++;
					if (score_1 == 6)
						six_1[2]++;

				}
				else
				{
					score2 += 0;
					ball_1[0]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[2] = ((double)score2 / ball_1[0] * 100.00);

				}

			}

			/////4

			if (striker_1 == players_B[3])
			{
				if (score_1 >= 0)
				{
					score3 += score_1;
					ball_1[3]++;
					s_rate_1[3] = ((double)score0 / ball_1[3] * 100.00);
					if (score_1 == 4)
						four_1[3]++;
					if (score_1 == 6)
						six_1[3]++;

				}
				else
				{
					score3 += 0;
					ball_1[3]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[3] = ((double)score0 / ball_1[3] * 100.00);

				}

			}

			//5



			if (striker_1 == players_B[4])
			{
				if (score_1 >= 0)
				{
					score4 += score_1;
					ball_1[4]++;
					s_rate_1[4] = ((double)score4 / ball_1[4] * 100.00);
					if (score_1 == 4)
						four_1[4]++;
					if (score_1 == 6)
						six_1[4]++;

				}
				else
				{
					score4 += 0;
					ball_1[4]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[4] = ((double)score4 / ball_1[4] * 100.00);

				}

			}


			//6

			if (striker_1 == players_B[5])
			{
				if (score_1 >= 0)
				{
					score5 += score_1;
					ball_1[5]++;
					s_rate_1[5] = ((double)score5 / ball_1[5] * 100.00);
					if (score_1 == 4)
						four_1[5]++;
					if (score_1 == 6)
						six_1[5]++;

				}
				else
				{
					score5 += 0;
					ball_1[5]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[5] = ((double)score5 / ball_1[5] * 100.00);

				}

			}

			//7

			if (striker_1 == players_B[6])
			{
				if (score_1 >= 0)
				{
					score6 += score_1;
					ball_1[6]++;
					s_rate_1[6] = ((double)score6 / ball_1[6] * 100.00);
					if (score_1 == 4)
						four_1[6]++;
					if (score_1 == 6)
						six_1[6]++;

				}
				else
				{
					score6 += 0;
					ball_1[6]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[6] = ((double)score6 / ball_1[6] * 100.00);

				}

			}
			//8


			if (striker_1 == players_B[7])
			{
				if (score_1 >= 0)
				{
					score7 += score_1;
					ball_1[7]++;
					s_rate_1[7] = ((double)score7 / ball_1[7] * 100.00);
					if (score_1 == 4)
						four_1[7]++;
					if (score_1 == 6)
						six_1[7]++;

				}
				else
				{
					score7 += 0;
					ball_1[7]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[7] = ((double)score7 / ball_1[7] * 100.00);

				}

			}

			//9

			if (striker_1 == players_B[8])
			{
				if (score_1 >= 0)
				{
					score8 += score_1;
					ball_1[8]++;
					s_rate_1[8] = ((double)score8 / ball_1[8] * 100.00);
					if (score_1 == 4)
						four_1[8]++;
					if (score_1 == 6)
						six_1[8]++;

				}
				else
				{
					score8 += 0;
					ball_1[8]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[8] = ((double)score8 / ball_1[8] * 100.00);

				}

			}

			//10


			if (striker_1 == players_B[9])
			{
				if (score_1 >= 0)
				{
					score9 += score_1;
					ball_1[9]++;
					s_rate_1[9] = ((double)score9 / ball_1[9] * 100.00);
					if (score_1 == 4)
						four_1[9]++;
					if (score_1 == 6)
						six_1[9]++;

				}
				else
				{
					score9 += 0;
					ball_1[9]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[9] = ((double)score9 / ball_1[9] * 100.00);

				}

			}
			//11        

			if (striker_1 == players_B[10])
			{
				if (score_1 >= 0)
				{
					score_9 += score_1;
					ball_1[9]++;
					s_rate_1[9] = ((double)score9 / ball_1[9] * 100.00);
					if (score_1 == 4)
						four_1[9]++;
					if (score_1 == 6)
						six_1[9]++;

				}
				else
				{
					score_9 += 0;
					ball_1[9]++;
					cout << "************************************" << endl;
					cout << "            OUT!!!" << endl;
					cout << "************************************" << endl;
					s_rate_1[9] = ((double)score_9 / ball_1[9] * 100.00);

				}

			}


			if (score_1 == 0)
			{
				cout << "************************************************************" << endl;
				cout << "A yorker outside off,batsman fails to put bat to ball again." << endl;
				cout << "************************************************************" << endl;
			}
			if (score_1 == 1 || score_1 == 3 || score_1 == 5)
			{

				int temp_1 = strikerIndex_1;
				strikerIndex_1 = n_strikerIndex_1;
				n_strikerIndex_1 = temp_1;
				striker_1 = players_B[strikerIndex_1];
				n_striker_1 = players_B[n_strikerIndex_1];
			}



			if (score_1 == -1)
			{
				strikerIndex_1 = next_strikerIndex_1;
				next_strikerIndex_1++;
				striker_1 = players_B[strikerIndex_1];
				n_striker_1 = players_B[n_strikerIndex_1];
			}
			cin.get();


		}
		int temp_1 = strikerIndex_1;
		strikerIndex_1 = n_strikerIndex_1;
		n_strikerIndex_1 = temp_1;
		striker_1 = players_B[strikerIndex_1];
		n_striker_1 = players_B[n_strikerIndex_1];
		cout << "Press enter for next over" << endl;
		cin.get();
		system("clear");                                                                       //  clean screen for next over 
		//  string striker,n_striker;
	}
	int y = 0;
	y = score0 + score1 + score2 + score3 + score4 + score5 + score6 + score7 + score8 + score9 + score_9;

	cout << "FIRST INNINGS" << endl;

	cout << "____________________________________________________________________" << endl;
	cout << "|\t\t\tBATTING SCORECARD\t\t\t    |";
	cout << endl << "|___________________________________________________________________|" << endl;
	cout << "|BATTING\t\t\t\t R    B    4s    6S    SR   |" << endl;
	cout << "|___________________________________________________________________|" << endl;
	cout << players_B[0] << setw(34) << score0 << setw(5) << ball_1[0] << setw(5) << four_1[0] << setw(6) << six_1[0] << setw(8) << s_rate_1[0] << endl;
	cout << players_B[1] << setw(32) << score1 << setw(5) << ball_1[1] << setw(5) << four_1[1] << setw(6) << six_1[1] << setw(8) << s_rate_1[1] << endl;
	cout << players_B[2] << setw(32) << score2 << setw(5) << ball_1[2] << setw(5) << four_1[2] << setw(6) << six_1[2] << setw(7) << s_rate_1[2] << endl;
	cout << players_B[3] << setw(29) << score3 << setw(5) << ball_1[3] << setw(5) << four_1[3] << setw(6) << six_1[3] << setw(7) << s_rate_1[3] << endl;
	cout << players_B[4] << setw(35) << score4 << setw(5) << ball_1[4] << setw(5) << four_1[4] << setw(6) << six_1[4] << setw(7) << s_rate_1[4] << endl;
	cout << players_B[5] << setw(35) << score5 << setw(5) << ball_1[5] << setw(5) << four_1[5] << setw(6) << six_1[5] << setw(7) << s_rate_1[5] << endl;
	cout << players_B[6] << setw(33) << score6 << setw(5) << ball_1[6] << setw(5) << four_1[6] << setw(6) << six_1[6] << setw(7) << s_rate_1[6] << endl;
	cout << players_B[7] << setw(35) << score7 << setw(5) << ball_1[7] << setw(5) << four_1[7] << setw(6) << six_1[7] << setw(7) << s_rate_1[7] << endl;
	cout << players_B[8] << setw(36) << score8 << setw(5) << ball_1[8] << setw(5) << four_1[8] << setw(6) << six_1[8] << setw(7) << s_rate_1[8] << endl;
	cout << players_B[9] << setw(37) << score9 << setw(5) << ball_1[9] << setw(5) << four_1[9] << setw(6) << six_1[10] << setw(7) << s_rate_1[9] << endl;
	cout << players_B[10] << setw(37) << score_9 << setw(5) << ball_1[10] << setw(5) << four_1[10] << setw(6) << six_1[10] << setw(7) << s_rate_1[10] << endl;
	cout << "______________________________________________________________________" << endl;
	cout << "|TOTAL SCORE:" << y << setw(34) << "EXTRAS:" << extras_1 << setw(20) << " |" << endl;
	cout << "|____________________________________________________________________|" << endl;

	return y;

}


int main()
{

	//welcome message+menu


	cout << "---------------------------------------------" << endl;
	cout << "|================ 𝔽𝔸𝕊𝕋ℕ𝕌 =================|" << endl;
	cout << "|                                           |" << endl;
	cout << "|       WELCOME TO FAST CRICKET GAME        |" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "\n\n";

	//MAIN MENU

	cout << "-----------------------------------------------------" << endl;
	cout << "|=================== ℜULES =========================|" << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "|                                                   |" << endl;
	cout << "| 1. Make your own teams of 11 from given set of    |" << endl;
	cout << "|               legendary players.                  |" << endl;
	cout << "| 2. Flip coin to toss and choose to bat/ball       |" << endl;
	cout << "| 3. Input number of overs                          |" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "Press Enter to continue..." << endl;
	cin.get();
	system("clear");
	cout << "\n\n";

	//ASK OVERS

	int overs = 0, toss = 0;

	ofstream match;
	match.open("Configuration.txt");
	match << "HOW MANY OVERS MATCH YOU WANNA PLAY?" << endl;
	// ifstream match;
	 //match>>overs;
	   //  match.close();
	cout << "|================= 0VERS =================|" << endl;
	cout << "How many overs match you want to play" << endl;
	cin >> overs;
	match << overs;
	cout << "-----------------------------------------" << endl;
	cout << "|========== STREAM OF PLAYERS ==========|" << endl;
	cout << "-----------------------------------------" << endl;
	cout << endl;

	//SHOWCASING TEAMS         

	string Players_A[11];

	Players_A[0] = "Babar ";
	Players_A[1] = "Rizwan";
	Players_A[2] = "Hafeez";
	Players_A[3] = "Malik";
	Players_A[4] = "Afridi";
	Players_A[5] = "Yousaf";
	Players_A[6] = "Ajmal";
	Players_A[7] = "ShoaibAkter";
	Players_A[8] = "AbdulRazzaq";
	Players_A[9] = "Junaid Khan";
	Players_A[10] = "Waqar";

	string players_B[11];

	players_B[0] = "Richards";
	players_B[1] = "Ponting(c)";
	players_B[2] = "Brian Lara";
	players_B[3] = "Jeffery Dujon";
	players_B[4] = "Symonds";
	players_B[5] = "Miandad";
	players_B[6] = "Dhoni(wk)";
	players_B[7] = "Nawaz.S";
	players_B[8] = "Holder";
	players_B[9] = "Boult";
	players_B[10] = "Starc";

	//Displaying teams

	cout << "--------------------------\t\t----------------------------------------" << endl;
	cout << "|=======  Team-PAKISTAN  ======|\t\t|=======  Team-ALLSTARS  ========|" << endl;
	cout << "--------------------------\t\t----------------------------------------" << endl;
	for (int i = 0; i < 11; i++)
	{

		cout << "[" << i << "] " << Players_A[i] << "\t\t\t\t\t[" << i << "] " << players_B[i] << endl;
	}


	//TOSS IN MAIN BY RAND FUNCTION


//set a random seed generator

	srand(time(0));
	cout << endl << "____________________________________" << endl;

	cout << endl << "|===============TOSS================|" << endl;
	cout << "_____________________________________" << endl;
	cout << endl;
	cout << "****TOSSING THE COIN...****" << endl;
	cout << endl;
	cout << "PRESS ENTER TO CONTINUE" << endl;
	cin.get();

	int options = 0, choice = 0;
	toss = 1 + rand() % 2; ;


	//IF PAKISTAN TEAM WINS

	if (toss == 1)
	{
		cout << "Pakistan won the toss and choose to:" << endl << "(0)Bat\n(1)Bowl" << endl;
		cin >> choice;

		//BATTING CHOICE

		if (choice == 0)
		{
			cout << "Pakistan won the toss and chooses to bat first" << endl;

			cin.get();
			system("clear");

			cout << "\t\t |||||| LET's START FIRST INNINGS  |||||| " << endl << endl;
			double s_rate[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int ball[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int four[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int six[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int p;
			p = matchpak(overs, Players_A, four, six, ball, s_rate);
			cout << "Pakistan scored " << p << " runs in " << overs << " overs " << endl;

			cin.get();
			system("clear");                                                                      //2nd innings
			cout << "\t\t |||||| LET's START second INNINGS  |||||| " << endl << endl;
			int ball_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			double s_rate_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int four_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int six_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int  v = matchall(overs, players_B, four_1, six_1, ball_1, s_rate_1);

			cout << "ALL-STARS scored " << v << " runs in " << overs << " overs." << endl;
			cout << "************************************************************************" << endl;
			if (p > v)
				cout << "Pakistan beat ALL-STARS BY " << p - v << " runs" << endl;
			else
				cout << "ALL-STARS beat Pakistan BY " << v - p << " runs" << endl;
			cout << "************************************************************************" << endl;




		}




		//BOWLING CHOICE 

		else
		{
			cout << "Pakistan won the toss and chooses to bowl first" << endl;
			cin.get();
			system("clear");

			cout << "\t\t |||||| LET's START FIRST INNINGS  |||||| " << endl << endl;
			int ball_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int four_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int six_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			double s_rate_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int  v = matchall(overs, players_B, four_1, six_1, ball_1, s_rate_1);
			cout << "ALL-STARS scored " << v << " runs in " << overs << " overs." << endl;

			//2ND INNINGS

			cout << "\t\t |||||| LET's START SECOND INNINGS  |||||| " << endl << endl;
			double s_rate[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int ball[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int four[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int six[11] = { 0,0,0,0,0,0,0,0,0,0,0 };

			int p;
			p = matchpak(overs, Players_A, four, six, ball, s_rate);
			cout << "Pakistan scored " << p << " runs in " << overs << " overs." << endl;

			cout << "************************************************************************" << endl;
			if (p > v)
				cout << "Pakistan beat ALL-STARS BY " << p - v << " runs" << endl;
			else
				cout << "ALL-STARS beat Pakistan BY " << v - p << " runs" << endl;
			cout << "************************************************************************" << endl;


		}

	}




	//ALLSTARS WINS TOSS



	else
	{
		cout << "All StARS won the toss and choose to:" << endl << "(0)Bat\n(1)Bowl" << endl;
		cin >> choice;


		//BATING CHOICE
		if (choice == 0)
		{
			cout << "ALLSTARS won the toss and chooses to bat first" << endl;

			cin.get();
			system("clear");

			int ball_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int four_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int six_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			double s_rate_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int v = matchall(overs, players_B, four_1, six_1, ball_1, s_rate_1);
			cout << "ALL-STARS scored " << v << " runs in " << overs << " overs." << endl << endl;


			//2ND INNINGS
			cout << "\t\t |||||| LET's START SECOND INNINGS  |||||| " << endl << endl;
			cin.get();
			system("clear");

			double s_rate[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int ball[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int four[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int six[11] = { 0,0,0,0,0,0,0,0,0,0,0 };

			int p;
			p = matchpak(overs, Players_A, four, six, ball, s_rate);
			cout << "PAKISTAN scored " << p << " runs in " << overs << " overs." << endl << endl;

			cout << "************************************************************************" << endl;
			if (p > v)
				cout << "Pakistan beat ALL-STARS BY " << p - v << " runs" << endl;
			else
				cout << "ALL-STARS beat Pakistan BY " << v - p << " runs" << endl;
			cout << "************************************************************************" << endl;



		}

		//BOWLING CHOICE
		else
		{
			cout << "ALLSTARS won the toss and chooses to bOwl first" << endl;
			cin.get();
			system("clear");
			cout << "\t\t |||||| LET's START FIRST INNINGS  |||||| " << endl << endl;

			double s_rate[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int ball[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int four[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int six[11] = { 0,0,0,0,0,0,0,0,0,0,0 };


			int p;
			p = matchpak(overs, Players_A, four, six, ball, s_rate);
			cout << "Pakistan scored " << p << " runs in " << overs << " overs." << endl << endl;
			//2ND INNINGS
			cout << "\t\t |||||| LET's START SECOND INNINGS  |||||| " << endl << endl;
			int ball_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int four_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int six_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			double s_rate_1[11] = { 0,0,0,0,0,0,0,0,0,0,0 };
			int   v = matchall(overs, players_B, four_1, six_1, ball_1, s_rate_1);
			cout << "ALL-STARS scored " << v << " runs in " << overs << " overs." << endl << endl;

			cout << "************************************************************************" << endl;
			if (p > v)
				cout << "Pakistan beat ALL-STARS BY " << p - v << " runs" << endl;
			else
				cout << "ALL-STARS beat Pakistan BY " << v - p << " runs" << endl;
			cout << "************************************************************************" << endl;


		}
	}





	//set a random seed generator



}



