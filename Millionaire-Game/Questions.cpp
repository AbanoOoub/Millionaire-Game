#include "Questions.h"
#include<iostream>
#include<Windows.h>
#include<fstream>
#include<ctime>
#include<vector>
vector<Questions>v;
Questions qus;
Questions::Questions()
{
	Q = "";
	a1 = "";
	a2 = "";
	a3 = "";
	a4 = "";
	answer = "";
	nameFriend = "";
	fivefive = 0;
	calFr = 0;
	toloop = 0;
	peopleChoose = 0;
    test=' ';
}

void Questions::FiftyFifty(int num)
{
	system("cls");
	cout << num + 1 << "-" << v[num].Q << "          " << endl;
	//check the right answer ...
	// delete 2 from wrong ...
	if (v[num].answer[0] == 'A')
	{
		v[num].a2.erase();
		v[num].a3.erase();

		cout << v[num].a1 << endl<< "\t   \t" << v[num].a4 << endl;
	}
	else if (v[num].answer[0] == 'B')
	{
		v[num].a1.erase();
		v[num].a3.erase();
		cout <<"\t   \t" << v[num].a2 <<endl<< "\t   \t" << v[num].a4 << endl;

	}

	else if (v[num].answer[0] == 'C')
	{
		v[num].a2.erase();
		v[num].a4.erase();
		cout << v[num].a1 << endl << v[num].a3 << endl;

	}
	else if (v[num].answer[0] == 'D')
	{
		v[num].a1.erase();
		v[num].a3.erase();
		cout << "\t   \t" << v[num].a2 << endl << "\t   \t" << v[num].a4 << endl;

	}

}

void Questions::CallFriend(int num)
{
	system("cls");
	cout << "                                Enter Your Friend's Name To Call ^_^                     " << endl;
	cin >> nameFriend;
	Sleep(300);
	system("cls");
	cout << num + 1 << "-" << v[num].Q << "          " << endl;

	cout << v[num].a1 << "\t   \t" << v[num].a2 << endl
		<< v[num].a3 << "\t   \t" << v[num].a4 << endl;
	cout << "\t\t                                          Your Friend " << nameFriend << " Suggest  ";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t            "<<nameFriend << " Suggest : "<< v[num].answer[0] << endl;

}

void Questions::AudienceOpinion(int num)
{
	system("cls");
	cout << num + 1 << "-" << v[num].Q << "          " << endl;

	cout << v[num].a1 << "\t   \t" << v[num].a2 << endl
		<< v[num].a3 << "\t   \t" << v[num].a4 << endl;
	cout << "\t\t                                          Audience voting  " ;
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout << ".";
	Sleep(700);
	cout <<"\t\t\t\t\t\t\t\t\t\t\t                          Audience choose:" <<v[num].answer[0] << endl;

}

void Questions::MillionaireQuestions()
{

	int count = 0;         // wich qus 
	int gotohelp = 0;     //gotohelp to take 3 help only
	char choose, ch;
	for (int i = 0; i < v.size(); i++) {
		system("cls");
		cout << i + 1 << "-" << v[i].Q << "          " << endl;
		cout << v[i].a1 << "\t   \t" << v[i].a2 << endl
			<< v[i].a3 << "\t   \t" << v[i].a4 << endl;

		if (gotohelp <= 2)
		{
			cout << endl << "\t\t\t\t             ^_^  IF YOU Want Help Parss Y  Else Press  N  ^_^" << endl;
			while (true) {
				cin >> ch;
				if (ch == 'y' || ch == 'Y')
				{

					help(i);
					gotohelp++;
					break;
				}
				else if (ch == 'n' || ch == 'N')
				{
					system("cls");
					cout << i + 1 << "-" << v[i].Q << "          " << endl;
					cout << v[i].a1 << "\t   \t" << v[i].a2 << endl
						<< v[i].a3 << "\t   \t" << v[i].a4 << endl;
					break;
				}
				else
					cout << "\t\t\t\t\t              You should enter Y OR N" << endl;

			}
		}
		
		cout << endl <<"Your Answer Is :  ";
			cin >> choose;
			choose = toupper(choose);
			if (choose == v[i].answer[0]) {          // correct ans
				cout << "\t \t \t \t \t       congrats, you have " << million.front() << "$" << endl;
				cout << "\a";          //beb sound
				if (i < 14) {                             // not to appear in last qus
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
					cout << "   \t\t                               Sorry Wrong Answer!          " << endl;
					cout << "   \t\t                                  You have 0 $              " << endl;
					cout << "   \t\t                              Thank you for playing ..        " << endl;

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


void Questions::help(int num)
{
	if (toloop <= 3) {
		while (true) {
			cout << "\n\n \t\t ";
			if (fivefive != 1)
			{
				cout << "   ^_^  Press 'f' TO  50/50 OR ";

			}
			if (calFr != 1)
			{
				cout << " Press 'p' TO  Call Frind  OR";
			}
			if (peopleChoose != 1)
			{

				cout << " Press 'u' To  AudienceOpinion  ^_^ " << endl;

			}
			cin >>test;
			if (test == 'f' || test == 'F'&& fivefive < 1)
			{
				FiftyFifty(num);
				fivefive++;
				break;
			}
			else if ((test == 'p' || test == 'P') && calFr < 1)
			{
				CallFriend(num);
				calFr++;
				break;
			}
			else if ((test == 'u' || test == 'U') && peopleChoose < 1)
			{
				AudienceOpinion(num);
				peopleChoose++;
				break;
			}

			else {

				cout << "               Sorry Wrong Choose \n     ";
			}
		}
		toloop++;
	}
}

bool Questions::ContinueVSwithdraw()
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

void Questions::List()
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

void Questions::Getquestions()
{
	ifstream file;
	string s;
	int x, count1, count2;
	file.open("Easyquestions.txt");
	srand((unsigned int)time(0));
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
	srand((unsigned int)time(0));
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
	srand((unsigned int)time(0));
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








