#include"Hotel.h"
vector<Room> Hotel::getRooms(RoomType type, vector<Date> dateRanges) {
	//Need to filter based on roomtype , date ranges , price
	return rooms;
}

Receipt Hotel::bookRoom(vector<Room> rooms, vector<Date> dates) {
	Receipt rec;
	rec.hotelName = getName();
	rec.datesBooked = dates;
}