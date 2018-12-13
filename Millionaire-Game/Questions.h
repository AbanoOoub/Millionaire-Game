#pragma once
#include <iostream>
#include<string>
#include<list>
using namespace std;
class Questions
{
public:
	Questions();
	string Q , a1, a2, a3, a4, answer, nameFriend;
	int fivefive = 0, calFr = 0, toloop = 0, peopleChoose = 0;
    list<long long>million;
	char test;
	void FiftyFifty(int num);           // f
	void CallFriend(int num);          //  P
	void AudienceOpinion(int num);    //   u
	void MillionaireQuestions();
	void help(int num);
	bool ContinueVSwithdrawal();
	void List();
	void Getquestions();
	};
