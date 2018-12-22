#include<iostream>
#include<Windows.h>           //sound
#include<MMSystem.h>         // sound
#include<string>
#include<fstream>           //files
#include<ctime>
#include"Questions.h"
using namespace std;
Questions ques;
void Welcome();
void MillionareStart();
void text_animation(char a[100]);
void main() {
	Welcome();
	ques.List();
	ques.Getquestions();
	MillionareStart();
}

void Welcome()
{
	    system("color F2");
	    cout << endl << endl << endl << endl<<endl<<endl;
	    cout << "                                     $$$$$$                                                                       "<< endl;
		cout << "                                    $$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                 $$$$$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                $$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                  $$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                     $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                     $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                     $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                     $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                     $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                     $$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                     $$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                     $$$$$$																	 " << endl;
		Sleep(300);
		system("cls");
		cout << endl << endl << endl << endl << endl << endl;
		cout << "                               $$$$$$$$$$$$$$$$$$ " << endl;
		cout << "                               $$$$$$$$$$$$$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                          $$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                          $$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                          $$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                          $$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                               $$$$$$$$$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                               $$$$$$$$$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                          $$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                          $$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                          $$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                               $$$$$$$$$$$$$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                               $$$$$$$$$$$$$$$$$$			 " << endl;
		Sleep(300);
		system("cls");
		cout << endl << endl << endl << endl << endl << endl;
		cout << "                                $$$$$$$$$$$$$$$$$$               " << endl;
		cout << "                                $$$$$$$$$$$$$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                $$$$$$$                 $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                $$$$$$$                 $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                $$$$$$$$$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                $$$$$$$$$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                $$$$$$$$$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                             $$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                             $$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                             $$$$$      $$$$$        $$$$$    $$$$$        $$$$$" << endl;
		cout << "                                             $$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                $$$$$$$$$$$$$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                                $$$$$$$$$$$$$$$$$$				" << endl;
		Sleep(300);
		system("cls");
		cout << endl << endl << endl << endl << endl << endl;
		cout << "                             $$$$$$                                                                       " << endl;
		cout << "                            $$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                         $$$$$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                        $$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                          $$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                             $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                             $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                             $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                             $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                             $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                             $$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                             $$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                             $$$$$$																	 " << endl;
		Sleep(300);
		system("cls");
		cout << endl << endl << endl << endl << endl << endl;
		cout << "                     $$$$$$$$$$$$$$$$$$$                                  " << endl;
		cout << "                     $$$$$$$$$$$$$$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                     $$$$$$       $$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                     $$$$$$       $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                     $$$$$$       $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                     $$$$$$       $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                     $$$$$$$$$$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                     $$$$$$$$$$$$$$$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                     $$$$$$       $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                     $$$$$$       $$$$$$      $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                     $$$$$$       $$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                     $$$$$$$$$$$$$$$$$$$      $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                     $$$$$$$$$$$$$$$$$$$								 " << endl;
		Sleep(300);
		system("cls");
		cout << endl << endl << endl << endl << endl << endl;
		cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$                                " << endl;
		cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                              $$$$$$$ $$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                              $$$$$$$            $$$$$$$     $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                              $$$$$$$            $$$$$$$     $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                              $$$$$$$            $$$$$$$     $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$     $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$     $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                              $$$$$$$ $$$$$$                 $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                              $$$$$$$ $$$$$$                 $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                              $$$$$$$ $$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$     $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$									 " << endl;
		Sleep(300);
		system("cls");
		cout << endl << endl << endl << endl << endl << endl;
		cout << "       $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$                                 " << endl;
		cout << "       $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "       $$$$$$$$$$$$$$$$$$ $$$$$$$              $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "                  $$$$$$$ $$$$$$$              $$$$$        $$$$$    $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                  $$$$$$$ $$$$$$$$$$$$$$$$$$   $$$$$        $$$$$    $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "                  $$$$$$$ $$$$$$$$$$$$$$$$$$   $$$$$        $$$$$    $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "       $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$   $$$$$        $$$$$    $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "       $$$$$$$$$$$$$$$$$$              $$$$$   $$$$$        $$$$$    $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "       $$$$$$                          $$$$$   $$$$$        $$$$$    $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "       $$$$$$                          $$$$$   $$$$$        $$$$$    $$$$$        $$$$$    $$$$$        $$$$$   $$$$$        $$$$$" << endl;
		cout << "       $$$$$$$$$$$$$$$$$$              $$$$$   $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "       $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$$$$$$   $$$$$$$$$$$$$$$$$$" << endl;
		cout << "       $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$									 " << endl;
		Sleep(300);
		system("cls");
		cout << endl << endl << endl << endl << endl << endl;
		cout << "          $$$$$$                                         " << endl;
		cout << "         $$$$$$$  $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$" << endl;
		cout << "      $$$$$$$$$$  $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$" << endl;
		cout << "     $$$$$$$$$$$  $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$" << endl;
		cout << "       $$$$$$$$$  $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$" << endl;
		cout << "          $$$$$$  $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$" << endl;
		cout << "          $$$$$$  $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$" << endl;
		cout << "          $$$$$$  $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$" << endl;
		cout << "          $$$$$$  $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$" << endl;
		cout << "          $$$$$$  $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$ $$$$$        $$$$$" << endl;
		cout << "          $$$$$$  $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$" << endl;
		cout << "          $$$$$$  $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$" << endl;
		cout << "          $$$$$$  										 " << endl;
		Sleep(500);
		system("cls");
		
		
}



void MillionareStart()
{
	system("color F0");   
	cout << endl << endl << endl<<endl;
	              
	    cout << "                                   *************    ************    ****        ****    **************       " << endl;
		cout << "                                   *************    ***      ***    ****        ****    **************       " << endl;
		cout << "                                   ****             ***      ***    *****      *****    ****                 " << endl;
		cout << "                                   ****    *****    ***      ***    ******    ******    ****                 " << endl;
		cout << "                                   ****    *****    ************    ****************    **************       " << endl;
		cout << "                                   ****      ***    ************    **** ****** ****    ****                 " << endl;
		cout << "                                   ****      ***    ***      ***    ****  ****  ****    ****                 " << endl;
	    cout << "                                   *************    ***      ***    ****   **   ****    **************       " << endl;
		cout << "                                   *************    ***      ***    ****        ****    **************       "<<endl;
		
		
	char x;
	cout << endl << endl;
    cout <<"                                                    ";
	text_animation("Who Wants to be a millionaire $ ?");  
	cout << endl << endl ;
	PlaySound(TEXT("start.wav"), NULL, SND_SYNC);
	cout << "\t\t\t 1-Start" << "	\t\t	" << "2-Rules" << "		\t\t	" << "3-EXit" << endl;
	cout << endl <<endl << endl  <<"choose : ";
		cin >> x;
	while (true) {
		if (x == '1' || x == '2' || x == '3') {
			if (x == '1') {                                   //start the game
				ques.MillionaireQuestions();
				break;
			}
			else if (x == '2') {
				system("color FC");   // F white , C red  
				system("cls");
				cout << "1.Play individually" << endl;
				cout << "2.There are 15 questions in total and each question is worth a specific amount of money." << endl;
				cout << "3.The Who Wants to Be a Millionaire questions are structured according to five different Levels "
					<< endl << "with each level increasing in difficulty. Each level contains three questions." << endl;
				cout << "4.Questions that are grouped into the same level will all be of similar difficulty. For example: Questions 1-3 make up the first "
					<< endl << "Level and will contain the easiest questions. The second Level (Questions 4 to 6) will be slightly more difficult" << endl
					<< " followed by the third Level (Questions 7 to 9). The fourth Level (Questions 10 to 12) will consist of really difficult questions,"
					<< endl << " followed by the fifth, and last level (Questions 13 to 15) that will pose the most difficult questions of the game." << endl;
				cout << "5.There are three 'safe havens' in the question structure (Questions five, ten and fifteen)."
					<< endl << " Contestants accumulate money with each correct answer, but should the they"
					<< endl << " answer incorrectly before reaching a safe haven, they stand to lose a large amount of winnings. " << endl;
				cout << "6.(Question 5 - $1,000 Safe Haven), if you get the question wrong, you leave with nothing."
					<< endl << " If this question is answered correctly, you are guaranteed $1,000 "
					<< endl << "even if the answer incorrectly before reaching the next safe haven at Question 10." << endl;
				cout << "7.(Question 10 - $32,000 Safe Haven),If contestants get this question wrong, they leave with $1,000."
					<< endl << " If this question is answered correctly, you are guaranteed $32,000"
					<< endl << " even if the answer incorrectly before reaching Question 15." << endl;
				cout << "8.Contestants are allowed three Lifelines that they can use at any point during the game. Each Lifeline can only be used once."
					<< endl << "50 / 50 - eliminates one correct and one incorrect answer from the multiple - choice selection,"
					<< endl << " leaving the contestant with only one correct and one incorrect option.This means they have a 50 / 50 chance ,press(F or f) to use it." << endl;
				cout << "9.Ask the Audience - the audience is asked the same question as the contestant and a quick poll is done to show their answers."
					<< endl << " If the chart shows a clear majority for a specific answer, this Lifeline can be extremely helpful,"
					<< endl << " but it's still up to the contestant whether or not to go with the results obtained from the audience, press( U or u ) to use it." << endl;
				cout << "10.Phone a Friend – Contestants are allowed to make a 30-second call to a friend or family member "
					<< endl << "and ask them if they know the answer to the question,press( P or p ) to use it." << endl;
				cout << endl;
				cout << "                                                      Good Luck" << endl;
				cout << "\t\t\t\t  1-Start" << "			    	" << "3-EXit" << endl;
				cout << "choose : ";
				while (true) {
					cin >> x;
					if (x == '1' || x == '3') {
						break;
					}
					else
					{
						cout << "You should enter '1' or '3' !" << endl;
						PlaySound(TEXT("Buzz .wav"), NULL, SND_SYNC);
					}
				}
			}
			else if (x == '3') {
				system("color F0");
				cout << endl << endl << endl;
				system("cls");
				cout << "                                                         ";
				text_animation("Thank You ^-^");
				cout << endl;
				break;
			}

		}
		else {
			cout << "You should enter '1' or '2' or '3' !" << endl;
			PlaySound(TEXT("Buzz .wav"), NULL, SND_SYNC);
			cin >> x;
		}

	}
}

void text_animation(char a[100]) {
	
	for (int i = 0; a[i] != '\0'; ++i) {
		    Sleep(100);
			cout << a[i];
	}

}






