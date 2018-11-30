#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<fstream>
#include<Windows.h>
#include<time.h>
#include"Questions.h"
using namespace std;
vector<Questions>v;
list<long long>million;
Questions qus;
void Welcome();
void millionaire();
void MillionareStart();
bool ContinueVSwithdraw();
void Getquestions();
void List();

void main() {
	 List();
	Getquestions();
	MillionareStart();
}

void Welcome()
{
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

void millionaire()
{
	int count = 0;                      // wich qus 
	char choose;
	for (int i = 0; i < v.size(); i++) {
		system("cls");
		cout << i + 1 << "-" << v[i].Q << endl << endl
			<< v[i].a1 << "\t   \t" << v[i].a2 << endl
			<< v[i].a3 << "\t   \t" << v[i].a4 << endl;
		cin >> choose;
		choose = toupper(choose);
		if (choose == v[i].answer[0]) {          // correct ans
			cout << "\t \t \t \t \t       congrats, you have " << million.front() << "$" << endl;
			cout << "\a";          //beb sound
			if (i < 14){                             // not to appear in last qus
				if (!ContinueVSwithdraw())
					break;
		     }
			else
			{      // cross all rounds right $$$
				cout << endl << endl << endl << endl;;
				cout << "\t\t\t\t\t                  You are a millionare $                             " << endl;
				cout << "\t\t\t\t\t              __________________________________                   " << endl;
				cout << "\t\t\t\t\t             |                                  |    				" << endl;
				cout << "\t\t\t\t\t             |                                  |					" << endl;
				cout << "\t\t\t\t\t             |                                  |					" << endl;
				cout << "\t\t\t\t\t             |                                  |					" << endl;
				cout << "\t\t\t\t\t             |                                  |					" << endl;
				cout << "\t\t\t\t\t             |                                  |					" << endl;
				cout << "\t\t\t\t\t             |----------------------------------|					" << endl;
				cout << "\t\t\t\t\t            ******     *****  **  *****     ******				    " << endl;
				cout << "\t\t\t\t\t        ***                                        ***			    " << endl;
				cout << "\t\t\t\t\t         ********************************************			    " << endl;
				cout << "\t\t\t\t\t       /         *                         *         \				" << endl;
				cout << "\t\t\t\t\t       |        ***                       ***        |       	    " << endl;
				cout << "\t\t\t\t\t    (  |       *****                     *****       |  )	 	    " << endl;
				cout << "\t\t\t\t\t  (    |        ***                       ***        |    )  		" << endl;
				cout << "\t\t\t\t\t    (  |         *                         *         |  )	           " << endl;
				cout << "\t\t\t\t\t       |                     ^^                      |			    " << endl;
				cout << "\t\t\t\t\t       |                ^^ ^^  ^^  ^^                |			    " << endl;
				cout << "\t\t\t\t\t        \\          \__________________/           //				" << endl;
				cout << "\t\t\t\t\t         \\                                       //				" << endl;
				cout << "\t\t\t\t\t          \\                                     //			 	" << endl;
				cout << "\t\t\t\t\t            |____--_____--_________--____--_____|				    " << endl << endl;
				cout << "\t\t\t\t\t                    * Congratulations *                           " << endl;
			}
			million.pop_front();
			count++;
		}
		else            // lose ....
		{
			system("cls");
			if (count < 5) {    //lose before 1000$
				cout << "                                  Sorry Wrong Answer!          " << endl;
				cout << "                                     You have 0 $              " << endl;
				cout << "                                 Thank you for playing ..        " << endl;
			}
			else if (count == 5) {       // lose at 1000$
				system("cls");
				cout << endl << endl << endl << endl << endl << endl;
				cout << "                                                              Sorry Wrong Answer!                        " << endl;
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
				cout << "                                                           Thank you for playing                      " << endl;
			}
			else if (count < 10) {
				system("cls");
				cout << endl << endl << endl << endl << endl << endl;
				cout << "                                                              Sorry Wrong Answer!                        " << endl;
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
				cout << "                                                           Thank you for playing                      " << endl;

			}
			else if (count == 10) {
				system("cls");
				cout << endl << endl << endl << endl << endl << endl;
				cout << "                                                                          Sorry Wrong Answer!                            " << endl;
				cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$                                                                  " << endl;
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
				cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$									                               " << endl;
				cout << "                                                                        Thank you for playing ..                               " << endl;

			}
			else if (count < 15) {
				system("cls");
				cout << endl << endl << endl << endl << endl << endl;
				cout << "                                                                          Sorry Wrong Answer!                            " << endl;
				cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$                                                                  " << endl;
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
				cout << "                   $$$$$$$$$$$$$$$$$$ $$$$$$$$$$$$$$$$$$									                               " << endl;
				cout << "                                                                        Thank you for playing ..                               " << endl;


			}
			break;
		}
	}
}

void MillionareStart()
{
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

	int x;
	cout << endl << endl;
	cout <<"                                                    Who want to be a millionare $ ?"<<endl;
	cout << endl << endl ;
	cout << "\t1-Start" << "		\t\t		" << "2-Rules" << "		\t\t		" << "3-EXit" << endl;
	while (true) {
	   cin >> x;
	   system("cls");
	   if (x == 1) {           //start the game
			   millionaire();
			   break;
	   }
	   else if (x == 2) {
		   system("cls");
		   cout << "1.Play individually" << endl;
		   cout << "2.There are 15 questions in total and each question is worth a specific amount of money." << endl;
		   cout << "3.The Who Wants to Be a Millionaire questions are structured according to five different Levels "
			   << endl << "with each level increasing in difficulty. Each level contains three questions." << endl;
		   cout << "4.Questions that are grouped into the same level will all be of similar difficulty. For example: Questions 1-3 make up the first "
			   << endl << "Level and will contain the easiest questions. The second Level (Questions 4 to 6) will be slightly more difficult" << endl
			   << " followed by the third Level (Questions 7 to 9). The fourth Level (Questions 10 to 12) will consist of really difficult questions,"
			   <<endl<<" followed by the fifth, and last level (Questions 13 to 15) that will pose the most difficult questions of the game." << endl;
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
		   cout << "choose!:" << endl;
		   cout << "1-Start" << "				"<< "3-EXit" << endl;
	   }
	   else if (x == 3) {
		   cout << endl << endl << endl;
		   system("cls");
		   cout << "                                                         Thank You ^-^             " << endl;
		   break;
	   }
	   
	}
	

}

bool ContinueVSwithdraw()
{
	cout << endl << endl << endl;
	cout << "\t\t\t\t\t  Do you want to continue OR withdraw !" << endl;
	cout << "\t\t\t\t\t Continue press '+' , Withdraw press '-'" << endl;
	char x;
	cin >> x;
	if (x == '+') {
		return true;
	}
	else if (x == '-') {
		system("cls");
		cout << "    \t\t                         congratulations, you have " << million.front() << "$" << endl;
		cout << "      \t\t                           Thank you for playing ..         " << endl;
		return false;
	}
}

void Getquestions()
{
	ifstream file;
	string s;
	int x, count1, count2;
	file.open("Easyquestions.txt");
	srand(time(0));
	x = rand() % 24;
	count1 = x + 5;
	count2 = 0;
	while (!file.eof()) {
		if (count2 < x) {
			getline(file, qus.Q);
			getline(file, qus.a1);
			getline(file, qus.a2);
			getline(file, qus.a3);
			getline(file, qus.a4);
			getline(file, qus.answer);
			count2++;
		}
		else if (count2 >= x) {
			getline(file, qus.Q);
			getline(file, qus.a1);
			getline(file, qus.a2);
			getline(file, qus.a3);
			getline(file, qus.a4);
			getline(file, qus.answer);
			count2++;
			v.push_back(qus);
			if (count2 == count1) {
				break;
			}
		}
	}
	file.close();
	file.open("Mediumquestions.txt");
	srand(time(0));
	x = rand() % 8;
	count1 = x + 5;
	count2 = 0;
	while (!file.eof()) {
		if (count2 < x) {
			getline(file, qus.Q);
			getline(file, qus.a1);
			getline(file, qus.a2);
			getline(file, qus.a3);
			getline(file, qus.a4);
			getline(file, qus.answer);
			count2++;
		}
		else if (count2 >= x) {
			getline(file, qus.Q);
			getline(file, qus.a1);
			getline(file, qus.a2);
			getline(file, qus.a3);
			getline(file, qus.a4);
			getline(file, qus.answer);
			count2++;
			v.push_back(qus);
			if (count2 == count1) {
				break;
			}
		}
	}
	file.close();
	file.open("Hardquestions.txt");
	srand(time(0));
	x = rand() % 15;
	count1 = x + 5;
	count2 = 0;
	while (!file.eof()) {
		if (count2 < x) {
			getline(file, qus.Q);
			getline(file, qus.a1);
			getline(file, qus.a2);
			getline(file, qus.a3);
			getline(file, qus.a4);
			getline(file, qus.answer);
			count2++;
		}
		else if (count2 >= x) {
			getline(file, qus.Q);
			getline(file, qus.a1);
			getline(file, qus.a2);
			getline(file, qus.a3);
			getline(file, qus.a4);
			getline(file, qus.answer);
			count2++;
			v.push_back(qus);
			if (count2 == count1)
				break;
		}
	}
	file.close();
}

void List()
{
	million.push_back(100);
	million.push_back(200);
	million.push_back(300);
	million.push_back(500);
	million.push_back(1000);
	million.push_back(2000);
	million.push_back(4000);
	million.push_back(8000);
	million.push_back(16000);
	million.push_back(32000);
	million.push_back(64000);
	million.push_back(125000);
	million.push_back(250000);
	million.push_back(500000);
	million.push_back(1000000);
}
