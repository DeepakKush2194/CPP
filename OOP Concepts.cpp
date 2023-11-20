#include <iostream>
#include <list>
using namespace std;
class YouTubeChannel {// CLASS - PARENT CLASS
private:// Access Specifiers
	string Name;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
protected:
	string OwnerName;
	int ContentQuality;
public: // Access Specifiers
	YouTubeChannel(string name, string ownername) { //Constructor, have no return-type
		Name = name;
		OwnerName = ownername;
		SubscribersCount = 0;
	}
	void GetInfo() { // METHOD
		cout << "Name:" << Name << endl;
		cout << "Owner Name: " << OwnerName << endl;
		cout << "Subscribers: " << SubscribersCount << endl;
		cout << "Videos:" << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() { // METHOD
		SubscribersCount++;
	}
	void UnSubscribe() { // METHOD
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string Titles) { // METHOD
		PublishedVideoTitles.push_back(Titles);
	}
	void CheckAnalytics() {
		if (ContentQuality < 5)
			cout << Name << " has bad quality content." << endl;
		else
			cout << Name << " has great content." << endl;
	}
};
class CookingYouTubeChannel :public YouTubeChannel { // Derived or Child Class
public:
	CookingYouTubeChannel(string name, string ownername) :YouTubeChannel(name, ownername) {

	}
	void Practice() {
		cout <<"Description"<<endl<< OwnerName << " is learning to make recepies and experimenting with spices...." << endl;
		ContentQuality++;
	}
};
// Polymorphism
class SingingYouTubeChannel :public YouTubeChannel { // Derived or Child Class
public:
	SingingYouTubeChannel(string name, string ownername) :YouTubeChannel(name, ownername) {

	}
	void Practice() {
		cout <<"Description"<<endl<< OwnerName << " is learning, taking classes and loves to dance....." << endl;
		ContentQuality++;
	}
};

int main() {
	CookingYouTubeChannel CookingChannel("Amy's Kitchen", "Amy");
	SingingYouTubeChannel singingytChannel("JohnSings", "John");
	CookingChannel.Practice();

	singingytChannel.Practice();
	singingytChannel.Practice();
	singingytChannel.Practice();
	singingytChannel.Practice();
	singingytChannel.Practice();

	YouTubeChannel* yt1 = &CookingChannel;
	YouTubeChannel* yt2 = &singingytChannel;

	yt1->CheckAnalytics();
	yt2->CheckAnalytics();

	system("pause>0");
}