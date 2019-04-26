#include"common.h"
#include"Booking.h"

class Room {
private:
	int roomNo;
	int bedCount;
	vector<Date> dates;
	float rent;

public:	
	Room(int _roomNo,int _bedCount, vector<Date> _dates,float _rent) {
		roomNo = _roomNo;
		bedCount = _bedCount;
		dates = _dates;
		rent = _rent;
	}

	virtual RoomType getRoomType() = 0;
};

class ACRoom : public Room {
	
public:
	ACRoom(int roomNo,int bedCount, vector<Date> dates,float rent) : Room(roomNo, bedCount, dates, rent){
		
	}

	RoomType getRoomType() {
		return RoomType::AC;
	}
};


class NonACRoom : public Room {

public:
	NonACRoom(int roomNo, int bedCount, vector<Date> dates, float rent) : Room(roomNo, bedCount, dates, rent) {

	}

	RoomType getRoomType() {
		return RoomType::NON_AC;
	}
};