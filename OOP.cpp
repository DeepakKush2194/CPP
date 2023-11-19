#include <iostream>
#include <list>
using namespace std;
class YouTubeChannel {
private:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
public:
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
	void Subscribe() {
		SubscribersCount++;
	}
	void UnSubscribe() {
		if(SubscribersCount>0)
			SubscribersCount--;
	}
	void PublishVideo(string Titles) {
		PublishedVideoTitles.push_back(Titles);
	}
};

int main() {
	YouTubeChannel ytChannel("code beauty", "saldina"), ytChannel2("Amy Sing's", "Amy");
	ytChannel.PublishVideo("c++ for beginners video 1");
	ytChannel.PublishVideo("html & css video 1");
	ytChannel.PublishVideo("c++ oop video 1");
	ytChannel.UnSubscribe();
	ytChannel.GetInfo();
	ytChannel2.PublishVideo("Kaun Tujhe - Cover");
	ytChannel2.PublishVideo("Thodi Der - Cover");
	ytChannel2.GetInfo();
	

	system("pause>0");
}