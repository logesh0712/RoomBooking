#include"common.h"
#include"Hotel.h"
#include"Receipt.h"
#include"Payment.h"

/*
TODO:
	1. If we give list<hotel> .. lot of unwanted messages are flowing between client and server.
	2. So first , give list of hotel ids.
	3. if user/Any client , selects a hotel, then fetch list of room available status.
	4. Get desired room availabilty from user and book room.
*/


class RoomBookingSystem {

private:
	vector<Hotel> hotels;
	Receipt receipt;
	vector<Payment*> payment;

public:
	//Future, we can extend to filter based on below ...
	//price range
	//Hotel itself. Some user can search a hotel and he wants to book in that hotel only.
	vector<Hotel> getHotels(HotelType hotelType,RoomType roomType,vector<Date> dates);
	
	//returns booking id;
	Receipt bookRoom(Hotel hotel, vector<Room> rooms,vector<Date> dateRange);

	bool cancelBooking(int bookingId);

	Receipt editBooking(int bookingId,Hotel hotel,vector<Room> rooms, vector<Date> dateRange);
};