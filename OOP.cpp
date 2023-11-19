#include <iostream>
#include <list>
using namespace std;
class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;

	YouTubeChannel(string name, string ownername) {
		Name = name;
		OwnerName = ownername;
		SubscribersCount = 0;
	}

	void GetInfo() {
		cout << "Name:" << Name << endl;
		cout << "Owner Name: " << OwnerName << endl;
		cout << "Subscribers: " << SubscribersCount << endl;
		cout << "Videos:" << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
};

int main() {
	YouTubeChannel ytChannel("code beauty", "saldina"), ytChannel2("Amy Sing's", "Amy");
	ytChannel.PublishedVideoTitles.push_back("c++ for beginners video 1");
	ytChannel.PublishedVideoTitles.push_back("html & css video 1");
	ytChannel.PublishedVideoTitles.push_back("c++ oop video 1");
	ytChannel.GetInfo();
	ytChannel2.PublishedVideoTitles.push_back("Kaun Tujhe - Cover");
	ytChannel2.PublishedVideoTitles.push_back("Thodi Der - Cover");
	ytChannel2.GetInfo();
	

	system("pause>0");
}