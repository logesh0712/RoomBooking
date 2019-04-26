#include "common.h"
#include"Room.h"
#include"Receipt.h"

class Hotel {
private:
	string name;
	string address; //TODO: Later make this as a new class.
	HotelType type;
	vector<Room> rooms;

public:
	Hotel() {
	
	}
	
	string getName() {
		return name;
	}

	Hotel(string _name,string _address,HotelType _type,vector<Room> _rooms) {
		name = _name;
		address = _address;
		type = _type;
		rooms = _rooms;
	}

	HotelType getHotelType() {
		return type;
	}

	vector<Room> getRooms(RoomType type,vector<Date> dateRanges);
	Receipt bookRoom(vector<Room> rooms,vector<Date> dates);
	Receipt editRoom(int bookingId,vector<Room> rooms, vector<Date> dates);
	bool cancelRoom(int bookingId,vector<Room> rooms, vector<Date> dates);
	void setRooms(vector<Room> _rooms) {
		rooms = _rooms;
	}
};