#include"common.h"
#include"Booking.h"
#include"Room.h"

class Receipt {
public:
	string userName;
	string hotelName;
	int noOfDays;
	vector<Date> datesBooked;
	int amount;
	vector<Room> room;
};