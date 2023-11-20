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
};
class CookingYouTubeChannel :public YouTubeChannel { // Derived or Child Class
public:
	CookingYouTubeChannel(string name, string ownername) :YouTubeChannel(name, ownername) {

	}
	void Desc() {
		cout <<"Description"<<endl<< OwnerName << " is trying to make new recepies." << endl;
	}
};

int main() {
	CookingYouTubeChannel CookingChannel("Amy's Kitchen", "Amy");
	CookingChannel.Subscribe();
	CookingChannel.Subscribe();
	CookingChannel.Subscribe();
	CookingChannel.PublishVideo("Apple Pie");
	CookingChannel.PublishVideo("Chocolate Cake");
	CookingChannel.Desc();
	CookingChannel.GetInfo();


	system("pause>0");
}