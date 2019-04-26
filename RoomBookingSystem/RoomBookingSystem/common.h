#include<vector>
using namespace std;


enum HotelType {
	FIVE_STAR,
	THREE_STAR,
	NORMAL
};

enum RoomType {
	AC,
	NON_AC
};

class Date {
	unsigned long startDate;
	unsigned long endDate;
};