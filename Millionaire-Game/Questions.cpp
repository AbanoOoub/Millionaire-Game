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
	/*if (v[num].answer[0] == 'A')
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
*/
	int r;
	srand((unsigned int)time(0));
	r = 1 + (rand() % 3);
	if (v[num].answer[0] == 'A') {
		for (int i = 0; i < 2; i++) {          //to remove 2 choose
			if (r == 1) {
				v[num].a2.erase();
			}
			else if (r == 2) {
				v[num].a3.erase();
				
			}
			else if (r == 3) {
				v[num].a4.erase();
			}
			if (r == 3) {
				r--;
			}
			else
				r++;
		}
			cout <<"  "<< v[num].a1 << "\t   \t" << v[num].a2 << endl;
			cout <<"  "<< v[num].a3 << "\t   \t" << v[num].a4 << endl;
	}
	else if (v[num].answer[0] == 'B') {
		for (int i = 0; i < 2; i++) {
			if (r == 1)
				v[num].a1.erase();
			else if (r == 2)
				v[num].a3.erase();
			else if (r == 3)
				v[num].a4.erase();
			if (r == 3) {
				r--;
			}
			else
				r++;
		}
		cout << "  " << v[num].a1 << "\t   \t" << v[num].a2 << endl;
		cout << "  " << v[num].a3 << "\t   \t" << v[num].a4 << endl;
	}
	else if (v[num].answer[0] == 'C') {
		for (int i = 0; i < 2; i++) {
			if (r == 1)
				v[num].a1.erase();
			else if (r == 2)
				v[num].a2.erase();
			else if (r == 3)
				v[num].a4.erase();
			if (r == 3) {
				r--;
			}
			else
				r++;
		}
		cout << "  " << v[num].a1 << "\t   \t" << v[num].a2 << endl;
		cout << "  " << v[num].a3 << "\t   \t" << v[num].a4 << endl;
	}
	else if (v[num].answer[0] == 'D') {
		for (int i = 0; i < 2; i++) {
			
			if (r == 1)
				v[num].a1.erase();
			else if (r == 2)
				v[num].a2.erase();
			else if (r == 3)
				v[num].a3.erase();
			if (r == 3) {
				r--;
			}
			else
				r++;
		}
		cout << "  " << v[num].a1 << "\t   \t" << v[num].a2 << endl;
		cout << "  " << v[num].a3 << "\t   \t" << v[num].a4 << endl;
	}
}

void Questions::CallFriend(int num)
{
	system("cls");
	cout << "\t\t                                Enter Your Friend's Name To Call ^_^                     " << endl;
	cin >> nameFriend;
	Sleep(300);
	system("cls");
	cout << num + 1 << "-" << v[num].Q << "          " << endl;

	cout <<"  "<< v[num].a1 << "\t   \t" << v[num].a2 << endl
		 <<"  "<< v[num].a3 << "\t   \t" << v[num].a4 << endl;
	cout << "\t\t                                            Your Friend " << nameFriend << " Suggest  ";
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
	PlaySound(TEXT("callfriend.wav"), NULL, SND_SYNC);
	int r;
	while (true) {
		srand((unsigned int)time(0));
		r = 1 + (rand() % 4);
		if (r == 1) {
		     	if (!v[num].a1.empty()) {
		     		cout << "\t\t\t\t\t\t\t\t\t\t\t\t            " << nameFriend << " Suggest : A" << endl;
		     		break;
		     	}
		     	/*else
		     	{
		     		srand((unsigned int)time(0));
		     		r = 1 + (rand() % 4);
		     	}*/
		     }
		else if (r == 2) {
		     	if (!v[num].a2.empty()) {
		     		cout << "\t\t\t\t\t\t\t\t\t\t\t\t            " << nameFriend << " Suggest : B" << endl;
		     		break;
		     	}
		     	/*else {
		     		srand((unsigned int)time(0));
		     		r = 1 + (rand() % 4);
		     	}*/
		     }
		else if (r == 3) {
		     	if (!v[num].a3.empty()) {
		     		cout << "\t\t\t\t\t\t\t\t\t\t\t\t            " << nameFriend << " Suggest : C" << endl;
		     		break;
		     	}
		     	/*else {
		     		srand((unsigned int)time(0));
		     		r = 1 + (rand() % 4);
		     	}*/
		     }
		else if (r == 4) {
		     	if (!v[num].a4.empty()) {
		     		cout << "\t\t\t\t\t\t\t\t\t\t\t\t            " << nameFriend << " Suggest : D" << endl;
		     		break;
		     	}
		     	/*else {
		     		srand((unsigned int)time(0));
		     		r = 1 + (rand() % 4);
		     	}*/
		     }
	}
	PlaySound(TEXT("Done.wav"), NULL, SND_SYNC);

}

void Questions::AudienceOpinion(int num)
{
	int A, B, C, D, r;
	int total =100;
	system("cls");
	cout << num + 1 << "-" << v[num].Q << "          " << endl;

	cout <<"  "<< v[num].a1 << "\t   \t" << v[num].a2 << endl
		 <<"  "<< v[num].a3 << "\t   \t" << v[num].a4 << endl;
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
	cout << endl;
	
	if (v[num].answer[0] == 'A') {
		srand((unsigned int)time(0));
		r = 40 + (rand() % 30);                 // to get value from  40%  to 70% (the right ans)  
		A = r;

		r = 100 - A ;
		if (!v[num].a2.empty()) {
			srand((unsigned int)time(0));
			r = rand() % r;
			B = r;
		}
		else {
			B = 0;
		}
			r = 100 - (A + B);
		if (!v[num].a3.empty()) {
			srand((unsigned int)time(0));
			r = rand() % r;
			C = r;
		}
		else {
			C = 0;
		}
			r = 100 - (A + B + C);
		if (!v[num].a4.empty()) {
			D = r;
		}
		else {
			D = 0;
		}
		if (A + B + C + D != total) {
			total -= (A + B + C + D);
			A += total;
		}
	}

	else if (v[num].answer[0] == 'B') {
		srand((unsigned int)time(0));
		r = 40 + (rand() % 30);
		B = r;

			r = 100 - B;
		if (!v[num].a1.empty())
		{
			srand((unsigned int)time(0));
			r = rand() % r;
			A = r;
		}
		else {
			A = 0;
		}
			r = 100 - (A + B);
		if (!v[num].a3.empty()) {
			srand((unsigned int)time(0));
			r = rand() % r;
			C = r;
		}
		else {
			C = 0;
		}
			r = 100 - (A + B + C);
		if (!v[num].a4.empty()) {
			D = r;
		}
		else {
			D = 0;
		}

		if (A + B + C + D != total) {
			total -= (A + B + C + D);
			B += total;
		}
	}
	else if (v[num].answer[0] == 'C') {
		srand((unsigned int)time(0));
		r = 40 + (rand() % 30);
		C = r;

		r = 100 - C;
		if (!v[num].a1.empty()) {
			srand((unsigned int)time(0));
			r = rand() % r;
			A = r;
		}
		else {
			A = 0;
		}
		r = 100 - (A + C);
		if (!v[num].a2.empty()) {
			srand((unsigned int)time(0));
			r = rand() % r;
			B = r;
		}
		else {
			B = 0;
		}
			r = 100 - (A + B + C);
		if (!v[num].a4.empty()) {
			D = r;
		}
		else {
			D = 0;
		}
		if (A + B + C + D != total) {
			total -= (A + B + C + D);
			C += total;
		}
	}
	else if (v[num].answer[0] == 'D') {
		srand((unsigned int)time(0));
		r = 40 + (rand() % 30);
		D = r;

		r = 100 - D;
		if (!v[num].a4.empty()) {
			srand((unsigned int)time(0));
			r = rand() % r;
			A = r;
		}
		else {
			A = 0;
		}
		r = 100 - (A + D);
		if (!v[num].a4.empty()) {
			srand((unsigned int)time(0));
			r = rand() % r;
			B = r;
		}
		else {
			B = 0;
		}
			r = 100 - (A + B + D);
		if (!v[num].a4.empty()) {
			C = r;
		}
		else {
			C = 0;
		}
		if (A + B + C + D != total) {
			total -= (A + B + C + D);
			D += total;
		}
	}
	PlaySound(TEXT("peopleVoting.wav"), NULL, SND_SYNC);
	cout << "\t \t \t \t \t  A= " << A << "%" << "\t \t B=" << B << "%" << "\t \t C=" << C << "%" << "\t \t D=" << D << "%"<<endl;
	PlaySound(TEXT("Done.wav"), NULL, SND_SYNC);
}

void Questions::MillionaireQuestions()
{
	int count = 0;         // wich qus 
	int gotohelp = 0;     // to take 3 helps only
	char choose, ch;
	bool out=false;
	for (int i = 0; i < v.size(); i++) {
		system("color FA");
		system("cls");
		if (i == 4 || i == 9 || i == 14) {        
			system("color F9");
			cout << i + 1 << "-" << v[i].Q << "          " << endl;
			cout << "   " << v[i].a1 << "\t   \t" << v[i].a2 << endl
				 << "   " << v[i].a3 << "\t   \t" << v[i].a4 << endl;
			PlaySound(TEXT("next.wav"), NULL, SND_SYNC);
		}
		else {
			cout << i + 1 << "-" << v[i].Q << "          " << endl;
			cout << "   " << v[i].a1 << "\t   \t" << v[i].a2 << endl
				 << "   " << v[i].a3 << "\t   \t" << v[i].a4 << endl;
			PlaySound(TEXT("next.wav"), NULL, SND_SYNC);
		}
		
		if (gotohelp <= 2)
		{
				cout << endl << "\t\t\t\t             ^_^  IF YOU Want Help Parss 'Y' else Press 'N'  ^_^" << endl;
				PlaySound(TEXT("help.wav"), NULL, SND_SYNC);

				while (true) {
					cout << "Choose: ";
					cin >> ch;
					if (ch == 'y' || ch == 'Y')
					{
						help(i);
						gotohelp++;
						if (gotohelp <= 2) {

							cout << endl << "\t\t\t\t     ^_^  IF YOU Want more Help again Parss 'Y' else Press 'N'  ^_^" << endl;
							PlaySound(TEXT("help.wav"), NULL, SND_SYNC);
						}
						else
							break;
					}
					else if (ch == 'n' || ch == 'N')
					{
						system("cls");
						cout << i + 1 << "-" << v[i].Q << "          " << endl;
						cout << "   " << v[i].a1 << "\t   \t" << v[i].a2 << endl
							<< "   " << v[i].a3 << "\t   \t" << v[i].a4 << endl;
						break;
					}
					else {
						cout << "\t\t\t\t\t              You should enter Y OR N" << endl;
						PlaySound(TEXT("Buzz .wav"), NULL, SND_SYNC);
					}
		     	}
		    }

		cout << endl << "Your Answer Is :  ";
		while (true) {
			cin >> choose;
			choose = toupper(choose);
			if (choose == 'A' || choose == 'B' || choose == 'C' || choose == 'D') {
				if (choose == v[i].answer[0]) {                                   // correct ans
					system("cls");
					system("color F2");
					cout << endl << endl << endl << endl;
					cout << "\t \t \t \t \t       congrats, you have " << million.front() << "$" << endl;
					PlaySound(TEXT("rightAns.wav"), NULL, SND_SYNC);
					if (i < 14) {                                                 // not to appear in last qus
						system("cls");
						system("color F0");
						if (!ContinueVSwithdrawal()) {
							out = true;
							PlaySound(TEXT("million.wav"), NULL, SND_SYNC);
							break;
						}
					}
					else
					{                                // cross all rounds right $$$
						system("cls");
						system("color F2");
						for (int i = 0; i < 3; i++) {
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
							Sleep(700);
							system("cls");
						}
						cout << endl << endl << endl << endl;;
						cout << "\t\t\t\t\t                    You are a millionare $                           " << endl;
						cout << "\t\t\t\t\t              __________________________________                     " << endl;
						cout << "\t\t\t\t\t             |                                  |    				" << endl;
						cout << "\t\t\t\t\t             |                                  |					" << endl;
						cout << "\t\t\t\t\t             |                                  |					" << endl;
						cout << "\t\t\t\t\t             |                                  |					" << endl;
						cout << "\t\t\t\t\t             |                                  |					" << endl;
						cout << "\t\t\t\t\t             |                                  |					" << endl;
						cout << "\t\t\t\t\t             |----------------------------------|					" << endl;
						cout << "\t\t\t\t\t           *******     *****  **  *****     *******				    " << endl;
						cout << "\t\t\t\t\t       ***                                          ***			    " << endl;
						cout << "\t\t\t\t\t        **********************************************			    " << endl;
						cout <<" \t\t\t\t\t       |         *                         *         |               " << endl;
						cout << "\t\t\t\t\t       |        ***                       ***        |       	    " << endl;
						cout << "\t\t\t\t\t    (  |       *****                     *****       |  )	 	    " << endl;
						cout << "\t\t\t\t\t  (    |        ***                       ***        |    )  		" << endl;
						cout << "\t\t\t\t\t    (  |         *                         *         |  )	        " << endl;
						cout << "\t\t\t\t\t       |                                             |			    " << endl;
						cout << "\t\t\t\t\t       |                     ^^                      |			    " << endl;
						cout << "\t\t\t\t\t       |                ^^ ^^  ^^  ^^                |			    " << endl;
						cout << "\t\t\t\t\t       \\            ^^  ^^  ^^  ^^  ^^             //				" << endl;
						cout << "\t\t\t\t\t        \\                                         //				" << endl;
						cout << "\t\t\t\t\t         \\                                       //			    	" << endl;
						cout << "\t\t\t\t\t           |_____--_____--_________--____--______|				    " << endl << endl;
						cout << "\t\t\t\t\t                    * Congratulations *                              " << endl;
						PlaySound(TEXT("million.wav"), NULL, SND_SYNC);
					}

					million.pop_front();
					count++;
					break;
				}

				else            // lose ....
				{
					system("cls");
					system("color FC");
					if (count < 5) {                                                             //lose before 1000$
						cout << "   \t\t                               Sorry Wrong Answer!          " << endl;
						cout << "   \t\t                                  You have 0 $              " << endl;
						cout << "   \t\t                              Thank you for playing ..        " << endl;
						PlaySound(TEXT("wrongAns.wav"), NULL, SND_SYNC);
						out = true;
						break;
					}

					else if (count == 5) {       // lose at 1000$
						system("cls");
						system("color F2");
						cout << endl << endl << endl << endl << endl << endl;
						cout << "                                                         Sorry Wrong Answer!                        " << endl;
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
						PlaySound(TEXT("million.wav"), NULL, SND_SYNC);
						out = true;
						break;
					}
					else if (count < 10) {
						system("cls");
						system("color F2");
						cout << endl << endl << endl << endl << endl << endl;
						cout << "                                                         Sorry Wrong Answer!                        " << endl;
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
						PlaySound(TEXT("million.wav"), NULL, SND_SYNC);
						out = true;
						break;
					}
					else if (count == 10) {
						system("cls");
						system("color F2");
						cout << endl << endl << endl << endl << endl << endl;
						cout << "                                                                         Sorry Wrong Answer!                            " << endl;
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
						PlaySound(TEXT("million.wav"), NULL, SND_SYNC);
						out = true;
						break;
					}
					else if (count < 15) {
						system("cls");
						system("color F2");
						cout << endl << endl << endl << endl << endl << endl;
						cout << "                                                                        Sorry Wrong Answer!                            " << endl;
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
						PlaySound(TEXT("million.wav"), NULL, SND_SYNC);
						out = true;
						break;
					}
				}
			}
			else {
				cout << "You should enter";
				if (!v[i].a1.empty())
				{    
					cout << "(A) ";
				}
				if (!v[i].a2.empty()) {
					cout << "(B) ";
				}
				if (!v[i].a3.empty())
				{
					cout << "(C) ";
				}
				if (!v[i].a4.empty()) {
					cout << "(D) ";
				}
				cout <<"!"<< endl;
				PlaySound(TEXT("Buzz .wav"), NULL, SND_SYNC);
			}
				cout << endl << "Your Answer Is :  ";
		}
		if(out)
		    break; 
     }
}

void Questions::help(int num)                // num -> question index
{
	if (toloop <= 3) {
		while (true) {
			system("cls");
			cout << "\n\n \t\t ";

			if (fivefive != 1)
			{
				cout << "   ^_^  Press 'F' TO  50/50 ^_^ ";

			}
			if (calFr != 1)
			{
				cout << " ^_^ Press 'P' TO  Call Frind ^_^";
			}
			if (peopleChoose != 1)
			{

				cout << " ^_^ Press 'U' To  AudienceOpinion  ^_^ ";

			}
			cout << endl;
			PlaySound(TEXT("help.wav"), NULL, SND_SYNC);
			cout << "Choose: ";
			cin >>test;
			if (test == 'f' || test == 'F' && fivefive < 1)
			{
				FiftyFifty(num); 
				PlaySound(TEXT("fifty.wav"), NULL, SND_SYNC);
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

				cout << "\t\t\t\t\t\t\t    Sorry Wrong choose !  "<<endl;
				PlaySound(TEXT("Buzz .wav"), NULL, SND_SYNC);

			}
		}
		toloop++;
	}
}

bool Questions::ContinueVSwithdrawal()
{

	cout << endl << endl << endl;
	cout << "\t\t\t\t\t  Do you want to continue OR withdrawal !" << endl;
	cout << "\t\t\t\t\t  Continue press '+' , Withdraw press '-'" << endl;
	char x;
	while (true) {
		cout << "Choose: ";
		cin >> x;
		if (x == '+' || x == '-') {
			if (x == '+') {
				return true;
			}
			else if (x == '-') {
				system("cls");
				system("color F2");
				cout << "    \t\t                         congratulations, you have " << million.front() << "$" << endl;
				cout << "      \t\t                           Thank you for playing ..         " << endl;
				return false;
			}
		}
		else {
			cout << "\t\t\t\t   you should enter '+' to continue OR '-' to withdrawal !" << endl;
			PlaySound(TEXT("Buzz .wav"), NULL, SND_SYNC);
		}
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
	srand((unsigned int)time(0));                    // change number 
	x = rand()% 24;  
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
	x = rand() % 13;
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
	x = rand() % 20;
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








