#include"common.h"
#include"Hotel.h"
#include"Room.h"

class Cart {
	Hotel hotel;
	vector<Room> room;
	vector<Date> dateRange;

public:
	void setHotel(Hotel hotel);
	void setRooms(vector<Room> rooms);
	void setDates(vector<Date> dates);

};
